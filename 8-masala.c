#include <stdio.h>

int main()
{
    
    FILE *fayl = fopen("xaridlar.txt", "r");

    

    int narx;
    int katta_xaridlar_soni = 0;

    
    while (fscanf(fayl, "%d", &narx) == 1)
    {
        
        if (narx > 50000)
        {
            katta_xaridlar_soni++;
        }
    }

    
    fclose(fayl);

    
    printf("Katta xaridlar soni: %d\n", katta_xaridlar_soni);

    return 0;
}