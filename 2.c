#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0;
    int y, b;
    do
    {
         y = get_int("y = ");
         b = get_int("b = ");
    }
    while (y > b);

    for (int i = 0; y < b - 1 ; i++)
    {
        y++;
        printf("%d\n", y);
        n++;
    }
     printf("n = %d\n", n);
}