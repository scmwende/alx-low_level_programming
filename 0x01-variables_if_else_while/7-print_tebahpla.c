#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * program that prints the lowercase alphabet in reverse
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
