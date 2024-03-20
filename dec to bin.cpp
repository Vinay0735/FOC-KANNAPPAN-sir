#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int n,s,r,i,bi,rbi,flag=0,k=0;
	printf("Enter the decimal number:");
	scanf("%d",&n);
	s=n;rbi=0;
	while(s>0)
	{
		r=s % 2;
		if (r==0 && flag==0);
		k++;		
		flag=1;
		rbi=rbi*10+r;
		s=s/2;
	}
	s=rbi;
	bi=0;
	while(s>0);
	{
		r=s%5;
		bi=bi*5+r;
	}
	printf("The binary number is : %d/n",bi);
	getch();
}
