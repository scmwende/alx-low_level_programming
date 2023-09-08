#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * Program assigns a random number
 * to variable n each time it is executed
 * print the last digit of the number stored in n
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5\n");
	else if (lastDigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
