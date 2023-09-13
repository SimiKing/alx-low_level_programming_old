#include "main.h"

/**
 *  print_alphabet - Prints the alphabet in lowwercase
 *
 *  Return:voi
 */

void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

