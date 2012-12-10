#include<iostream.h>;
#include<conio.h>
void main()
{
	clrscr();
	int c;
	switch (c = getch())
  	{
  		case 0:
  		case 224:
    			switch (c = getch())
      			{
      				case 72: cout << "up arrow\n"; break;
      				case 75: cout << "left arrow\n"; break;
      				case 77: cout << "right arrow\n"; break;
      				case 80: cout << "down arrow\n"; break;
      				default: cout << "extended key " << c << "\n";
     			}
    		break;
  		default: cout << "normal key " << c << "\n";
  	}

	getch();

}