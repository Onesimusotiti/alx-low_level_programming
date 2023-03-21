#include <stdio.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char var[6] = "_putchar";
	int i;

	for (i = 0; i < 6; i++)
		putchar(var[i]);
	putchar('\n');

	return (0);
}
