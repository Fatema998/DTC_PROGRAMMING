#include <stdio.h>
int main()
{

    for (int i = 1; i <= 20; i += 2)
    {
        /* code */
        if (i % 2 == 0)
        {
            printf("%d_even\n", i);
        }
        else
        {
            printf("%d_odd\n", i);
        }
    }

    return 0;
}