#include "main.h"

void read_file(int character, FILE *file, const char nato[])
{
    while ((character = fgetc(file)) != EOF)
    {
        if (isalpha(character))
            printf("%s ", &nato[toupper(character) - 'A']);
    }
}