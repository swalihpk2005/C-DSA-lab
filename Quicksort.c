#include <stdio.h>
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        int p = i + 1;
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}
int main()
{
    int a[50];
    int low = 0;
    int size;
    printf("Enter size of the array: \n");
    scanf("%d", &size);
    int high = size - 1;
    printf("Enter elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unsorted array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    quicksort(a, low, high);
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
