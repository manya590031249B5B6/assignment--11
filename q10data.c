
#include <stdio.h>

extern void deposit(int amount);
extern void withdraw(int amount);
extern int getBalance(void);

int main()
{
    int d, w;

    printf("Initial balance = %d\n", getBalance());

    printf("Enter deposit amount: ");
    scanf("%d", &d);
    deposit(d);

    printf("Enter withdrawal amount: ");
    scanf("%d", &w);
    withdraw(w);

    printf("Final balance = %d\n", getBalance());

    return 0;
}
