#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int *a,*b,*c,i,j=0,k=0,n1,n2;
float m;
clrscr();
printf("enter the size of 1st and 2nd array");
scanf("%d %d",&n1,&n2);
a=(int *)malloc(n1*sizeof(int));
b=(int *)malloc(n2*sizeof(int));
c=(int *)malloc((n1+n2)*sizeof(int));
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
for(i=0;i<(n1+n2);i++)
{
if(a[k]<=b[j])
{
c[i]=a[k];
k++;
}
else
{
c[i]=b[j];
j++;
}
printf("%d",c[i]);
}
for(i=0;i<n1+n2;i++)
if((n1+n2)%2==0)
{
k=(n1+n2)/2;
m=(float)(c[k-1]+c[k])/2;
}
else
{
k=(n1+n2)/2;
m=c[k-1];
}
printf("\n\n%f",m);
free(a);
free(b);
free(c);
getch();
}