/**
 * @file		HE_THERM__SOLENOIDS.C
 * @brief		Solenoid Control
 * @author		Lachlan Grogan
 * @st_fileID	LCCM721R0.FILE.007
 */

/**
 * @addtogroup RLOOP
 * @{
*/
/**
 * @addtogroup HE_THERM
 * @ingroup RLOOP
 * @{
*/
/**
 * @addtogroup HE_THERM__SOLENOIDS
 * @ingroup HE_THERM
 * @{
*/
#include <LCCM721__RLOOP__HE_THERM/he_therm.h>
#if C_LOCALDEF__LCCM721__ENABLE_THIS_MODULE == 1U

//Main structure
extern TS_HET__MAIN sHET;
extern Luint8 HET_ManualMode;

Luint8 Sol_Open[4];  // 1 for open, 0 for close

/***************************************************************************//**
 * @brief
 * Configure the solenoids
 * 
 * @st_funcMD5		59DBB43CE132BA87912FB75CD265A819
 * @st_funcID		LCCM721R0.FILE.007.FUNC.001
 */
void vHETHERM_SOL__Init(void)
{

	sHET.sSol.sLeft.u8ChannelOverTemp_State = 0U;
	sHET.sSol.sRight.u8ChannelOverTemp_State = 0U;
	sHET.sSol.sBrake.u8ChannelOverTemp_State = 0U;

#ifndef WIN32
	//configure the IO channels.
	vRM4_GIO__Set_BitDirection(RM4_GIO__PORT_A, 0U, GIO_DIRECTION__OUTPUT);
	vRM4_GIO__Set_BitDirection(RM4_GIO__PORT_A, 1U, GIO_DIRECTION__OUTPUT);
	vRM4_GIO__Set_BitDirection(RM4_GIO__PORT_A, 2U, GIO_DIRECTION__OUTPUT);
	vRM4_GIO__Set_BitDirection(RM4_GIO__PORT_A, 5U, GIO_DIRECTION__OUTPUT);
#endif

	//all sols closed
	vHETHERM_SOL__Close(0);
	vHETHERM_SOL__Close(1);
	vHETHERM_SOL__Close(2);
	vHETHERM_SOL__Close(3);
}


/***************************************************************************//**
 * @brief
 * Process any solenoid tasks
 * 
 * @st_funcMD5		265F046D0ED65D916A38798F54F7F828
 * @st_funcID		LCCM721R0.FILE.007.FUNC.002
 */
void vHETHERM_SOL__Process(void)
{
	
	Lfloat32 f32MaxTemp;
	Lfloat32 f32MinTemp;
	Luint8   trip = 0;
	Luint8   trip2 = 0;

	//75C required for cooling on warning
	f32MaxTemp = 74.9F;
	f32MinTemp = 65.0F;

	//process the temperature channels and determine if we need cooling?
	if(sHET.sMotorTemp.sLeftHE.f32HighestTemp > f32MaxTemp)
	{
		sHET.sSol.sLeft.u8ChannelOverTemp_State = 1U;
	}
	else
	{
		sHET.sSol.sLeft.u8ChannelOverTemp_State = 0U;
	}

	if(sHET.sMotorTemp.sRightHE.f32HighestTemp > f32MaxTemp)
	{
		sHET.sSol.sRight.u8ChannelOverTemp_State = 1U;
	}
	else
	{
		sHET.sSol.sRight.u8ChannelOverTemp_State = 0U;
	}
	
	if(sHET.sMotorTemp.sBrakeMotor.f32HighestTemp > f32MaxTemp)
	{
		sHET.sSol.sBrake.u8ChannelOverTemp_State = 1U;
	}
	else
	{
		sHET.sSol.sBrake.u8ChannelOverTemp_State = 0U;
	}

	//95C required for cooling on Critical
	f32MaxTemp = 94.9F;
	if(sHET.sMotorTemp.sLeftHE.f32HighestTemp > f32MaxTemp)
	{
		sHET.sSol.sLeft.u8ChannelOverTemp_State = 2U;
	}
	else
	{
	}

	if(sHET.sMotorTemp.sRightHE.f32HighestTemp > f32MaxTemp)
	{
		sHET.sSol.sRight.u8ChannelOverTemp_State = 2U;
	}
	else
	{
	}

	if(sHET.sMotorTemp.sBrakeMotor.f32HighestTemp > f32MaxTemp)
	{
		sHET.sSol.sBrake.u8ChannelOverTemp_State = 2U;
	}
	else
	{
	}


    //above 65C required for 'normal cooling'
    if(sHET.sMotorTemp.sLeftHE.f32HighestTemp > f32MinTemp)
    {
        sHET.sSol.sLeft.u8ChannelOverTemp_State = 3U;
    }
    else
    {
    }

    if(sHET.sMotorTemp.sRightHE.f32HighestTemp > f32MinTemp)
    {
        sHET.sSol.sRight.u8ChannelOverTemp_State = 3U;
    }
    else
    {
    }

    if(sHET.sMotorTemp.sBrakeMotor.f32HighestTemp > f32MinTemp)
    {
        sHET.sSol.sBrake.u8ChannelOverTemp_State = 3U;
    }
    else
    {
    }

    // got into this if in auto mode.  return if in manual mode.
    if (!HET_ManualMode)  // == 0 auto is ON/Manual is OFF.  == 1 auto is off/Manual is ON
    {
        //  IF something is critical, TURN IT ON!!
        if (sHET.sSol.sLeft.u8ChannelOverTemp_State == 2U)
        {
            vHETHERM_SOL__Open(SOL_LEFT);   // ??? WHICH SOLENOID COOLS WHICH SIDE???
            Sol_Open[SOL_LEFT] = 1U;
        }
        if (sHET.sSol.sRight.u8ChannelOverTemp_State == 2U)
        {
            vHETHERM_SOL__Open(SOL_RIGHT);
            Sol_Open[SOL_RIGHT] = 1U;
        }
        if (sHET.sSol.sBrake.u8ChannelOverTemp_State == 2U)
        {
            vHETHERM_SOL__Open(SOL_BRAKE);
            Sol_Open[SOL_BRAKE] = 1U;
        }

        // Is anything in WARN STATE!!  If so, 1 second on, 1 second off
        if (sHET.sSol.sBrake.u8ChannelOverTemp_State == 1U)
        {
            if (Sol_Open[SOL_BRAKE] && sHET.sUDPDiag.u81000MS_Flag > 100)
            {
                vHETHERM_SOL__Close(SOL_BRAKE);
                Sol_Open[SOL_BRAKE] = 0U;
                trip2 = 1U;
            }
            if (!Sol_Open[SOL_BRAKE] && sHET.sUDPDiag.u81000MS_Flag > 100)
            {
                vHETHERM_SOL__Open(SOL_BRAKE);
                Sol_Open[SOL_BRAKE] = 1U;
                trip2 = 1U;
            }
        }
        if (sHET.sSol.sRight.u8ChannelOverTemp_State == 1U)
        {
            if (Sol_Open[SOL_RIGHT] && sHET.sUDPDiag.u81000MS_Flag > 100)
            {
                vHETHERM_SOL__Close(SOL_RIGHT);
                Sol_Open[SOL_RIGHT] = 0U;
                trip2 = 1U;
            }
            if (!Sol_Open[1] && sHET.sUDPDiag.u81000MS_Flag > 100)
            {
                vHETHERM_SOL__Open(SOL_RIGHT);
                Sol_Open[SOL_RIGHT] = 1U;
                trip2 = 1U;
            }
        }
        if (sHET.sSol.sLeft.u8ChannelOverTemp_State == 1U)
        {
            if (Sol_Open[SOL_LEFT] && sHET.sUDPDiag.u81000MS_Flag > 100)
            {
                vHETHERM_SOL__Close(SOL_LEFT);
                Sol_Open[SOL_LEFT] = 0U;
                trip2 = 1U;
            }
            if (!Sol_Open[SOL_LEFT] && sHET.sUDPDiag.u81000MS_Flag > 100)
            {
                vHETHERM_SOL__Open(SOL_LEFT);
                Sol_Open[SOL_LEFT] = 1U;
                trip2 = 1U;
            }
        }

        //  IF no overtemp situation is occurring -> 0.5 second on, 1.5 second off
        if (sHET.sSol.sBrake.u8ChannelOverTemp_State == 3U)
        {
            if (Sol_Open[SOL_BRAKE] && sHET.sUDPDiag.u8500MS_Flag > 50)
            {
                // if it's been 3/2 a second, turn off the solenoids.
                vHETHERM_SOL__Close(SOL_BRAKE);
                Sol_Open[SOL_BRAKE] = 0U;
                trip = 1U;
            }
            if (!Sol_Open[SOL_BRAKE] && sHET.sUDPDiag.u8500MS_Flag > 150)
            {
                vHETHERM_SOL__Open(SOL_BRAKE);
                Sol_Open[SOL_BRAKE] = 1U;
                trip = 1U;
            }
        }
        if (sHET.sSol.sRight.u8ChannelOverTemp_State == 3U)
        {
            if (Sol_Open[SOL_RIGHT] && sHET.sUDPDiag.u8500MS_Flag > 50)
            {
                // if it's been 3/2 a second, turn off the solenoids.
                vHETHERM_SOL__Close(SOL_RIGHT);
                Sol_Open[SOL_RIGHT] = 0U;
                trip = 1U;
            }
            if (!Sol_Open[SOL_RIGHT] && sHET.sUDPDiag.u8500MS_Flag > 150)
            {
                vHETHERM_SOL__Open(SOL_RIGHT);
                Sol_Open[SOL_RIGHT] = 1U;
                trip = 1U;
            }
        }
        if (sHET.sSol.sLeft.u8ChannelOverTemp_State == 3U)
        {
            if (Sol_Open[SOL_LEFT] && sHET.sUDPDiag.u8500MS_Flag > 50)
            {
                // if it's been 3/2 a second, turn off the solenoids.
                vHETHERM_SOL__Close(SOL_LEFT);
                Sol_Open[SOL_LEFT] = 0U;
                trip = 1U;
            }
            if (!Sol_Open[SOL_LEFT] && sHET.sUDPDiag.u8500MS_Flag > 150)
            {
                vHETHERM_SOL__Open(SOL_LEFT);
                Sol_Open[SOL_LEFT] = 1U;
                trip = 1U;
            }
        }

        if (!sHET.sSol.sBrake.u8ChannelOverTemp_State)
        {
            vHETHERM_SOL__Close(SOL_BRAKE);
            Sol_Open[SOL_BRAKE] = 0U;
        }
        if (!sHET.sSol.sLeft.u8ChannelOverTemp_State)
        {
            vHETHERM_SOL__Close(SOL_LEFT);
            Sol_Open[SOL_LEFT] = 0U;
        }
        if (!sHET.sSol.sRight.u8ChannelOverTemp_State)
        {
            vHETHERM_SOL__Close(SOL_RIGHT);
            Sol_Open[SOL_RIGHT] = 0U;
        }

        if (trip)
        {
            sHET.sUDPDiag.u8500MS_Flag = 0U;
        }
        if (trip2)
        {
            sHET.sUDPDiag.u81000MS_Flag = 0U;
        }
    } // if !Manual mode aka auto mode
}



/***************************************************************************//**
 * @brief
 * Open the sol, allowing gas to flow
 * 
 * @param[in]		u8Index			Sol index
 * @st_funcMD5		8F236426AF33C5B02788F538BB543678
 * @st_funcID		LCCM721R0.FILE.007.FUNC.003
 */
void vHETHERM_SOL__Open(Luint8 u8Index)
{
#ifndef WIN32
	switch(u8Index)
	{
		case 0:
			vRM4_GIO__Set_Bit(RM4_GIO__PORT_A, 0U, 1U);
			break;
		case 1:
			vRM4_GIO__Set_Bit(RM4_GIO__PORT_A, 1U, 1U);
			break;
		case 2:
			vRM4_GIO__Set_Bit(RM4_GIO__PORT_A, 2U, 1U);
			break;
		case 3:
			vRM4_GIO__Set_Bit(RM4_GIO__PORT_A, 5U, 1U);
			break;
		default:
			//do nothing.
			break;
	}//switch(u8Index)
#endif

}


/***************************************************************************//**
 * @brief
 * Close the solenoid, blocking gas
 * 
 * @param[in]		u8Index			Solenoid index
 * @st_funcMD5		D7BE4EAF87B58E720135FB17823121B5
 * @st_funcID		LCCM721R0.FILE.007.FUNC.004
 */
void vHETHERM_SOL__Close(Luint8 u8Index)
{
#ifndef WIN32
	switch(u8Index)
	{
		case 0:
			vRM4_GIO__Set_Bit(RM4_GIO__PORT_A, 0U, 0U);
			break;
		case 1:
			vRM4_GIO__Set_Bit(RM4_GIO__PORT_A, 1U, 0U);
			break;
		case 2:
			vRM4_GIO__Set_Bit(RM4_GIO__PORT_A, 2U, 0U);
			break;
		case 3:
			vRM4_GIO__Set_Bit(RM4_GIO__PORT_A, 5U, 0U);
			break;
		default:
			//do nothing.
			break;
	}//switch(u8Index)
#endif
}


#endif //#if C_LOCALDEF__LCCM721__ENABLE_THIS_MODULE == 1U
//safetys
#ifndef C_LOCALDEF__LCCM721__ENABLE_THIS_MODULE
	#error
#endif
/** @} */
/** @} */
/** @} */
