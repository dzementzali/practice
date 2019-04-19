#include<stdio.h>

void ft_print (char a, char b, char c, char d)
{
	putchar(a +48);
	putchar(b +48);
	putchar(' ');
	putchar(c +48);
	putchar(d +48);

}

void ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;
a = 0;
b = 0;
c = 0;
d = 1;
while (a <= 9)
{
	while (b <= 9)
	{

			while (c <= 9)
			{		
					while (d <= 9)
					{
        					ft_print(a,b,c,d);
        					putchar(',');
        					putchar(' ');
						if (d == 9 && c == 9 && b == 8 && a == 9)
							return;

					d++;
					}
					d=0;		
			c++;
			}
	b++;
	d = b + 1;
	c = a; 	
	}

a++;
b = 0;	
}
	putchar('\n');
						
}

