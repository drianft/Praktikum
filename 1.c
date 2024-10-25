#include <stdio.h>

int main(){

    int i, x;
    int y;

    printf("Berikan sebuah angka sebagai batas maksimal : ");
    scanf("%d" , &y);

    for (i = 1; i <= y; i++)
    {
        for (x = 1; x <= i; x++)
        {
            printf("%d" , x);
        }
        printf("\n");
        
    }
    
    return 0;
}