#include <stdio.h>

void f(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    printf("%d", s);
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
    f(a, n, 0);
}