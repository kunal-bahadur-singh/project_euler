#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: ./mult3or5 limit\n");
        return 1;
    }

    // What is the limit we are lookig for multiples in
    int limit = atoi(argv[1]);

    int sum = 0;

    // We have to check each natural number till limit
    for (int i = 1; i < limit; i++)
    {
        // If the num is divisible by 3 or 5 we will add it to the sum
        if ((i % 3) == 0 || (i % 5) == 0)
        {
            sum += i;
        }
    }

    printf("Sum of multiples of 3 or 5 till %i: %i\n", limit, sum);
}