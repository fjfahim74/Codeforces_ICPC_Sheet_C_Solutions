#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    char num[n + 1];
    scanf("%s", num);
    for (i = 0; i < n; i++)
    {
        sum = sum + (num[i] - '0');
    }
    printf("%d", sum);
}