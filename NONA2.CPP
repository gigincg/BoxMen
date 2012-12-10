#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<graphics.h>
void man(int,int);
void basicbox(void);
void gameover(void);
void main()
{
	clrscr();
	gameover();



	getch();
}
	void man(int i,int j)
{
	i=j;
	j=i;
	getch();

}
void basicbox()
{
	ofstream folvl("lvl.dat");
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "c:\\TurboC3\\bgi");
	int x=0;
	for(int i=2;i<25;i++)
	{
		gotoxy(1,i);
		cout<<"º";
		gotoxy(24,i);
		cout<<"º";
		gotoxy(80,i);
		cout<<"º";
	}
	for(i=2;i<80;i++)
	{
		gotoxy(i,2);
		cout<<"Í";
		gotoxy(i,25);
		cout<<"Í";
	}
	gotoxy(1,2);
	cout<<"É";
	gotoxy(24,2);
	cout<<"Ë";
	gotoxy(24,25);
	cout<<"Ê";
	gotoxy(80,25);
	cout<<"¼";
	gotoxy(1,25);
	cout<<"È";
	gotoxy(80,2);
	cout<<"»";


	for (int j=0;j<5;j++)
	for (int k=0; k<5;k++)
	{
		setfillstyle((k+j+1)%2, getmaxcolor());
		bar(195+87*k, 30+70*j, 282+87*k, 100+70*j);
	}
	getch();
	closegraph();
}

void gameover()
{
	clrscr();
	int i=1	;
	gotoxy(12,i++);
	cout<<"__________HHHHHHHHHHHHHHHHHHHHH__________";
	gotoxy(12,i++);
	cout<<"_________HHHHHHHHHHHHHHHHHHHHHHH_________";
	gotoxy(12,i++);
	cout<<"________HHHHHHHHHHHHHHHHHHHHHHHHH________";
	gotoxy(12,i++);
	cout<<"_______HHHHHHHHHHHHHHHHHHHHHHHHHHH_______";
	gotoxy(12,i++);
	cout<<"_______HHHHHHHHHHHHHHHHHHHHHHHHHHH_______";
	gotoxy(12,i++);
	cout<<"_______HHHHHHH`___`HHH`___`HHHHHHH_______";
	gotoxy(12,i++);
	cout<<"_______`HHHH`______HHH_______HHHH________";
	gotoxy(12,i++);
	cout<<"________HHHH_______HHH_______HHHH________";
	gotoxy(12,i++);
	cout<<"________HHHH______HHHHH______HHHH________";
	gotoxy(12,i++);
	cout<<"_________`HHHHHHHHH___HHHHHHHHH`_________";
	gotoxy(12,i++);
	cout<<"__________`HHHHHHH`___`HHHHHHH`__________";
	gotoxy(12,i++);
	cout<<"____________uHHHHHHHuHHHHHHHH____________";
	gotoxy(12,i++);
	cout<<"_____________HH`H`H`H`H`H`HH_____________";
	gotoxy(12,i++);
	cout<<"__HHH________HHHH_H_H_H_HHHH_______HHH___";
	gotoxy(12,i++);
	cout<<"_HHHHH________HHHHHHHHHHHHH_______HHHHH__";
	gotoxy(12,i++);
	cout<<"__HHHHHHH______`HHHHHHHHH`_____HHHHHHHH__";
	gotoxy(12,i++);
	cout<<"HHHHHHHHHHHHHH____`````____HHHHHHHHHHHHHH";
	gotoxy(12,i++);
	cout<<"HHHH```HHHHHHHHHHHHu___HHHHHHHHHHH```HHH`";
	gotoxy(12,i++);
	cout<<"_```______``HHHHHHHHHHHHH_``H```_________";
	gotoxy(12,i++);
	cout<<"___________HHHH_``HHHHHHHHHHHHH__________";
	gotoxy(12,i++);
	cout<<"__HHHHHHHHHHHHHHHHHH_”`HHHHHHHHHHHHHHHHH_";
	gotoxy(12,i++);
	cout<<"__HHHHHHHHHH`````___________``HHHHHHHHHHH";
	gotoxy(12,i++);
	cout<<"___`HHHHH``_____________________``HHHH`__";

	gotoxy(60,10);
	cout<<"GAME";
	gotoxy(63,11);
	cout<<"OVER";
	getch();
}