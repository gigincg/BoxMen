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

   public:
	void sgame();
	void cgame();
	void lvlbld();
	void credits();
};
class design
{
	int hlvl[30],vlvl[30];
	void hwall(int);
	void vwall(int);
   public:
	void board(void);
	void wall(void);
	int lvlh(int i)
	{
		return hlvl[i];
	}
	int lvlv(int i)
	{
		return vlvl[i];
	}
}d;
class game
{
	int enposn[2]; //Enemy Positon
	int plposn[2]; //Player Position
  public:
	void place(void);
	void start(void);
}g;
void main()
{
	clrscr();
	menu m;
	char ch;
	int i=13;
	int j=0;
	do
	{
	textmode(C4350);
	clrscr();
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
	cout<<"[B]Build Level";
	i++;
	gotoxy(30,++i);
	cout<<"[C]Credits";
	i++;
	gotoxy(30,++i);
	cout<<"[Q]Quit Game";
	gotoxy(80,25);
	if(j%2!=0)
	clrscr();
	i=getch();
	switch(i)
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
		break;
		case 'b':
		case 'B':
		m.lvlbld();
		break;
		case 'q':
		case 'Q':
		exit(0);
	}
	j++;
	}while(i!=0);
	getch();
}
void game::place()
{
	ifstream lin("LVL.DAT",ios::app);
	char temp;
	char plpos[2],enpos[2];
	int i=1,j=0,k=0;
	while(lin)
	{

		if(i/31==1||i/32==1)
		{
			lin.get(plpos[j]);
			plposn[j]=plposn[j]-48;
			j++;
		}
		else if(i/32==1)
		{
			lin.get(enpos[k]);
			enposn[k]=enpos[k]-48;
			k++;
		}
		else
		lin.get(temp);
		i++;
	}

}
void game::start()
{

}
void menu::lvlbld()
{

}
void menu::sgame()
{
	clrscr();
	gmode();
	d.board();
	d.wall();
	g.place();
	getch();
	closegraph();

}
void menu::cgame()
{

	}
void menu::credits()
{
	clrscr();
	int i=3;
	gotoxy(8,i++);
	cout<<"   _____              _ _ _       ";
	gotoxy(8,i++);
	cout<<"  / ____|            | (_| |      ";
	gotoxy(8,i++);
	cout<<" | |     _ __ ___  __| |_| |_ ___ ";
	gotoxy(8,i++);
	cout<<" | |    | '__/ _ \\/ _` | | __/ __|";
	gotoxy(8,i++);
	cout<<" | |____| | |  __| (_| | | |_\\__ \\";
	gotoxy(8,i++);
	cout<<"  \\_____|_|  \\___|\\__,_|_|\\__|___/";
	i+=5;
	gotoxy(20,i++);
	cout<<"Programming:";
	i++;
	gotoxy(25,i++);
	cout<<" Gigin C George";
	i++;
	gotoxy(25,i++);
	cout<<" Chittu C Kuruvilla";
	i++;
	gotoxy(25,i++);
	cout<<" Joel George Thomas";
	i++;
	gotoxy(25,i++);
	cout<<" Gokul R Nair";
	i++;
	gotoxy(25,i++);
	cout<<" Devasivan R";
	i+=2;
	gotoxy(20,i++);
	cout<<"Technical Support:";
	i++;
	gotoxy(20,i++);
	cout<<"(Our Most Sincere and Devoted Teachers)";
	i++;
	gotoxy(25,i++);
	cout<<"Mrs. Mini Shaji";
	i++;
	gotoxy(25,i++);
	cout<<"Mr. P. S. Jolly";
	i++;
	gotoxy(25,i++);
	cout<<"Mrs Sheela Lalu";

	getch();

}

void design::wall ()
{
	char ch;
	int t,i=0;
	ifstream lvlin("LVL.DAT");
	while(lvlin)
	{
		lvlin .get(ch);
		t=ch-48;
		if(t==1)
		{
			if(i<30)
			hwall(i+1);
			else
			vwall((i+1)-30);
		}
		else if(i<30)
		hlvl[i]=t;
		else
		vlvl[i-30]=t;
		i++;
	}

}
void design::hwall(int i)
{
	setfillstyle(9,63);
	int j=(i-1)%6;
	int l=((i-1)/6)*58.3;
	bar(195+j*72.5,86+l,267+j*72.5,90+l);
}
void design::vwall(int i)
{
	setfillstyle(9,63);
	int j=((i-1)%5)*72.5;
	int l=(i-1)/5;
	bar(265+j,30+l*58.3,269+j,88+l*58.33);


}
void design::board()
{
	setcolor(5);
	int c;
	for (int j=0;j<6;j++)
	for (int k=0; k<6;k++)
	{
		setfillstyle((k+j)%2,56);
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