#include<stdio.h>

void ft_putnbr(int nb)
{
	int resultat;
	int modulo;

	if (nb < 0)
	{
	nb = nb * -1;
	putchar ('-');
	}

	modulo = nb%10;
	resultat = nb/10;	
	
	//printf( "%d", resultat);
	//putchar('\n');

	//printf( "%d", modulo);
	//putchar('\n');
	
	//printf( "%d", nb);
	//putchar('\n');

	if (resultat == 0)
	{
	putchar(modulo +48);
	//putchar('\n');
	return;
	}
		
	ft_putnbr(resultat);
	putchar(modulo +48);	
		  	
}


int main()
{
	ft_putnbr(12345678);
	return(0);

}
