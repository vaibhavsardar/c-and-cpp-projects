#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 int box,b,k;
struct tic
{ int x1,x2,y1,y2;

    void cross(void)
   { line(x1,x2,y1,y2);
     line(y1,x2,x1,y2);
   }
   void fcircle(void)
   {  circle((x1+y1)/2,(x2+y2)/2,40);
   }
    void fline(int sum)
 {  printf("%d,%d",sum,b); if(( sum==3)||(sum==12)||( sum==21))
    {	for(k=320;k<630;k++)
       {	 line(320,(x2+y2)/2,k,(x2+y2)/2);
		   delay(11);
       }
    } else if(( sum==9)||( sum==12)||(sum==15))
    {	for(k=x1;k<630;k++)
	line((x1+y1)/2,x1,(x1+y1)/2,k);
    } else if(( sum==12))
    {	for(k=x1;k<630;k++)
	line((x1+y1)/2,x1,(x1+y1)/2,k);
    } else if(( sum==9)&&(box==2||box==5||box==6))
    {	for(k=x1;k<630;k++)
	line((x1+y1)/2,x1,(x1+y1)/2,k);
    }
 }
};
void arena(void);
void main()
{   int c[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int gdriver = DETECT,gmode;
int x,y,i,cho,l;
 struct tic t[9];
   clrscr();
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 t[0].x1=330;   t[0].x2=60;  t[0].y1=400;  t[0].y2=120;
  t[1].x1=440;   t[1].x2=60;  t[1].y1=510;  t[1].y2=120;
   t[2].x1=550;   t[2].x2=60;  t[2].y1=620;  t[2].y2=120;
    t[3].x1=330;   t[3].x2=180;  t[3].y1=400;  t[3].y2=250;
     t[4].x1=440;   t[4].x2=180;  t[4].y1=510;  t[4].y2=250;
      t[5].x1=550;   t[5].x2=180;  t[5].y1=620;  t[5].y2=250;
    t[6].x1=330;   t[6].x2=300;  t[6].y1=400;  t[6].y2=370;
   t[7].x1=440;   t[7].x2=300;  t[7].y1=510;  t[7].y2=370;
    t[8].x1=550;   t[8].x2=300;  t[8].y1=620;  t[8].y2=370;
      setbkcolor(0);
	settextstyle(1,0,8);
	outtextxy(55,44,"Welcome"); printf("\n"); outtextxy(277,133,"To");
	printf("\n");	outtextxy(111,222," TIC TAC TOE");
	settextstyle(3,0,2);
	outtextxy(11,300,"Loding...");
	for(l=1;l<565;l++)
	{  delay(1000/l);
	 rectangle(18,365,22+l,339);
	      setfillstyle(2,WHITE);
	     floodfill(21,344,WHITE);
}
	cleardevice();
	setbkcolor(1);

 printf("plyaer1 choies symbol\n1.X\n0.O\n");
 scanf("%d",&cho);
 arena();
       while(1)
       {   printf(" p1 enter box no\n");
	 scanf("%d",&box);
	 if(cho==1)
	{
	 t[box].cross();
	    if(box==0 || box==1 || box==2)
	    {   b=box+b;  c[0]++;
		 if(c[0]==3)
	      {	 break;  }

	    } else  if(box==3 || box==4 || box==5)
	    {   b=box+b; c[1]++;
		 if(c[1]==3)
		{	 break;}

	    } else  if(box==6 || box==7 || box==8)
	    {     b=box+b; c[2]++;
		 if(c[2]==3)
		   {   break;  }

	    }   if(box==0 || box==3 || box==6)
	    {     b=box+b; c[3]++;
		 if(c[3]==3)
	       {	 break;  }

	    }  if(box==1 || box==4 || box==7)
	    {    b=box+b; c[4]++;
		 if(c[4]==3)
		  {	 break;   }

	    }  if(box==2 || box==5 || box==8)
	    {     b=box+b; c[5]++;
		 if(c[5]==3)
	       {	 break;   }
	    }  if(box==0 || box==4 || box==8)
	    {     b=box+b; c[6]++;
		 if(c[6]==3)
	      {	 break;   }
	    }  if(box==2 || box==4 || box==6)
	    {    b=box+b; c[7]++;
		 if(c[7]==3)
		{ break; }
	    }
	}
	 else if(cho==0)
       {	 t[box].fcircle();
	     if(box==0 || box==1 || box==2)
	    {    b=box+b; c[0]++;
		 if(c[0]==3)
		 {	 break;  }
	    } else  if(box==3 || box==4 || box==5)
	    {   b=box+b;  c[1]++;
		 if(c[1]==3)
		{	 break; }
	    } else  if(box==6 || box==7 || box==8)
	    {    b=box+b; c[2]++;
		 if(c[2]==3)
		{ break;     }
	    }   if(box==0 || box==3 || box==6)
	    {    b=box+b; c[3]++;
		 if(c[3]==3)
	       {	 break;  }
	    }  if(box==1 || box==4 || box==7)
	    {    b=box+b; c[4]++;
		 if(c[4]==3)
	      {	 break; }
	    }  if(box==2 || box==5 || box==8)
	    {    b=box+b; c[5]++;
		 if(c[5]==3)
	       {	 break;    }
	    }   if(box==0 || box==4 || box==8)
	    {    b=box+b; c[6]++;
		 if(c[6]==3)
	       {	 break;  }
	    }   if(box==2 || box==4 || box==6)
	    {   b=box+b;  c[7]++;
		 if(c[7]==3)
	     {	 break;   }
	    }
	}

	 printf(" p2 enter box no\n");
	 scanf("%d",&box);
	 if(cho==0)
	{     t[box].cross();
	      if(box==0 || box==1 || box==2)
	    {    b=box+b; c[8]++;
		 if(c[8]==3)
	       {	 break; }
	    }  if(box==3 || box==4 || box==5)
	    {   b=box+b;  c[9]++;
		 if(c[9]==3)
		{ break;      }
	    }  if(box==6 || box==7 || box==8)
	    {    b=box+b; c[10]++;
		 if(c[10]==3)
	       {	 break; }
	    }  if(box==0 || box==3 || box==6)
	    {   b=box+b;  c[11]++;
		 if(c[11]==3)
		{ break;       }
	    }   if(box==1 || box==4 || box==7)
	    {   b=box+b;  c[12]++;
		 if(c[12]==3)
		{ break;     }
	    }   if(box==2 || box==5 || box==8)
	    {    b=box+b; c[13]++;
		 if(c[13]==3)
		 {	 break;}
	    }  if(box==0 || box==4 || box==8)
	    {   b=box+b;  c[14]++;
		 if(c[14]==3)
		 break;
	    }   if(box==2 || box==4 || box==6)
	    {    b=box+b; c[15]++;
		 if(c[15]==3)
		 break;
	    }
	 }
	 else if(cho==1)
	 {    t[box].fcircle();
		     if(box==0 || box==1 || box==2)
	    {    b=box+b; c[8]++;
		 if(c[8]==3)
		{ break;  }
	    }   if(box==3 || box==4 || box==5)
	    {    b=box+b; c[9]++;
		 if(c[9]==3)
		{ break;  }
	    }  if(box==6 || box==7 || box==8)
	    {    b=box+b; c[10]++;
		 if(c[10]==3)
		{ break;      }
	    }   if(box==0 || box==3 || box==6)
	    {   b=box+b;  c[11]++;
		 if(c[11]==3)
		{ break;        }
	    }  if(box==1 || box==4 || box==7)
	    {    b=box+b; c[12]++;
		 if(c[12]==3)
		{ break;    }
	    }   if(box==2 || box==5 || box==8)
	    {   b=box+b;  c[13]++;
		 if(c[13]==3)
		  {	 break;}
	    }   if(box==0 || box==4 || box==8)
	    {   b=box+b;  c[14]++;
		 if(c[14]==3)
		{ break;    }
	    }   if(box==2 || box==4 || box==6)
	    {   b=box+b;  c[15]++;
		 if(c[15]==3)
		{ break;    }
	    }
	 }

    }
	 for(i=0;i<16;i++)
	 {  if(c[i]==3)
	    {   if(i<=7)
	       {  t[box].fline(b);
		printf("player1 Win");
		 break;   }
	       else
	       {
		printf("player2 Win");
		  break; }
	    }
	 }

 getch();
}
void arena(void)
{        	    setbkcolor(1);
      rectangle(290,2,639,476);
	      setfillstyle(SOLID_FILL,4);
	     floodfill(300,9,WHITE);
    for(int y=0;y<121;y++)
   {	line(420-y,150,540+y,150);
	line(420-y,270,540+y,270);
	      delay(22);
	line(420,22+120-y,420,270+y);
	line(530,22+120-y,530,270+y);
    }
  }