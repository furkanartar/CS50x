#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while((height < 1 || height > 8));

    for (int j = 1; j <= height; j++)
    {
        for (int i = height; i > j; i--)
        {
            printf(" ");
        }

        for (int k = 1; k <= j; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}