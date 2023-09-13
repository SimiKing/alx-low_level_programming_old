#include "main.h"

/**
 * print_alphabet_x10 - Make Alphabet 10 Times
 * Return: void
 */

void print_alphabet_x10(void)
{
char letter = 'a';
int count = 0;

while (count < 10)
{
	while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
	_putchar('\n');
	letter = 'a';
	count++;
}

}

