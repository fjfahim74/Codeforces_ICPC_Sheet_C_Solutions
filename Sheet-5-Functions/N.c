#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    int nam[n];
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] != 0)
        {
            nam[pos] = num[i];
            pos++;
        }
    }
    for (int i = pos; i < n; i++)
        nam[i] = 0;

    for (int i = 0; i < n; i++)
        printf("%d ", nam[i]);
    printf("\n");
}

int main()
{
    solve();
}