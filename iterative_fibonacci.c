#include <stdio.h>
int main()
{
    long long int previous = 0, next = 1, sum, n, i;
    printf("Enter the number upto which you want to print the Fibonacci number : ");
    scanf("%lld", &n);
    printf("\n%lld %lld", previous, next);
    for (i = 2; i < n; i++)
    {
        sum = previous + next;
        printf(" %lld ", sum);
        previous = next;
        next = sum;
    }
    return 0;
}