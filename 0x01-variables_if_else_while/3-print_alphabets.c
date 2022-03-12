#include <stdio.h>

/**
 * main - This prints the lower and uppercase of the alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabet = 'a';
	int x;

	for (x = 0; x < 26; x++, alphabet++)
		putchar(alphabet);
	alphabet = 'A';
	for (x = 0; x < 26; x++, alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
