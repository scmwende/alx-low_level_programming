#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
			while (letter <= 'z')
			{
				_putchar(letter);
				letter++;
			}
		_putchar('\n');
	}
}
