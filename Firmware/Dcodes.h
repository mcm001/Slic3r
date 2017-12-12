#ifndef DCODES_H
#define DCODES_H

extern void dcode__1(); //D-1 - Endless loop (to simulate deadlock)

extern void dcode_0(); //D0 - Reset
extern void dcode_1(); //D1 - Clear EEPROM
extern void dcode_2(); //D2 - Read/Write RAM
extern void dcode_3(); //D3 - Read/Write EEPROM
extern void dcode_4(); //D4 - Read/Write PIN
extern void dcode_5(); //D5 - Read/Write FLASH
extern void dcode_6(); //D6 - Read/Write external FLASH
extern void dcode_7(); //D7 - Read/Write Bootloader
extern void dcode_8(); //D8 - Read/Write PINDA

extern void dcode_10(); //D10 - XYZ calibration = OK
extern void dcode_12(); //D12 - Reset failstat counters

extern void dcode_2130(); //D2130 - TMC2130
extern void dcode_9125(); //D9125 - PAT9125

#endif //DCODES_H