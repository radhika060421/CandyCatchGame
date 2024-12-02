#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i;
	int life=3,level=1,score=0;
	int cordx=rand()%100;
	int cordy=3;
	int diff;
	int boxcordx=30;//1-80
	int boxcordy=23;//1-25
	char key;
	start:
	clrscr();
	gotoxy(35,1);
	printf("score : %d",score);
	gotoxy(70,1);
	printf("level : %d",level);
	gotoxy(35,2);
	printf("life  : %d",life );

	if(life==0)
	{
		gotoxy(30,15);
		printf("game over!!!");
		delay(2000);
		exit(0);
	}

	gotoxy(boxcordx,boxcordy);
	printf("*    *");
	gotoxy(boxcordx,boxcordy+1);
	printf("******");
	if(kbhit())
	{
		key=getch();
		if(key == 'a'||key == 'A')
		{
		boxcordx--;
		}
		if(key == 'd'||key == 'D')
		{
		boxcordx++;
		}
	}
	if(cordy==24)
	{
		diff=cordx-boxcordx;
		if(diff>=0 && diff<=6)
		{
		score++;
		}
		else
		{
		life--;
		}
		cordx = rand()%80;
		cordy = 3;
	}
	gotoxy(cordx,cordy);
	printf("0");
	delay(300);
	cordy++;
	goto start;
	getch();
}
