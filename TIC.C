#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
struct tic
{ int x1,x2,y1,y2;

    void cross(void)
   { line(x1,x2,y1,y2);
     line(y1,x2,x1,y2);
   }
   void circle(void)
   {  circle((x1+y1)/2,(x2+y2)/2,40);
   }

};
void arena(void);
void main()
{   int c[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int gdriver = DETECT,gmode;
int x,y,i,cho,box;
 struct tic t[9];
   clrscr();
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 t[0].x1=330;   t[0].x1=60;  t[0].y1=400;  t[0].y2=120;
  t[1].x1=440;   t[1].x2=60;  t[1].y1=510;  t[1].y2=120;
   t[2].x1=550;   t[2].x2=60;  t[2].y1=620;  t[2].y2=120;
    t[3].x1=330;   t[3].x2=180;  t[3].y1=400;  t[3].y2=250;
     t[4].x1=440;   t[4].x2=180;  t[4].y1=510;  t[4].y2=250;
      t[5].x1=550;   t[5].x2=180;  t[5].y1=620;  t[5].y2=250;
    t[6].x1=330;   t[6].x2=300;  t[6].y1=400;  t[6].y2=370;
   t[7].x1=410;   t[7].x2=300;  t[7].y1=510;  t[7].y2=370;
    t[8].x1=550;   t[8].x2=300;  t[8].y1=620;  t[8].y2=370;

 printf("plyaer1 Enter symbol\n1.X\n0.O ");
 scanf("%d",&cho);
 arena();
       while(1)
       { printf(" p1 enter box no\n");
	 scanf("%d",&box);
	 if(cho==1)
	{ t[box].cross();
	    if(box==0 || box==1 || box==2)
	    {   c[0]++;
		 if(c[0]==3)
		 break;
	    } else  if(box==3 || box==4 || box==5)
	    {   c[1]++;
		 if(c[1]==3)
			 break;
	    } else  if(box==6 || box==7 || box==8)
	    {   c[2]++;
		 if(c[2]==3)
			 break;
	    } else  if(box==0 || box==3 || box==6)
	    {   c[3]++;
		 if(c[3]==3)
		 break;
	    } else  if(box==1 || box==4 || box==7)
	    {   c[4]++;
		 if(c[4]==3)
			 break;
	    } else  if(box==2 || box==5 || box==8)
	    {   c[5]++;
		 if(c[5]==3)
		 break;
	    } else  if(box==0 || box==4 || box==8)
	    {   c[6]++;
		 if(c[6]==3)
		 break;
	    } else  if(box==2 || box==4 || box==6)
	    {   c[7]++;
		 if(c[7]==3)
		 break;
	    }
	}
	 else if(cho==0)
       {	 t[box].circle();
		 if(box==0 || box==1 || box==2)
	    {   c[0]++;
		 if(c[0]==3)
			 break;
	    } else  if(box==3 || box==4 || box==5)
	    {   c[1]++;
		 if(c[1]==3)
			 break;
	    } else  if(box==6 || box==7 || box==8)
	    {   c[2]++;
		 if(c[2]==3)
		 break;
	    } else  if(box==0 || box==3 || box==6)
	    {   c[3]++;
		 if(c[3]==3)
		 break;
	    } else  if(box==1 || box==4 || box==7)
	    {   c[4]++;
		 if(c[4]==3)
		 break;
	    } else  if(box==2 || box==5 || box==8)
	    {   c[5]++;
		 if(c[5]==3)
		 break;
	    } else  if(box==0 || box==4 || box==8)
	    {   c[6]++;
		 if(c[6]==3)
		 break;
	    } else  if(box==2 || box==4 || box==6)
	    {   c[7]++;
		 if(c[7]==3)
		 break;
	    }
	}

	 printf(" p2 enter box no\n");
	 scanf("%d",&box);
	 if(cho==0)
	{ t[box].cross();
	}         if(box==0 || box==1 || box==2)
	    {   c[8]++;
		 if(c[8]==3)
		 break;
	    } else  if(box==3 || box==4 || box==5)
	    {   c[9]++;
		 if(c[9]==3)
		 break;
	    } else  if(box==6 || box==7 || box==8)
	    {   c[10]++;
		 if(c[10]==3)
		 break;
	    } else  if(box==0 || box==3 || box==6)
	    {   c[11]++;
		 if(c[11]==3)
		 break;
	    } else  if(box==1 || box==4 || box==7)
	    {   c[12]++;
		 if(c[12]==3)
		 break;
	    } else  if(box==2 || box==5 || box==8)
	    {   c[13]++;
		 if(c[13]==3)
			 break;
	    } else  if(box==0 || box==4 || box==8)
	    {   c[14]++;
		 if(c[14]==3)
		 break;
	    } else  if(box==2 || box==4 || box==6)
	    {   c[15]++;
		 if(c[15]==3)
		 break;
	    }
	 else if(cho==1)
	 { t[box].circle();
		     if(box==0 || box==1 || box==2)
	    {   c[8]++;
		 if(c[8]==3)
		 break;
	    } else  if(box==3 || box==4 || box==5)
	    {   c[9]++;
		 if(c[9]==3)
		 break;
	    } else  if(box==6 || box==7 || box==8)
	    {   c[10]++;
		 if(c[10]==3)
		 break;
	    } else  if(box==0 || box==3 || box==6)
	    {   c[11]++;
		 if(c[11]==3)
		 break;
	    } else  if(box==1 || box==4 || box==7)
	    {   c[12]++;
		 if(c[12]==3)
		 break;
	    } else  if(box==2 || box==5 || box==8)
	    {   c[13]++;
		 if(c[13]==3)
			 break;
	    } else  if(box==0 || box==4 || box==8)
	    {   c[14]++;
		 if(c[14]==3)
		 break;
	    } else  if(box==2 || box==4 || box==6)
	    {   c[15]++;
		 if(c[15]==3)
		 break;
	    }
	 }
    }
	 for(i=0;i<16;i++)
	 {  if(c[i]==3)
	    {   if(i<=7)
	       { printf("player1 Win");
		 break;   }
	       else
	       printf("player2 Win");   break;
	    }
	 }

 getch();
}
void arena(void)
{  printf("555");
	line(300,150,660,150);
	line(300,270,660,270);

	line(420,22,420,400);
	line(530,22,530,400);

}