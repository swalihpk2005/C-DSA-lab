#include <stdio.h>
int linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter size of the array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int target;
    printf("Enter target element: \n");
    scanf("%d", &target);
    int result = linear_search(a, n, target);
    if (result == -1)
    {
        printf("Element not found!");
    }
    else
    {
        printf("Element found at %d", result);
    }
}