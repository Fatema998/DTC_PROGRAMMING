#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        /* code */
        if (i == 5)
        {
            // skip mto kaj kore
            continue;
        }
        printf("%d\n", i);
    }

    printf("");
    return 0;
}