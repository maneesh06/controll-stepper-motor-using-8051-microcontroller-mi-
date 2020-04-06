#include<reg51.h>
sbit set1=P2^0;
sbit set2=P2^1;
sbit set3=P2^2;
sbit set4=P2^3;

void main()
{
	unsigned int i;
	set1=set2=set3=set4=0;
	while(1)
	{
		set1=1;
		set2=set3=set4=0;
		for(i=0;i<60000;i++);
		set2=1;
		set1=set3=set4=0;
		for(i=0;i<60000;i++);
		set3=1;
		set2=set1=set4=0;
		for(i=0;i<60000;i++);
		set4=1;
		set2=set3=set1=0;
		for(i=0;i<60000;i++);
		
	}
}