// 14. Ler três valores e colocá-los em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int v1, v2, v3;

    printf("Digite o 1º valor: ");
    scanf("%d", &v1);

    printf("Digite o 2º valor: ");
    scanf("%d", &v2);

    printf("Digite o 3º valor: ");
    scanf("%d", &v3);

    printf("Os números digitados foram -> ");
    printf("%d, ", v1);
    printf("%d, ", v2);
    printf("%d \n", v3);

    printf("------------------------------------------");

    printf("\nOrdem Crescente é -> ");
    if (v1<v2 && v2<v3){
        printf("%d %d %d \n", v1, v2, v3);
    }
    else if (v1<v3 && v3<v2){
        printf("%d %d %d \n", v1, v3, v2);
    }
    else if (v2<v1 && v1<v3){
        printf("%d %d %d \n", v2, v1, v3);
    }
    else if (v2<v3 && v3<v1){
        printf("%d %d %d \n", v2, v3, v1);
    }
    else if (v3<v1 && v1<v2){
        printf("%d %d %d \n", v3, v1, v2);
    }
    else {
        printf("%d %d %d \n", v3, v2, v1);
    }
     printf("------------------------------------------");


    //setbuf (stdin, NULL);
    return 0;
}