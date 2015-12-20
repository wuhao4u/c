#include <stdio.h>
#include <ctype.h>

void main()
{
    int c, nc = 0, nl = 0, nw = 0;

    while ( (c = getchar()) != EOF )
    {
        nc++;
        if (c == '\n') nl++;
        if (isspace(c)) nw++;
    }

    printf("Number of characters = %d, number of lines = %d\n",
       nc, nl);
    printf("Number of words = %d\n", nw);
}