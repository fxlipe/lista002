#include <stdio.h>

void main() {
            int x;
            printf("Digite um n�mero: ");
            scanf("%d", &x);
            if (x % 2 == 0) {
                printf("\to numero %d � par\n", x);
            }
            if (x % 2 != 0) {
                printf("\to numero %d � impar\n", x);
            }
        }
       


