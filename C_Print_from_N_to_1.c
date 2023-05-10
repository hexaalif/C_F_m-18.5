#include <stdio.h>

void pnt(int n)
{
    if (n < 1)
    {
        return;
    }

    printf("%d", n);
    if (n > 1)
    {
        printf(" ");
    }
    pnt(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    pnt(n);
    return 0;
}