#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main( )
{
	char var[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(var[i]);
	putchar('\n');

	return 0;
}
