#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * change - Helper function that does all the mathematics
 * @cents: Passed in variable from main for calculations
 * Return: Change
 */
int change(int cents)
{
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= n)
		{
			cents -= n;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
		while (cents >= p)
		{
			cents -=p;
			coins++;
		}
	}
	return (coins);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}
