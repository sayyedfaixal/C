#include <stdio.h>
int main()
{
    int n, copyn, result = 0;
    printf("Enter the number you want to reverse : ");
    scanf("%d", &n);
    copyn = n;
    while (copyn)
    {
        result = (result * 10) + (copyn % 10);
        copyn = copyn / 10;
    }
    printf("\nThe reverse number is %d: ", result);
    return 0;
}