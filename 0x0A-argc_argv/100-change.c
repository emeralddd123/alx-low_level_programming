#include "main.h"
/**
 *main - a program that prints the minimum number
 *of coins to make change for an amount of money.
 *@argc: arguments count
 *@argv: array of arguments
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y = 0, i, j;
	int k[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			j = x / k[i];
			x -= j * k[i];
			y += j;
			if (x == 0)
				break;
		}
	}
	printf("%d\n", y);
	return (0);
}
