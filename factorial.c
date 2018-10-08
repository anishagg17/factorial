#include<stdio.h>
int main()
{
	int n,i,f;
	printf("Enter a number whose you want to find out the Factorial \n");
	scanf("%d",&n);
	if(n>=1)
	{
		for(i=1,f=1;i<=n;i+=1)
		{
			f*=i;
		}
		printf("The value of Factorial = %d",f);
	}
	else if(n==0)
	printf("The value of Factorial = 1");
	else if(n<0)
	printf("Sorry, Factorial of a negative number doesn't exist");
}
