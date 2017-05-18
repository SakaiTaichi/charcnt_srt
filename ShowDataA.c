#include "defs.h"


void ShowDataA(int x[N][2], int n)
{
	int i;

    for (i = 62; i < n ; i++)
        printf("%c  %d\n",x[i][0],x[i][1]);
    printf("\n");
}