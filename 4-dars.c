#include <stdio.h>

int main()
{
    int kino[3][4];

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &kino[i][j]);
        }
    }

    int qator, orindiq;
    
    scanf("%d %d", &qator, &orindiq);

    
    int holat = kino[qator - 1][orindiq - 1];

    
    if (holat == 1)
    {
        printf("%d-qator, %d-orindiq: Band\n", qator, orindiq);
    }
    else
    {
        printf("%d-qator, %d-orindiq: Bosh\n", qator, orindiq);
    }

    return 0;
}