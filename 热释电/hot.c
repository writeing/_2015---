#include <STC12C5A60S2.H>
sbit led = P4^4;
sbit hot = P1^0;
void delay(int t)
{
 int y;
 while(t--)
 {
 	y=200;
	while(y--);
 }
}

void main()
{
	P4SW=0x70;
	P4 = 0x00;
	while(1)
	{
		if(hot==1)
		{
			delay(20);
			if(hot == 1)
		 		led = 1;
		}	
		else
		{
		 led = 0;
		}
	}	
}