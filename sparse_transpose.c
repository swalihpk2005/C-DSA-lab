#include <stdio.h>

struct Sparse
{
    int row;
    int col;
    int value;
};

int main()
{
    int r, c, i, j;
    int matrix[10][10];
    struct Sparse a[100], transpose[100];
    int count = 0;
    int k = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter the matrix:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] != 0)
            {
                a[count].row = i;
                a[count].col = j;
                a[count].value = matrix[i][j];
                count++;
            }
        }
    }

    printf("\nSparse Matrix:\n");
    printf("Row\tColumn\tValue\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\t%d\t%d\n",
               a[i].row,
               a[i].col,
               a[i].value);
    }

    for (j = 0; j < c; j++)
    {
        for (i = 0; i < count; i++)
        {
            if (a[i].col == j)
            {
                transpose[k].row = a[i].col;
                transpose[k].col = a[i].row;
                transpose[k].value = a[i].value;
                k++;
            }
        }
    }

    printf("\nTranspose of Sparse Matrix:\n");
    printf("Row\tColumn\tValue\n");

    for (i = 0; i < k; i++)
    {
        printf("%d\t%d\t%d\n",
               transpose[i].row,
               transpose[i].col,
               transpose[i].value);
    }

    return 0;
}