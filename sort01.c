#include <stdio.h>
int main()
{
    int a[100];
    int n, temp;
    int sp = 0, ep;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    ep = n - 1;
    printf("Now Enter the number : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (sp < ep)
    {
        if (a[sp] == 0)
            sp++;
        else if (a[ep] == 1)
            ep--;
        else if (a[sp] == 1 && a[ep] == 0)
        {
            temp = a[sp];
            a[sp] = a[ep];
            a[ep] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}