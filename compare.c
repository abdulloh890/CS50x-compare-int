#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What`s 1chi? ");
    int y = get_int("What`s 2chi? ");

    if (x < y)
    {
        printf("1chi is less than 2chi\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}
