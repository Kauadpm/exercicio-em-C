/*6) Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: n�o use o comando "if"
ou o operador de condi��o "?".*/
#include <stdio.h>

int main() {

float precop, precoinflacionado;

    printf("Digite o valor do produto: ");
    scanf("%f", &precop);


switch ((int)(preco / 100)) {
        case 0:
            precoinflacionado = precop + (preco * 10 / 100);
            printf("O valor do produto ficou de: %.2f.", precoinflacionado);
            break;
        default:
            precoinflacionado = precop + (precop * 20 / 100);
            printf("O valor do produto ficou de: %.2f.", precoinflacionado);
  
  
    }



    return 0;
}
