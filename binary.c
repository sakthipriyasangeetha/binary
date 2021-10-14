#include<stdio.h>
void main()
{
int numRows=5;
	int row,col;
	for(row=1;row<=numRows;row++)
	{
		for(col=1;col<=row;col++)
		{
			int remainder=col%2;
			printf("%d",remainder);
			
		}
		printf("\n");
	}
}
