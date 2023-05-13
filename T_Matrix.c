#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    scanf("%d", &row);
    int a[row][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    long long sum = 0;
    long long sum1 = 0;
    long long sum2 = 0;
    if (row != row)
    {
        flag = 0;
        printf("not dia");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + a[i][j];
                continue;
            }
            else if (i + j == row - 1)
            {
                sum2 = sum2 + a[i][j];
            }
            // if (a[i][j] != 0)
            // {
            //     flag = 0;
            // }
        }
    }
    sum = abs(sum1) + abs(sum2);
    printf("%lld\n", sum * 1);
    return 0;
}
// if (flag == 1)
// {
//     printf("primary");
// }
// else
// {
//     printf("not");
// }