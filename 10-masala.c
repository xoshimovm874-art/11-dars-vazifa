#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int chap = 0;
    int ong = size - 1;

    while (chap <= ong){
        int orta = chap + (ong - chap) / 2;

        
        if (arr[orta] == target)
        {
            return orta; // Indeksini qaytaramiz
        }

       
        if (arr[orta] < target)
        {
            chap = orta + 1;
        }
        
        else
        {
            ong = orta - 1;
        }
    }

    return -1;
}

int main()
{
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270};

    int target;
    scanf("%d", &target);

    int size = sizeof(books) / sizeof(books[0]);
    int indeks = binary_search(books, size, target);


    if (indeks != -1)
    {
        printf("Kitob topildi!\n");
        printf("Indeks: %d\n", indeks);
    }
    else
    {
        printf("Kitob topilmadi\n");
    }

    return 0;
}