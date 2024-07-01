#include <stdio.h>
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        /* code */
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }

    printf("");
    return 0;
}