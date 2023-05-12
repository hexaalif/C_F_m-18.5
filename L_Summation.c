#include <stdio.h>

long long sum(int a[], int n, int i)
{
    if (i == n)
    {
        return 0;
    }
    long long s = 0;

    s += a[i];

    s += sum(a, n, i + 1);
    return s;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long s = sum(a, n, 0);
    printf("%lld", s);
    return 0;
}