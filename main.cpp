#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool isprime;
	int a,i,j,sum;
	printf("Please enter a number:");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		for(j=2,isprime=true;j*j<=i;j++)
		{
			if(i%j==0)
			isprime=false;
		}
		if(isprime)
		printf(" %d",i);
	}
	return 0;
}