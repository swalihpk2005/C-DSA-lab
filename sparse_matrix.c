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
    int matrix1[10][10], matrix2[10][10];
    struct Sparse a[100], b[100], sum[100];
    int count1 = 0, count2 = 0, countSum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix1[i][j]);

            if (matrix1[i][j] != 0)
            {
                a[count1].row = i;
                a[count1].col = j;
                a[count1].value = matrix1[i][j];
                count1++;
            }
        }
    }

    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix2[i][j]);

            if (matrix2[i][j] != 0)
            {
                b[count2].row = i;
                b[count2].col = j;
                b[count2].value = matrix2[i][j];
                count2++;
            }
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int value = matrix1[i][j] + matrix2[i][j];

            if (value != 0)
            {
                sum[countSum].row = i;
                sum[countSum].col = j;
                sum[countSum].value = value;
                countSum++;
            }
        }
    }

    printf("\nSparse Matrix 1:\n");
    printf("Row\tColumn\tValue\n");

    for (i = 0; i < count1; i++)
    {
        printf("%d\t%d\t%d\n",
               a[i].row, a[i].col, a[i].value);
    }

    printf("\nSparse Matrix 2:\n");
    printf("Row\tColumn\tValue\n");

    for (i = 0; i < count2; i++)
    {
        printf("%d\t%d\t%d\n",
               b[i].row, b[i].col, b[i].value);
    }

    printf("\nSparse Matrix Addition:\n");
    printf("Row\tColumn\tValue\n");

    for (i = 0; i < countSum; i++)
    {
        printf("%d\t%d\t%d\n",
               sum[i].row, sum[i].col, sum[i].value);
    }

    return 0;
}