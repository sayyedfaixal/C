#include <stdio.h>
int firstOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int fo = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            fo = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return fo;
}
int lastOccurence(int arr[], int n, int key)
{
    int lo = -1;
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            lo = mid;
            start = start + 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return lo;
}
int main()
{
    int arr[] = {0, 0, 1, 1, 2, 2, 2, 2};
    int n = 8;
    int key = 1;
    int fo = -1, lo = -1;
    fo = firstOccurence(arr, n, key);
    lo = lastOccurence(arr, n, key);
    printf("Total Number of %d is %d", key, lo - fo + 1);
    return 0;
}