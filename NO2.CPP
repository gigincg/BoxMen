#include<graphics.h>
#include<conio.h>
void main()
{
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	arc(5,5,45,90,3);
	getch();
}