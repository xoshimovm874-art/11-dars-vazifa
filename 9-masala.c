#include <stdio.h>


struct Xodim
{
    char ismi[50];
    int soat;
};
int main(){
    
    FILE *fayl = fopen("xodimlar.txt", "r");

    if (fayl == NULL){
        printf("Faylni ochishda xatolik yuz berdi!\n");
        return 1;
    }

    int n;
    
    fscanf(fayl, "%d", &n);

    struct Xodim xodimlar[n];

    
    for (int i = 0; i < n; i++){
        fscanf(fayl, "%s %d", xodimlar[i].ismi, &xodimlar[i].soat);
    }

    
    fclose(fayl);

    
    int soatlik_haqi = 15000;

    
    for (int i = 0; i < n; i++)
    {
        int ish_haqi = xodimlar[i].soat * soatlik_haqi;
        printf("%s: %d som\n", xodimlar[i].ismi, ish_haqi);
    }

    return 0;
}