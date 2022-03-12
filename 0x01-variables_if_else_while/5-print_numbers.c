#include <stdio.h>

/**
 * main - prints numbers 0-9
 *
 * Return: 0 on success
 */
int main(void)
{
	char num = '0';
	int i;

	for (i = 0; i < 10; i++, num++)
		putchar(num);
	putchar('\n');

	return (0);
}
