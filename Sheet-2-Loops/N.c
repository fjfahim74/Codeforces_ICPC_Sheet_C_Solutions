#include <stdio.h>
int main()
{
    char c;
    int n;
    scanf(" %c %d", &c, &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        for (int j = 1; j <= x; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}