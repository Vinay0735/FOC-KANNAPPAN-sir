 #include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,s,term;
    printf("Enter the value n:");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++);
    {
    	term=0;
    	for(j=1;j<=i;j++);
    	{
    		term=term+j++;			
			}
			s=s+term;
	}
	printf("Sum of the series S=%d.",s);
	return 0;
}
