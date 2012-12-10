#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<graphics.h>
void gmode(void);
void man(int,int);
void gameover(void);
class menu
{
	int selx;
	int sely;
   public:
	void sgame();
	void cgame();
	void credits();
};
class design
{
	int xlvl[30],ylvl[30];

   public:
	void bdsgn(void);
	void wldsgn(void);
};
void main()
{
	clrscr();
	design d;
	menu m;
	char ch;
	int i=3;
	gotoxy(10,i++);
	cout<<" ___________.__                _____                        ";
	gotoxy(10,i++);
	cout<<" \\__    ___/|  |__   ____     /     \\ _____  ________ ____  ";
	gotoxy(10,i++);
	cout<<"   |    |   |  |  \\_/ __ \\   /  \\ /  \\\\__  \\ \\___   // __ \\ ";
	gotoxy(10,i++);
	cout<<"   |    |   |   Y  \\  ___/  /    Y    \\/ __ \\_/    /\\  ___/ ";
	gotoxy(10,i++);
	cout<<"   |____|   |___|  /\\___  > \\____|__  (____  /_____ \\\\___  >";
	gotoxy(10,i++);
	cout<<"      	          \\/     \\/          \\/     \\/      \\/    \\/";
	textcolor(3);
	i+=2;
	gotoxy(30,++i);
	cout<<"[S]Start Game";
	i++;
	gotoxy(30,++i);
	cout<<"[G]Continue Game";
	i++;
	gotoxy(30,++i);
	cout<<"[C]Credits";
	i++;
	gotoxy(30,++i);
	cout<<"[Q]Quit Game";
	gotoxy(80,25);
	cin.get(ch);
	switch(ch)
	{
		case 's':
		case 'S':
		m.sgame();
		break;
		case 'g':
		case 'G':
		m.cgame();
		break;
		case 'c':
		case 'C':
		m.credits();
		case 'q':
		case 'Q':
		exit(0);
	}


	closegraph();
	getch();
}
	void man(int i,int j)
{
	i=j;
	j=i;
	getch();

}

void design::wldsgn()
{	clrscr();
	ifstream lvlo("lvl.dat");
	int i=0;
	int j=0;
	while(lvlo)
	{
		lvlo>>xlvl[i];
		i++;
		if((i-1)%5==0)
		j++;
		if(i==30)
		break;
	}

}
void design::bdsgn()
{

	for (int j=0;j<6;j++)
	for (int k=0; k<6;k++)
	{
		setfillstyle((k+j)%2, getmaxcolor());
		bar(195+72.5*k, 30+58.3*j, 282+72.5*k, 100+58.3*j);
	}
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
	getch();
}

void gameover()
{
	clrscr();
	int i=1	;
	gotoxy(14,i++);
	cout<<"                      :::!~!!!!!:.";
	gotoxy(14,i++);
	cout<<"                  .xUHWH!! !!?M88WHX:.";
	gotoxy(14,i++);
	cout<<"                .X*#M@$!!  !X!M$$$$$$WWx:.";
	gotoxy(14,i++);
	cout<<"               :!!!!!!?H! :!$!$$$$$$$$$$8X:";
	gotoxy(14,i++);
	cout<<"              !!~  ~:~!! :~!$!#$$$$$$$$$$8X:";
	gotoxy(14,i++);
	cout<<"             :!~::!H!<   ~.U$X!?R$$$$$$$$MM!";
	gotoxy(14,i++);
	cout<<"             ~!~!!!!~~ .:XW$$$U!!?$$$$$$RMM!";
	gotoxy(14,i++);
	cout<<"               !:~~~ .:!M`T#$$$$WX??#MRRMMM!";
	gotoxy(14,i++);
	cout<<"               ~?WuxiW*`   ``#$$$$8!!!!??!!!";
	gotoxy(14,i++);
	cout<<"             :X- M$$$$       ``T#$T~!8$WUXU~";
	gotoxy(14,i++);
	cout<<"            :%`  ~#$$$m:        ~!~ ?$$$$$$";
	gotoxy(14,i++);
	cout<<"          :!`.-   ~T$$$$8xx.  .xWW- ~""##*`";
	gotoxy(14,i++);
	cout<<".....   -~~:<` !    ~?T#$$@@W@*?$$      /`";
	gotoxy(14,i++);
	cout<<"W$@@M!!! .!~~ !!     .:XUW$W!~ ``~:    :";
	gotoxy(14,i++);
	cout<<"#`~~`.:x%`!!  !H:   !WM$$$$Ti.: .!WUn+!`";
	gotoxy(14,i++);
	cout<<":::~:!!`:X~ .: ?H.!u `$$$B$$$!W:U!T$$M~";
	gotoxy(14,i++);
	cout<<".~~   :X@!.-~   ?@WTWo(`*$$$W$TH$! `";
	gotoxy(14,i++);
	cout<<"Wi.~!X$?!-~    : ?$$$B$Wu(`**$RM!";
	gotoxy(14,i++);
	cout<<"$R@i.~~ !     :   ~$$$$$B$$en:``";
	gotoxy(14,i++);
	cout<<"?MXT@Wx.~    :     ~`##*$$$$M~";

	gotoxy(60,10);
	cout<<"GAME";
	gotoxy(63,11);
	cout<<"OVER";
	getch();
}
void gmode()
{
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "c:\\TurboC3\\bgi");
	errorcode = graphresult();

	if (errorcode != grOk)
	{
	   printf("Graphics error: %s\n", grapherrormsg(errorcode));
	   printf("Press any key to halt:");
	   getch();
	   exit(1);
	}

}