#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    int sum = 0;
    if (row != col)
    {
        flag = 0;
        printf("not dia");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
                continue;
            }
            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    printf("%d\n", sum);
    if (flag == 1)
    {
        printf("primary");
    }
    else
    {
        printf("not");
    }
    return 0;
}