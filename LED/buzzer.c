#include<reg51.h>
#define buzz1 = P1^1
void delay_ms(unsigned int time)
{
	unsigned int i ,j;
	for (j=0; j<=time; j++)
	for (i=0;i<113;i++);
}

void main()
{
unsigned int i;

	buzz1 = 0x00;
	
	while(1)
	{
		P0=0x55;
		delay_ms(100);
		P0=0xAA;
		delay_ms(100);
		
	}
}