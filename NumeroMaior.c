#include <stdio.h>


int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if(num1 > num2){
    switch (num1 > num2)
    {
    case 1:
        printf("O maior numero e o primeiro: %d\n", num1);
        break;
        
        

    default: printf("O maior numero e o segundo: %d\n", num2);
        break;
    }
    }
    else{
    switch (num1 == num2)
    {
    case 1:
        printf("Os numeros sao iguais: %d\n", num1);
        break;
    
    default:
        break;
    }
    }

    return 0;
}