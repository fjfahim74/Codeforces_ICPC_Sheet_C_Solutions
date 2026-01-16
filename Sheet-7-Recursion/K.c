#include <stdio.h>

int f(int arr[], int n)
{
    if (n < 0)
        return -2147483647;
    int m = f(arr, n - 1);
    if (arr[n] > m)
        m = arr[n];
    return m;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int ans = f(arr, n - 1);
    printf("%d\n", ans);
}
