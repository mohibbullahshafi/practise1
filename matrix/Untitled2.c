#include <stdio.h>
#include <math.h>

int main()
{
    int x = 1, y = 1;

    x = y++ + ++x;//x = 3, y = 1
    printf("%d\n",y);
    y = y + ++y;//y = 6
    printf("y = %d\n", y);
    x = y + y++;//x = 12, y =
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
