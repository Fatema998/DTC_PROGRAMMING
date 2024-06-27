/*
if(conditon)
{
kaj.....
pri
}




*/

// #include <stdio.h>
// int main()
// {
//     int tk = 1000;
//     if (tk > 100)
//     {
//         printf("shirt ta kinbo");
//     }
//     else
//     {
//         printf("kinbo no");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }

    return 0;
}