#include<stdio.h>
#include<conio.h>
int sum(int x);
int main()
{
	int x,result;
	printf("Enter the number:");
	scanf("%d",&x);
	result=sum(x);
	printf("Sum of digits in %d is %d\n",x,result);
	return 0;
}
int sum(int x)
{
	if(x!=0)
	{
		return(x%10+sum(x/10));
		
	}
	else
	{
		return 0;
		
	}
}

