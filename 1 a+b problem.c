#include <stdio.h>

int ft_sum(int a,int b)
{
    int result;
    result = a+b;
    return (result);
}

int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("%d",ft_sum(a,b));
}