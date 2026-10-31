
#include <stdio.h>

void display()
{
    auto int a = 1;
    static int s = 1;

    printf("Automatic = %d, Static = %d\n", a, s);

    a++;
    s++;
}

int main()
{
    display();
    display();
    display();

    return 0;
}
