#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

void ft_cheker(char *str)
{
	size_t	len;
	size_t	A;
	size_t	a;
	
	len = strlen(str);
	A = 0;
	a = 0;

		for(int i = 0; i<len; i++)
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				A = 1;
			}else if(str[i] >= 'a' && str[i] <= 'z')
			{
				a = 1;
			}
		}
		if (A==1 && a==1){
			printf("Mix");
		} else if (A==1){
			printf("All Capital Letter");
		} else {
			printf("All Small Letter");
}
}


int main()
{
	char str[10001];
	scanf("%s",str);
	ft_cheker(str);
}


