#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int  a;

    do
    {
        a = get_int("N: ");
    }
    while (a <= 0);


    for(int i=1; i <= a; i++) {
        int square = i*i;

        if(square == a) {
            printf("%i\n", i);
            break;
        } else if(square > a) {
            printf("%i\n", i - 1);
            break;
        }
    }
}