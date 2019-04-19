#include<stdio.h>

/*void ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void ft_print (char c, char d, char u)
{
	putchar(c +48);
	putchar(d +48);
	putchar(u +48);
}

void ft_print_comb(void)
{
        char c;
	char d;
	char u;
	

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
        	while (d <= 8)
        	{	u = d + 1;
        		while (u <= 9)
			{
				ft_print(c,d,u);
				putchar(',');
				putchar(' ');
				if (u == 9 && d == 8 && c == 7)
					return;
			u++;
			}
		d++;
		}
	c++;
	}
 putchar('\n');
}

int main()
{
	ft_print_comb();
	return (0);
}
