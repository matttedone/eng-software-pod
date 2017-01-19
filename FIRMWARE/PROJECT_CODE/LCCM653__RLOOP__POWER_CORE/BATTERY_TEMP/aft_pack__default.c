//AFT pack default configuration

#include "../power_core.h"
//https://docs.google.com/spreadsheets/d/1buZjyQRxRDtQHxGwqnknch265qBxqOecV305UWF6D5U/edit#gid=0

/** Format:
u8SerialNumber[8U];
u8ChannelIndex;
u8Resolution;
u16UserIndex;
*/
const Luint8 u8AftPack__Default[] = {

/*Serial: 1A0E*/
0x28, 0xFF, 0x90, 0xB5, 0xA0, 0x16, 0x04, 0x3E, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xB0, 0xDF, 0xA0, 0x16, 0x05, 0x13, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xD8, 0x8E, 0xA0, 0x16, 0x03, 0xB6, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x44, 0xF2, 0xA0, 0x16, 0x05, 0x47, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x22, 0xB7, 0xA0, 0x16, 0x04, 0xF5, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x0A, 0xBD, 0xA0, 0x16, 0x04, 0x28, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x7A, 0xA6, 0xA0, 0x16, 0x03, 0x6A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x06, 0xC2, 0xA0, 0x16, 0x04, 0x3B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x3E, 0xA9, 0xA0, 0x16, 0x03, 0x06, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x21, 0x73, 0xA0, 0x16, 0x03, 0x0F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xAD, 0xAB, 0xA0, 0x16, 0x03, 0xF8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xED, 0x86, 0xA0, 0x16, 0x04, 0x7F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xE3, 0x87, 0xA0, 0x16, 0x05, 0x0C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x4B, 0xB7, 0xA0, 0x16, 0x03, 0x94, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x6B, 0xF4, 0xA0, 0x16, 0x05, 0xD9, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial:, 0x08E8*/
0x28, 0xFF, 0x20, 0x95, 0xA0, 0x16, 0x03, 0x82, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x10, 0xD8, 0xA0, 0x16, 0x05, 0xA6, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xB0, 0x68, 0xA0, 0x16, 0x04, 0x5A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x70, 0xCC, 0xA0, 0x16, 0x04, 0xDF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x44, 0xF1, 0xA0, 0x16, 0x05, 0xCF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xBA, 0xA1, 0xA0, 0x16, 0x03, 0xCE, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xC6, 0x8B, 0xA0, 0x16, 0x04, 0x6A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xD6, 0xB7, 0xA0, 0x16, 0x03, 0xCF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x19, 0xB5, 0xA0, 0x16, 0x04, 0x06, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x85, 0x68, 0xA0, 0x16, 0x04, 0x0C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x25, 0xF3, 0xA0, 0x16, 0x05, 0x14, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xCD, 0xF2, 0xA0, 0x16, 0x05, 0x7F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xC3, 0xCE, 0xA0, 0x16, 0x03, 0x5A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x9B, 0xE7, 0xA0, 0x16, 0x03, 0x12, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,
0x28, 0xFF, 0x17, 0xDB, 0xA0, 0x16, 0x05, 0x7F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,

/*, 0xSerial:, 0x8351*/
0x28, 0xFF, 0x30, 0xD8, 0xA0, 0x16, 0x05, 0x5E, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x5C, 0x8A, 0xA0, 0x16, 0x04, 0xEF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xC2, 0xF3, 0xA0, 0x16, 0x05, 0x9F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xF6, 0xD9, 0xA0, 0x16, 0x05, 0x6F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x1E, 0x68, 0xA0, 0x16, 0x04, 0xCB, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x89, 0xA6, 0xA0, 0x16, 0x03, 0x82, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x95, 0x86, 0xA0, 0x16, 0x04, 0x2C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x55, 0xCA, 0xA0, 0x16, 0x04, 0xFC, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xED, 0xB9, 0xA0, 0x16, 0x04, 0xAD, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xC3, 0xB4, 0xA0, 0x16, 0x04, 0x6A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x23, 0xB8, 0xA0, 0x16, 0x04, 0xA2, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xEB, 0x67, 0xA0, 0x16, 0x04, 0x25, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x5B, 0xBE, 0xA0, 0x16, 0x04, 0xF8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xFB, 0x8C, 0xA0, 0x16, 0x05, 0xDA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x5F, 0xC7, 0xA0, 0x16, 0x03, 0x5F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial:, 0xB760, 0x*/
0x28, 0xFF, 0x68, 0xB9, 0xA0, 0x16, 0x03, 0x37, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x38, 0xB5, 0xA0, 0x16, 0x04, 0x33, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xF8, 0x9E, 0xA0, 0x16, 0x03, 0x76, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x4C, 0xF2, 0xA0, 0x16, 0x05, 0x79, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x82, 0xEE, 0xA0, 0x16, 0x05, 0xD3, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x16, 0xF5, 0xA0, 0x16, 0x05, 0xD7, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x96, 0xA3, 0xA0, 0x16, 0x03, 0x10, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x9E, 0x80, 0xA0, 0x16, 0x05, 0x0B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x71, 0x9C, 0xA0, 0x16, 0x04, 0xCA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x9D, 0xBE, 0xA0, 0x16, 0x04, 0x46, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xC7, 0xBA, 0xA0, 0x16, 0x03, 0xE3, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x27, 0x89, 0xA0, 0x16, 0x03, 0xF9, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xA7, 0xB8, 0xA0, 0x16, 0x04, 0x76, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x0F, 0xF4, 0xA0, 0x16, 0x05, 0xD7, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x3F, 0xB8, 0xA0, 0x16, 0x03, 0x7C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0xB514*/
0x28, 0xFF, 0xB0, 0xAE, 0xA0, 0x16, 0x03, 0xE9, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xF0, 0xD2, 0xA0, 0x16, 0x03, 0xBA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xB8, 0xF0, 0xA0, 0x16, 0x05, 0xC7, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x04, 0xD3, 0xA0, 0x16, 0x05, 0x51, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xB4, 0xC8, 0xA0, 0x16, 0x03, 0x6F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x0C, 0xA6, 0xA0, 0x16, 0x03, 0x9B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xEC, 0xE1, 0xA0, 0x16, 0x05, 0xFA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x4A, 0x87, 0xA0, 0x16, 0x05, 0xCC, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xE1, 0xCB, 0xA0, 0x16, 0x04, 0x23, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x91, 0xE5, 0xA0, 0x16, 0x05, 0x75, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xB1, 0x8F, 0xA0, 0x16, 0x04, 0x58, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x43, 0xB7, 0xA0, 0x16, 0x03, 0xAA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xA3, 0xEE, 0xA0, 0x16, 0x05, 0xE6, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x73, 0xEE, 0xA0, 0x16, 0x05, 0xB8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x07, 0xE2, 0xA0, 0x16, 0x05, 0xD8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial: 0x3523*/
0x28, 0xFF, 0xE8, 0x8A, 0xA0, 0x16, 0x05, 0xE1, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xDC, 0x93, 0xA0, 0x16, 0x03, 0x0C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x22, 0xEF, 0xA0, 0x16, 0x05, 0x6F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x2A, 0x8D, 0xA0, 0x16, 0x05, 0xC6, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x6A, 0x94, 0xA0, 0x16, 0x04, 0xDA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x46, 0xCA, 0xA0, 0x16, 0x04, 0xCE, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x41, 0xED, 0xA0, 0x16, 0x03, 0xEA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x19, 0x8C, 0xA0, 0x16, 0x05, 0x83, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x99, 0x8A, 0xA0, 0x16, 0x04, 0x1F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x4D, 0xB8, 0xA0, 0x16, 0x03, 0x92, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xA3, 0xD7, 0xA0, 0x16, 0x05, 0x3D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xEB, 0x89, 0xA0, 0x16, 0x05, 0x27, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x87, 0xC9, 0xA0, 0x16, 0x03, 0x2A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x57, 0x73, 0xA0, 0x16, 0x04, 0x7D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x77, 0xF3, 0xA0, 0x16, 0x05, 0x02, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial: 0x24F0*/
0x28, 0xFF, 0x38, 0xAB, 0xA0, 0x16, 0x03, 0x9D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x38, 0xDB, 0xA0, 0x16, 0x05, 0xE8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xA4, 0xB7, 0xA0, 0x16, 0x03, 0x21, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x4C, 0xDE, 0xA0, 0x16, 0x05, 0x1B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xCC, 0xF7, 0xA0, 0x16, 0x03, 0xEE, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x7C, 0xF2, 0xA0, 0x16, 0x05, 0xFD, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x16, 0x97, 0xA0, 0x16, 0x04, 0x1E, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x96, 0xD2, 0xA0, 0x16, 0x05, 0xEA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x56, 0x88, 0xA0, 0x16, 0x04, 0x55, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x76, 0x94, 0xA0, 0x16, 0x04, 0x87, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x61, 0xA9, 0xA0, 0x16, 0x03, 0xFC, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x99, 0x85, 0xA0, 0x16, 0x04, 0x85, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x4D, 0xEE, 0xA0, 0x16, 0x03, 0x43, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x67, 0x83, 0xA0, 0x16, 0x04, 0x88, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x9F, 0x7E, 0xA0, 0x16, 0x04, 0xFC, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/* Serial: 05B2*/
0x28, 0xFF, 0x40, 0x7B, 0xA0, 0x16, 0x03, 0xCF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xC0, 0xEF, 0xA0, 0x16, 0x05, 0x36, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xB0, 0xE6, 0xA0, 0x16, 0x03, 0x15, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xBC, 0x82, 0xA0, 0x16, 0x04, 0x29, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xFC, 0xCE, 0xA0, 0x16, 0x03, 0xB1, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x2A, 0x99, 0xA0, 0x16, 0x03, 0x2D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xFA, 0x76, 0xA0, 0x16, 0x03, 0xA0, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xAE, 0x74, 0xA0, 0x16, 0x03, 0x2D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xFE, 0x90, 0xA0, 0x16, 0x04, 0x7C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xFE, 0xB4, 0xA0, 0x16, 0x04, 0x02, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x69, 0xBB, 0xA0, 0x16, 0x03, 0xFD, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x7D, 0xAC, 0xA0, 0x16, 0x03, 0x20, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x83, 0x71, 0xA0, 0x16, 0x03, 0xB8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xEB, 0x8A, 0xA0, 0x16, 0x04, 0xF1, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x1F, 0x80, 0xA0, 0x16, 0x03, 0xD0, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/* Serial: DD48*/
0x28, 0xFF, 0x00, 0xBA, 0xA0, 0x16, 0x04, 0x13, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xC8, 0xCC, 0xA0, 0x16, 0x04, 0xAE, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xEC, 0x8C, 0xA0, 0x16, 0x05, 0xF7, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x2A, 0xEB, 0xA0, 0x16, 0x03, 0x82, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xDA, 0xF3, 0xA0, 0x16, 0x05, 0xDD, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xD6, 0xB9, 0xA0, 0x16, 0x03, 0xDA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x2E, 0xA1, 0xA0, 0x16, 0x03, 0x66, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x75, 0x82, 0xA0, 0x16, 0x05, 0xA6, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x2D, 0xDE, 0xA0, 0x16, 0x05, 0xC7, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xC7, 0x94, 0xA0, 0x16, 0x04, 0x05, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xC7, 0x91, 0xA0, 0x16, 0x04, 0x84, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x67, 0x89, 0xA0, 0x16, 0x05, 0xCD, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xE7, 0xCC, 0xA0, 0x16, 0x04, 0x39, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x57, 0xAC, 0xA0, 0x16, 0x03, 0x65, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x77, 0xF3, 0xA0, 0x16, 0x03, 0xDF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial: 2410*/
0x28, 0xFF, 0x90, 0xF5, 0xA0, 0x16, 0x03, 0x5D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x48, 0x8D, 0xA0, 0x16, 0x05, 0x54, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xCC, 0x65, 0x84, 0x16, 0x05, 0xDF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xBA, 0xEE, 0xA0, 0x16, 0x05, 0x69, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x7A, 0x7E, 0xA0, 0x16, 0x03, 0x77, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xC6, 0xA0, 0xA0, 0x16, 0x03, 0x0D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x66, 0xDC, 0xA0, 0x16, 0x05, 0x59, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xBE, 0x7C, 0xA0, 0x16, 0x04, 0xCE, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x65, 0xBB, 0xA0, 0x16, 0x03, 0xDC, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x5D, 0x71, 0xA0, 0x16, 0x03, 0x44, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x7D, 0xA0, 0xA0, 0x16, 0x03, 0x32, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x13, 0x80, 0xA0, 0x16, 0x04, 0x72, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x2B, 0xAB, 0xA0, 0x16, 0x05, 0x72, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xAB, 0xEE, 0xA0, 0x16, 0x05, 0xD8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,
0x28, 0xFF, 0x3F, 0xBA, 0xA0, 0x16, 0x04, 0xF8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,

/*Serial: B9E3*/
0x28, 0xFF, 0x00, 0xD8, 0xA0, 0x16, 0x05, 0xDA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x80, 0xA2, 0xA0, 0x16, 0x03, 0x7F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xB0, 0xA6, 0xA0, 0x16, 0x03, 0xF5, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x68, 0xCF, 0xA0, 0x16, 0x03, 0x96, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xFC, 0xC9, 0xA0, 0x16, 0x04, 0xB4, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x32, 0x85, 0xA0, 0x16, 0x04, 0xC6, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xFA, 0xEA, 0xA0, 0x16, 0x03, 0x53, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x06, 0xBD, 0xA0, 0x16, 0x03, 0x8A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x81, 0xB9, 0xA0, 0x16, 0x03, 0x1E, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xC9, 0x97, 0xA0, 0x16, 0x04, 0x2F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xA9, 0xBC, 0xA0, 0x16, 0x03, 0x59, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x79, 0xA3, 0xA0, 0x16, 0x03, 0xA5, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x03, 0xCA, 0xA0, 0x16, 0x04, 0xF5, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xA7, 0xF4, 0xA0, 0x16, 0x05, 0xDA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xAF, 0xCB, 0xA0, 0x16, 0x04, 0x68, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial: 6067*/
0x28, 0xEE, 0x86, 0x35, 0x1E, 0x16, 0x01, 0x1C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x88, 0xE7, 0xA0, 0x16, 0x03, 0x20, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x48, 0xDC, 0xA0, 0x16, 0x05, 0x03, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x74, 0x8A, 0xA0, 0x16, 0x04, 0x29, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xBC, 0xB4, 0xA0, 0x16, 0x04, 0x68, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x72, 0xF0, 0xA0, 0x16, 0x05, 0x58, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x36, 0x6E, 0xA0, 0x16, 0x04, 0x04, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xEE, 0xC6, 0xA0, 0x16, 0x03, 0x52, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x21, 0x91, 0xA0, 0x16, 0x05, 0x9C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x2D, 0x8C, 0xA0, 0x16, 0x05, 0x18, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xDD, 0x8D, 0xA0, 0x16, 0x05, 0x31, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x5B, 0xBD, 0xA0, 0x16, 0x03, 0xF3, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xA7, 0xAE, 0xA0, 0x16, 0x03, 0xC4, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x17, 0xF5, 0xA0, 0x16, 0x05, 0x1A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xAF, 0xDC, 0xA0, 0x16, 0x05, 0x88, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,


/*Serial: 4B0E*/
0x28, 0xEE, 0xF0, 0x6C, 0x1B, 0x16, 0x02, 0x71, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xEE, 0x48, 0x3B, 0x1E, 0x16, 0x01, 0x89, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xEE, 0x32, 0x6E, 0x1B, 0x16, 0x02, 0xD7, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xEE, 0x66, 0x2F, 0x1E, 0x16, 0x01, 0xE5, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xEE, 0xFE, 0x2D, 0x1E, 0x16, 0x01, 0x6B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xEE, 0x53, 0x36, 0x1E, 0x16, 0x01, 0x18, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xEE, 0x8B, 0x2F, 0x1E, 0x16, 0x01, 0xD3, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xEE, 0xDB, 0x26, 0x1E, 0x16, 0x01, 0xD5, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xD0, 0x83, 0xA0, 0x16, 0x04, 0x96, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x38, 0xBC, 0xA0, 0x16, 0x03, 0x23, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xF4, 0xBB, 0xA0, 0x16, 0x03, 0xA6, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x96, 0xD4, 0xA0, 0x16, 0x03, 0x3E, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x2D, 0x99, 0xA0, 0x16, 0x04, 0xFF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xF7, 0xBB, 0xA0, 0x16, 0x03, 0xE8, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,
0x28, 0xFF, 0x0F, 0xD2, 0xA0, 0x16, 0x03, 0x73, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,

/*Serial: 2E32*/
0x28, 0xFF, 0x30, 0x8E, 0xA0, 0x16, 0x05, 0x8F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xC8, 0x7F, 0xA0, 0x16, 0x05, 0xE9, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x34, 0x67, 0xA0, 0x16, 0x04, 0x14, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x02, 0xDE, 0xA0, 0x16, 0x05, 0x50, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x06, 0xDE, 0xA0, 0x16, 0x05, 0x4F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x66, 0xF0, 0xA0, 0x16, 0x05, 0x3B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xE6, 0xF0, 0xA0, 0x16, 0x05, 0xF0, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x16, 0xE5, 0xA0, 0x16, 0x05, 0xEF, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xB1, 0x8D, 0xA0, 0x16, 0x05, 0x01, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xE9, 0x8F, 0xA0, 0x16, 0x03, 0x70, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x0D, 0xE6, 0xA0, 0x16, 0x05, 0x6B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x4D, 0xB7, 0xA0, 0x16, 0x04, 0x8B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xCD, 0x85, 0xA0, 0x16, 0x04, 0x0F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x8B, 0xF2, 0xA0, 0x16, 0x05, 0x0A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x5B, 0xBB, 0xA0, 0x16, 0x03, 0xFA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial: EB07*/
0x28, 0xFF, 0x20, 0xDB, 0xA0, 0x16, 0x05, 0xAA, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xE4, 0xE1, 0xA0, 0x16, 0x05, 0xC4, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x9A, 0xDA, 0xA0, 0x16, 0x05, 0xD7, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x66, 0x84, 0xA0, 0x16, 0x04, 0xC3, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x2E, 0x98, 0xA0, 0x16, 0x03, 0xBD, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xAE, 0xE9, 0xA0, 0x16, 0x03, 0x51, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x6E, 0xB2, 0xA0, 0x16, 0x04, 0xBC, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x21, 0x8B, 0xA0, 0x16, 0x04, 0xE1, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x69, 0xF4, 0xA0, 0x16, 0x05, 0x5A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x85, 0x98, 0xA0, 0x16, 0x04, 0x7D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xE5, 0xE5, 0xA0, 0x16, 0x05, 0x07, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xE5, 0xB7, 0xA0, 0x16, 0x03, 0x05, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x63, 0x80, 0xA0, 0x16, 0x04, 0x1F, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xE7, 0xB6, 0xA0, 0x16, 0x03, 0x09, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,
0x28, 0xFF, 0x77, 0xBB, 0xA0, 0x16, 0x03, 0x23, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,

/*Serial: C300*/
0x28, 0xFF, 0x48, 0xDB, 0xA0, 0x16, 0x05, 0x85, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xE4, 0xF4, 0xA0, 0x16, 0x05, 0x7D, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x42, 0xCB, 0xA0, 0x16, 0x03, 0xDD, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xD2, 0x84, 0xA0, 0x16, 0x04, 0x93, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xB2, 0xA5, 0xA0, 0x16, 0x05, 0x23, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x76, 0xEE, 0xA0, 0x16, 0x05, 0x6A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xBE, 0x84, 0xA0, 0x16, 0x04, 0xA3, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x51, 0xB2, 0xA0, 0x16, 0x04, 0x57, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x99, 0x94, 0xA0, 0x16, 0x04, 0x32, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x95, 0xCB, 0xA0, 0x16, 0x04, 0x51, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xE3, 0x8B, 0xA0, 0x16, 0x04, 0x40, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xBB, 0xF0, 0xA0, 0x16, 0x03, 0x54, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xBB, 0x85, 0xA0, 0x16, 0x04, 0xFE, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x2F, 0xAE, 0xA0, 0x16, 0x05, 0xEC, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,
0x28, 0xFF, 0x9F, 0xF0, 0xA0, 0x16, 0x05, 0x6E, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,

/*Serial: TODO*/
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,

/*Serial: TODO*/
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, 0x00,

/* TODO BMS Board #1 Temp Sensor */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__BMS_TEMP_MASK, C_PWRCORE__BMS_BOARD0_MASK,

/* TODO BMS Board #2 Temp Sensor */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__BMS_TEMP_MASK, C_PWRCORE__BMS_BOARD1_MASK,

/* TODO BMS Board #3 Temp Sensor */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 9, C_PWRCORE__BMS_TEMP_MASK, C_PWRCORE__BMS_BOARD2_MASK,


};
