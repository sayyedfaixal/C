#include <stdio.h>
int checkPrime(int isprime)
{
    int i, flag;
    if (isprime == 1 || isprime == 0)
        return 0;
    else
    {
        for (i = 2; i < isprime; i++)
        {
            if (isprime % i == 0)
                return 0;
        }
    }
}
int main()
{
    int isprime, i, flag;
    printf("Enter the number to check whether it is Prime or not : ");
    scanf("%d", &isprime);
    if (checkPrime(isprime))
        printf("\n%d is a Prime Number", isprime);
    else
        printf("\n%d is Not a Prime Number", isprime);

    return 0;
}