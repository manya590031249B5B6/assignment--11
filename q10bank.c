
static int balance = 1000;

void deposit(int amount)
{
    if(amount > 0)
        balance = balance + amount;
}

void withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
        balance = balance - amount;
}

int getBalance()
{
    return balance;
}
