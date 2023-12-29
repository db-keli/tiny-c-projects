#include "main.h"

int main(int argc, char *argv[])
{
    const char *nato[] = {
        "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
        "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
        "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
        "Sierra", "Tango", "Uniform", "Victor", "Whiskey",
        "Xray", "Yankee", "Zulu"
    };

    char phrase[64];
    char ch;
    char i;

    FILE *file;

    // printf("Enter a word or phrase: ");
    // fgets(phrase, sizeof(phrase), stdin);

    i = 0;

    if (argc < 2)
    {
        fprintf(stderr, "Please supply a text file argument\n");
        exit(1);
    }

    file = fopen(argv[1], "r");

    if (file == NULL)
    {
        fprintf(stderr, "Unable to open '%s'\n", argv[1]);
        exit(1);
    }


    // while (phrase[i])
    // {
    //     ch = toupper(phrase[i]);
    //     if (isalpha(ch))
    //         printf("%s ", nato[ch-'A']);
    //     i++;
    //     if (i ==64)
    //         break;
    // }
    
    read_file(ch, file, nato[0]);

    putchar('\n');

    fclose(file);

    return 0;
}