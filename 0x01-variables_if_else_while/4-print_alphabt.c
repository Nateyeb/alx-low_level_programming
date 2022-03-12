#include <stdio.h>

/**
 * main - prints the lowercase of alphabet except q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabet = 'a';
	int x;

	for (x = 0; x < 26; x++, alphabet++)
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	putchar('\n');
	return (0);
}
