#include <stdio.h>

/**
 * Main - prints the alphabet in lowercase
 * Return: 0
 */
in main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
