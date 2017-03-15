#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: ");
    int min = GetInt();
    
    if (min > 0)
    {
        int bot = ( 128 * (1.5 * min) ) / 16;
        printf("bot: %d\n", bot);
    }
    else
    {
        printf("Error\n");
    }
}
