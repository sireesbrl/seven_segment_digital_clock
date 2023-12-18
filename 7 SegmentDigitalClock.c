#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>

void hours();
void mins();
void secs();
void nos();
void dot();
int h,m,s,i,a,b,c; 

COORD coord = {0, 0};

void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


main()
{
    while(1)
	{
        time_t currentTime;
        time(&currentTime);
        struct tm *myTime = localtime(&currentTime);
        h=myTime->tm_hour-12;
        m=myTime->tm_min;
        s=myTime->tm_sec;
    	system("cls");
    	gotoxy(28,10); printf("C U R R E N T  T I M E");
	    hours();
	    mins();
	    secs();
	    gotoxy(18,24); printf("This program is written by Shirish Baral.");
		sleep(1);
    }	
}

void hours()    
{	
    i=h/10; a=29; b=11;
    nos();
    i=h%10; a=32; b=11;
    nos();
    c=35;
    dot();
}

void mins()    
{	
    i=m/10; a=36; b=11;
    nos();
    i=m%10; a=39; b=11;
    nos(); 
    c=42;
    dot();
}

void secs()
{
	i=s/10;	a=43; b=11;
	nos();
	i=s%10;	a=46; b=11;
	nos();
	
}

void nos(){
	switch(i)
	{
		case 0:
			gotoxy(a,b);   printf(" _ \n");
			gotoxy(a,b+1); printf("| |\n");
			gotoxy(a,b+2); printf("|_|");
			break;
		case 1:
			gotoxy(a,b);   printf("\n");
			gotoxy(a,b+1); printf("  |\n");
			gotoxy(a,b+2); printf("  |");
			break;
		case 2:
			gotoxy(a,b);   printf(" _\n");
			gotoxy(a,b+1); printf(" _|\n");
			gotoxy(a,b+2); printf("|_");
			
		break;	
		case 3:
			gotoxy(a,b);   printf(" _\n");
			gotoxy(a,b+1); printf(" _|\n");
			gotoxy(a,b+2); printf(" _|");
		break;
		case 4:
			gotoxy(a,b);   printf("\n");
			gotoxy(a,b+1); printf("|_|\n");
			gotoxy(a,b+2); printf("  |");
		break;
		case 5:
			gotoxy(a,b);   printf(" _\n");
			gotoxy(a,b+1); printf("|_\n");
			gotoxy(a,b+2); printf(" _|");
		break;
		case 6:
			gotoxy(a,b);   printf(" _\n");
			gotoxy(a,b+1); printf("|_\n");
			gotoxy(a,b+2); printf("|_|");
		break;
		case 7:
			gotoxy(a,b);   printf(" _\n");
			gotoxy(a,b+1); printf("  |\n");
			gotoxy(a,b+2); printf("  |");
		break;
		case 8:
			gotoxy(a,b);   printf(" _ \n");
			gotoxy(a,b+1); printf("|_|\n");
			gotoxy(a,b+2); printf("|_|");
		break;
		case 9:
			gotoxy(a,b);   printf(" _\n");
			gotoxy(a,b+1); printf("|_|\n");
			gotoxy(a,b+2); printf(" _|");
		break;
	}
}

void dot()
{
	gotoxy(c,12); printf("."); 
	gotoxy(c,13); printf(".");
	
}

