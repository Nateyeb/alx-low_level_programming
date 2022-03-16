#include "main.h"
/**
 * main - Use my main hearder file
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		++x;
	}
	_putchar('\n');

	return (0);
}
