#include <stdio.h>
void bubble_sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[50];
    int i;
    int n;
    printf("Enter size of the array: \n");
    scanf("%d", &n);
    printf("Enter elements of array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unsorted array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    bubble_sort(a, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}