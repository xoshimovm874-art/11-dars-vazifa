#include <stdio.h>


void sanash(int n)
{

    if (n < 1){
        return;
    }
    printf("%d\n", n);

    
    sanash(n - 1);
}

int main()
{
    int n;

    
    scanf("%d", &n);

    
    sanash(n);

    
    printf("Xabar yuborildi!\n");

    return 0;
}