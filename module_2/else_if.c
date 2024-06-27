
/*

else if (condition)
{
code
}
*/

#include <stdio.h>
int main()
{

    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("burger khabo");
    }
    else if (tk >= 50)
    {
        printf("ice cream khabo");
    }
    else if (tk >= 20)
    {
        printf("fucka khabo");
    }
    else
    {
        printf("kicu e khabo na");
    }
    return 0;
}