#include "main.h"
#include <stdio.h>

/**
 * main - This prints all the args content.
 * @argc: This is the argument count.
 * @argv: This is the argument vector.
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])

{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
