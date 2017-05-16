#include "defs.h"


void ShowDataD(int x[ ], int n)
{
    int i;

    for (i = n; i > 1 ; i--)
        printf("%d  ", x[i]);
    printf("\n");
}