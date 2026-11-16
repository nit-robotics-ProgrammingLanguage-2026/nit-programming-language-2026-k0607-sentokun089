#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i + j == n)
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}