#include <stdio.h>

int ft_sum(int a,int b,int c)
{
	int sum;
	sum = a+b+c;
	return (sum);
}

int ft_grade(int res)
{
	if(res >= 80 && res <= 100)
	{
		printf("A");
	}else if(res >= 75 && res <= 79)
	{
		printf("B+");
	}else if(res >= 70 && res <= 74)
	{
		printf("B");
	}else if(res >= 65 && res <= 69)
	{
		printf("C+");
	}else if(res >= 60 && res <= 64)
	{
		printf("C");
	}else if(res >= 55 && res <= 59)
	{
		printf("D+");
	}
	else if(res >= 50 && res <= 54)
	{
		printf("D");
	}else if(res >= 0 && res <= 49)
	{
		printf("F");
	}
}

int main()
{
	int a,b,c,sum;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	sum = ft_sum(a,b,c);
	ft_grade(sum);
	
}

