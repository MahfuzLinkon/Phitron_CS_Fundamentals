#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n][m];

    int flag = 1;
    
    if (n != m)
    {
        flag = 0;
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || (i + j) == (n - 1))
            {
                if (ar[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else if (ar[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}