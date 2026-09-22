#include <stdio.h>
int binary_search(int arr[], int size, int key)
{
    int low = 0, mid, high = size;
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        return -1;
    }
}
int main()
{
    int a[50];
    int n;
    int target;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter target element: \n");
    scanf("%d", &target);
    int result = binary_search(a, n, target);
    if (result == -1)
    {
        printf("Element not found!");
    }
    else
    {
        printf("Element found at %d", result);
    }
}