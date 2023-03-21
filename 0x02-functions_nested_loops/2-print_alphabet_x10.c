#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char i;

	while (x < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		x++;
	}
}
