#include<stdio.h>
//#include<conio.h>
int main()
{ int num1,num2,a,b,d;
 long unsigned int l=1;
 // clrscr();
  printf("enter two number");
  scanf("%d\t %d",&num1,&num2);
  printf("\n   number1   number2\n");
 for(a=1;a<111;a++)
{  for(d=2;d<111 ;++d)
 {
  if(num1%d==0||num2%d==0)
    {    if(num1%d==0)
	 num1=num1/d; else num1=num1;
	if(num2%d==0)
       num2=num2/d;  else num2=num2;
   printf("%d     %d      %d\n",d,num1,num2);  l=l*d;  }
    if(num1%d==0||num2%d==0)
    break;
 }  d=2;}  printf("=====================================\n");
  printf("LCM of input numbers=%lu",l);
  //getch();

  return 0;

}
