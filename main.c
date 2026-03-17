#include <8051.h>

void timer0_isr(void) __interrupt(1) {
    TH0 = 0xFE;
    TL0 = 0X34;
    P1_0= !P1_0; // Toggle P1.0
}

void main(void) {
    TMOD = 0x01;
    TH0 = 0xFE;
    TL0 = 0x34; 
    ET0 = 1;
    EA = 1;
    TR0 = 1;

    while(1);
}