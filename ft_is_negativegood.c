#include<stdio.h>

void ft_is_negative(int n);

int main()
{
	ft_is_negative(-32);
	return(0);
}

void ft_is_negative(n)
{
	if (n<=0)
	{
		putchar('N');
	}
	else
	{
		putchar('P');
	}
	putchar('\n');
}
