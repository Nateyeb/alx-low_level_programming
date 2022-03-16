#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
