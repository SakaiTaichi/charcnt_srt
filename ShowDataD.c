#include "defs.h"


void ShowDataD(int x[N][2], int n)
{
    int i;

    for (i = n-1; i > 62 ; i--)
        printf("%c  %d\n",x[i][0],x[i][1]);
    printf("\n");
}