#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
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

