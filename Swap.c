#include "defs.h"

/* 配列の要素を交換する */
void Swap(int x[N][2], int i, int j)
{
	int temp,temp2;

	temp = x[i][1];
	temp2 = x[i][0];
    x[i][1] = x[j][1];
	x[i][0] = x[j][0];
	x[j][1] = temp;
	x[j][0] = temp2;
}
