#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            printf("Dec  Oct  Hex  C\n");
        }
        else
        {
            printf("Dec  Oct  Hex  C  ");
        }
    }

    for (int i = 0; i < 32; i++)
    {
        printf("%3d%5o%5x  - |", i, i, i);
        printf("%3d%5o%5x%3c |", i + 32, i + 32, i + 32, i + 32);
        printf("%3d%5o%5x%3c |", i + 64, i + 64, i + 64, i + 64);
        printf("%3d%5o%5x%3c\n", i + 96, i + 96, i + 96, i + 96);
    }
    return 0;
}