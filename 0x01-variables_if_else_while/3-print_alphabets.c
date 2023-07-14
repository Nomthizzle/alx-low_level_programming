#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char lp;

	for (lp = 'a'; lp <= 'z'; lp++)
		putchar(lp);
	
	for (lp = 'A'; lp <= 'Z';lp++)
		putchar(lp);

	putchar('\n');

	return (0);
}
		
