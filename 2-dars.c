#include <stdio.h>

double chegirma(double narx)
{
    return narx - (narx * 0.10); 
}

int main()
{
    
    double narxlar[5] = {10000, 25000, 50000, 12000, 8000};

    
    for (int i = 0; i < 5; i++)
    {
        
        printf("%.0f ", chegirma(narxlar[i]));
    }

    return 0;
}