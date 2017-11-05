#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How many minutes: ");
    int min = GetInt();
    
    if (min > 0)
    {
        int bot = ( 128 * (1.5 * min) ) / 16;
        printf("No of bottles: %d\n", bot);
    }
    else
    {
        printf("Eror\n");
    }
}
