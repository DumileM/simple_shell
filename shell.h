#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct passpseudoarg - contains pseudo arguments to be passed in the
 * prototype.
 * @c: the character to print.
 */

typedef struct passpseudoarg
{
        char c;
} info_t;

/**
 * _putchar - writes the character c to stdout.
 */

int _putchar(char);

#endif
