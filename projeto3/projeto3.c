#include <stdio.h>
//Leitura, Impressao e Soma
void main () {
    int x, y, z, r;

    printf("Digite um numero: ", x);
    scanf("%d", &x);

    printf("Digite um numero: ", y);
    scanf("%d", &y);

    printf("Digite um numero: ", z);
    scanf("%d", &z);
    
    r = x+y+z;

    printf("Resultado: %d  \n", r);
    
    return 0;
}

