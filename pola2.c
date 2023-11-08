#include <stdio.h>

void main(){
    int  n;
    printf("Masukkan panjang pola : ");
    scanf("%i", &n);
    for(int a=0; a<n; a++){
        for(int b=n; b>a; b--){
            printf(" ");
        }
        for(int c=0; c<a; c++){
            printf("*");
        }
        printf("\n");
    }
}