#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], c[3][3], i, j;

	printf("Enter the elements for first matrix:\n");
		for (i = 0; i <= 2; i++)
		{
			for (j = 0; j <= 2; j++)
				scanf_s("%d", &a[i][j]);
		}
	printf("Enter the elements for Second matrix:\n");
		for (i = 0; i <= 2; i++)
		{
			for (j = 0; j <= 2; j++)
				scanf_s("%d", &b[i][j]);
		}
	printf("Multiplication of the two matrix is:");
		for (i = 0; i <= 2; i++)
		{
			for (j = 0; j <= 2; j++)
			{
				c[i][j] = a[i][j] * b[i][j];
				printf("%d", c[i][j]);
			}
			printf("\n");
		}

		return(0);
		
}