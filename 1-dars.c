#include <stdio.h>

int main()
{
    int son[10];
    int Number;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &son[i]);
    }
    scanf("%d", &Number);

    if (son[Number - 1] == 0)
    {
        printf("Joy mavjud\n");
    }
    else
    {
        printf("Joy band\n");
    }

    return 0;
}