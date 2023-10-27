#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
   
    srand(time(NULL));


    int numero = rand() % 100 + 1;

    int tentativas = 10;
    int opcao;
    int diferenca;

    printf("advinhe o numero entre 1 e 100.\n");

    while (tentativas > 0) {
        printf("Tentativas restantes: %d\n", tentativas);
        printf("Digite seu palpite: ");
        scanf("%d", &opcao);

        
        if (opcao == numero) {
            printf("Parabéns! Você acertou o número %d!\n", numero);
            break;
        } else if (opcao < numero) {
            printf("O numero secreto e maior. ");
        } else {
            printf("O numero secreto e menor. ");
        }

        
         diferenca = abs(numero - opcao);

       
        if (diferenca <= 10) {
            printf("esta quase lá!\n");
        } else {
            printf("esta longe.\n");
        }

        tentativas--;
    }

    if (tentativas == 0) {
        printf("Suas tentativas acabaram. O numero secreto era %d.\n", numero);
    }

    return 0;
}
