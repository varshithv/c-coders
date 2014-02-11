#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int *a,i,j=0,n, count=0,count1=0,count2=0,element,l,k;
clrscr();
printf("enter the array size");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
	while(1)
	{
		if(a[j]!=-1)
		{
		k=a[j];
	for(i=j;i<n;i++)
	{
	if(a[i]==k)
	{
	a[i]=-1;
	count++;
	}
	}
	if(count>count1)
	{
	element=k;
	count1=count;
	j++;
	}
	}
	else
	{
	j++;
	}
for(i=0;i<n;i++)
{
if(a[i]==-1)
{
count2++;
}
}
if(count2==n)
{
break;
}
count=0;
count2=0;
}
printf("element %d\n count is %d",element,count1);
free(a);
getch();
}