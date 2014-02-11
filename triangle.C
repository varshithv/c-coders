#include<stdio.h>
#include<conio.h>
#include<math.h>
void fun(float,float,float,float,float,float);
void main()
{
float x1,x2,x3,y1,y2,y3;
clrscr();
printf("enter three co-ordinates x and y");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
fun(x1,y1,x2,y2,x3,y3);
getch();
}
void fun(float X1,float Y1,float X2,float Y2,float X3,float Y3)
{
int p=0;
float d1=sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2));
float d2=sqrt((X1-X3)*(X1-X3)+(Y1-Y3)*(Y1-Y3));
float d3=sqrt((X2-X3)*(X2-X3)+(Y2-Y3)*(Y2-Y3));
printf("%f %f %f\n",d1,d2,d3);
if(d1==d2&&d2==d3)
{
printf("EQUILATRAL TRIANGLE");
}
else if(d1==d2||d2==d3||d3==d1)
{
printf("ISOSCELES TRIANGLE");
}
else if((d1>d2)&&(d1>d3))
{
if((d1*d1)==(d2*d2)+(d3*d3))
{
printf("RIGHT ANGLED TRIANGLE");
}
else
p=-1;
}
else if((d2>d1)&&(d2>d3))
{
if((d2*d2)==(d1*d1)+(d3*d3))
printf("RIGHT ANGLED TRIANGLE");
else
p=-1;
}
else
{
if((d3*d3)==(d1*d1)+(d2*d2))
printf("RIGHT ANGLED TRIANGLE");
else
p=-1;
}
if(p==-1)
printf("SCALENE");
}