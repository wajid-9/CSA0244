#include <stdio.h>
#define ROWS 3
#define COLUMNS 3
int main()
{
    int i, j;
    int matrixA[ROWS][COLUMNS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrixB[ROWS][COLUMNS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    printf("Result of A + B:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLUMNS; j++) {
            printf("%d\t", matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n");
    }
    return 0;
}

