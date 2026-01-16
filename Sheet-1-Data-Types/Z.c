#include <stdio.h>
#include <math.h>
int main()
{
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    double ab, cd;
    ab = B * log(A);
    cd = D * log(C);
    if (ab > cd)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}