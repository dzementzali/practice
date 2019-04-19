#include<stdio.h>

void ft_print_nombre(void);

int main()
{
	ft_print_nombre();
	return(0);
}

void ft_print_nombre()
{
	char nombre;
	nombre='0';
	while (nombre<='9')
	{
	putchar(nombre);
	nombre++;
	}
	putchar('\n');
}
