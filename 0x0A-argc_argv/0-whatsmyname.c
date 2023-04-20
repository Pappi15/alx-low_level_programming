#include <stdio.h>
#include <string.h>
	int main(__attribute__((unused)) int argc, char *argv[])
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */

{
    char *program = argv[0];
    int index = strlen(program) - 1;

    while (index >= 0 && program[index] != '/')
    {
        index--;
    }

    program = program + index + 1;

    printf("%s\n", program);

    return (0);
}

