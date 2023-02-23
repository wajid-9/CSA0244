#include <stdio.h>
int main()
{
    int i, j; 
	int matrixA[10][10], matrixB[10][10],rows,columns;
        printf("Enter the no of rows and columns(<=10):");
        scanf("%d%d", &rows, &columns);
  printf("Enter the input for first matrix:\n");
        for (i = 0; i < rows; i++) 
		{for (j = 0; j < columns; j++) 
				{scanf("%d", &matrixA[i][j]);}
        }
        printf("Enter the input for second matrix:\n");
        for (i = 0; i < rows; i++) 
		{for (j = 0; j < columns; j++) 
        {scanf("%d", &matrixB[i][j]);}
        }
   
    printf("Result of A + B:\n");
    for (i = 0; i < rows; i++) 
	{for (j = 0; j < columns; j++) 
	{printf("%d\t", matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n");
    }
}