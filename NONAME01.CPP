#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<graphics.h>
void man(int,int);
void basicbox(void);
void main()
{
	clrscr();
	basicbox();


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
	ofstream fout("lib.dat");
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "c:\\TurboC3\\bgi");
	int x=0;
	for(int i=2;i<25;i++)
	{
		gotoxy(1,i);
		cout<<"�";
		gotoxy(24,i);
		cout<<"�";
		gotoxy(80,i);
		cout<<"�";
	}
	for(i=2;i<80;i++)
	{
		gotoxy(i,2);
		cout<<"�";
		gotoxy(i,25);
		cout<<"�";
	}
	gotoxy(1,2);
	cout<<"�";
	gotoxy(24,2);
	cout<<"�";
	gotoxy(24,25);
	cout<<"�";
	gotoxy(80,25);
	cout<<"�";
	gotoxy(1,25);
	cout<<"�";
	gotoxy(80,2);
	cout<<"�";
	for(i=0;i<6;i++)
	{
	for(int j=0;j<4;j++)
	{
	for(int k=0;k<3;k++)
	{
		if(i%2==0)
		{
		gotoxy(25,x++);
		fout<<"���������";
		}

		else
		{
		gotoxy(25,x++);
		cout<<"���������";
		}
	}
	}
	}
	for(i=0;i<3;i++)
	{

	}
	getch();
	closegraph();
}

