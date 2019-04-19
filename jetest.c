#include<stdio.h>

void ft_print (char a, char b)
{
        putchar(a +48);
        putchar(b +48);

}

void ft_pront (char c, char d)
{
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
	a++;

        b = 0;
        while (a <= 9)
        {
             
                                                ft_print(a,b);
                                                if (d == 9 && c == 9 && b == 9 && a == 9)
                                                        return;
                                 
	b++;           
	}
      putchar (' ');

        char c;
        char d;

        c = 0;
        c++;

                  d = 0;
                        while (c <= 9)
                        {
                            ft_pront(c,d);
                            putchar(',');
                            putchar(' ');
                            if (d == 9 && c == 9 && b == 9 && a == 9)
                            return;
                                       
                        d++;           
			}
        putchar('\n');

}

int main()
{
        ft_print_comb2();
        return(0);
}
