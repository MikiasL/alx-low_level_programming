#include "main.h"

/**
 * puts2 - main function.
 * @str: Pointer, the string to print.
 *
 * Description: This function prints every other character of a string
 * (divisible by two)
 * Return: none.
 */

void puts2(char *str)
{
	int i, last;
	i= 0;

	while (str[i] != '\0')
	{
		i++;
	}
	last = (i + 1) / 2;
	for(i = last ; str[i]; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
