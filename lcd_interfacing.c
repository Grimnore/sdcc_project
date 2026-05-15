#include <8051.h>

// Define LCD data port (Port 0)
__sfr __at (0x80) ldata;

// Control pins
__sbit __at (0xA0) rs;   // P3.2
__sbit __at (0xA1) rw;   // P3.3
__sbit __at (0xA2) en;   // P3.4

// Function declarations
void lcdcmd(unsigned char value);
void lcddata(unsigned char value);
void MSDelay(unsigned int itime);

void main(void)
{
    lcdcmd(0x38);   // 8-bit mode
    MSDelay(250);

    lcdcmd(0x0E);   // Display ON
    MSDelay(250);

    lcdcmd(0x01);   // Clear display
    MSDelay(250);

    lcdcmd(0x06);   // Entry mode
    MSDelay(250);

    lcdcmd(0x80);   // Cursor position
    MSDelay(50);

    lcddata('P');
    MSDelay(50);

    lcddata('r');
    MSDelay(50);

    lcddata('a');
    MSDelay(50);

    lcddata('b');
    MSDelay(50);

    lcddata('h');
    MSDelay(50);

    lcddata('n');
    MSDelay(50);

    lcddata('o');
    MSDelay(50);

    lcddata('o');
    MSDelay(50);

    lcddata('r');
    MSDelay(50);

    lcddata(' ');
    MSDelay(50);

    lcddata('K');
    MSDelay(50);

    lcddata('a');
    MSDelay(50);

    lcddata('u');
    MSDelay(50);

    lcddata('r');
    MSDelay(50);




    while(1); // Infinite loop
}

void lcdcmd(unsigned char value)
{
    ldata = value;
    rs = 0;
    rw = 0;
    en = 1;
    MSDelay(1);
    en = 0;
}

void lcddata(unsigned char value)
{
    ldata = value;
    rs = 1;
    rw = 0;
    en = 1;
    MSDelay(1);
    en = 0;
}

void MSDelay(unsigned int itime)
{
    unsigned int i, j;
    for(i = 0; i < itime; i++)
        for(j = 0; j < 1275; j++);
}


