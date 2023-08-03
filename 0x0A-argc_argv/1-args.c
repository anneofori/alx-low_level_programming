#include "main.h"
#include <stdio.h>

/**
 * main - This prints the number of args.
 * @argc: This is the argument count.
 * @argv: This is the argument vector.
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])

{

	(void) argv;
	printf("%d\n", argc - 1);
	return (0);

}
