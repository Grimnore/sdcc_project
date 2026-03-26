#include <8052.h>

void delay(void);

void main(void)
{
    while(1)
    {
        P1 = 0xff; // Set all pins of Port 1 to high
        delay();    // Call delay function
        P1 = 0x00; // Set all pins of Port 1 to low
        delay();    // Call delay function
    }
}

void delay(void)
{
    int i, j;
    for(i=0; i<0xff; i++)
    {
        for(j=0; j<0xff; j++);
    }
} 
