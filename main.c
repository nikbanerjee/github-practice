#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, r;
    srand(time(NULL));
    for (i=0; i<10; i++)
    {
        r = (rand()%4)+1;
        printf("%d\n",r);
    }
    return 0;
}
