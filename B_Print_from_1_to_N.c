#include <stdio.h>

void pnt(int n)
{
    if (n)
    {
        pnt(n - 1);
    }
    else
    {
        return;
    }
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    pnt(n);
    return 0;
}