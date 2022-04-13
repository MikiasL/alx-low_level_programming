#include <stdio.h>
/**
 * main - This prints out code
 *
 * Return: 0 if Successful
 */
int main(void)
{
	char d;

	d = 'a';

	while (d <= 'z')
	{
		if ((d != 'e') && (d != 'q'))
		{
			putchar(d);
			d++;
		}
		else
			d++;
	}
	putchar('\n');
	return (0);
}
© 2022 GitHub, Inc.
