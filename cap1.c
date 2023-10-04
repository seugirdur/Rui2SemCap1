#define aula1ex2

/*1 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
#ifdef aula1ex1
#include <stdio.h>
void main() {
    int segundos, minutos, horas;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("Isso e igual a %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);

    printf("\nDigite X para sair  \n");
    char saida;
    while(saida != 'X' && saida != 'x')
    {
        scanf(" %c", &saida);

        if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }

    return;
}


#endif

/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
*/
#ifdef aula1ex2
#include <stdio.h>

int contarAlgarismos(long numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

int main() {
    short shortVar;
    long longVar;
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;

    printf("Digite um valor do tipo short: ");
    scanf("%hd", &shortVar);

    printf("Digite um valor do tipo long: ");
    scanf("%ld", &longVar);

    printf("Digite um valor do tipo int: ");
    scanf("%d", &intVar);

    printf("Digite um valor do tipo float: ");
    scanf("%f", &floatVar);

    printf("Digite um valor do tipo double: ");
    scanf("%lf", &doubleVar);

    printf("Digite um valor do tipo char: ");
    scanf(" %c", &charVar); // Note o espaço antes de %c para ignorar espaços em branco

    printf("\n");
    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");

    int larguraShort = contarAlgarismos(shortVar);
    int larguraLong = contarAlgarismos(longVar);
    int larguraInt = contarAlgarismos(intVar);
    int larguraFloat = contarAlgarismos(floatVar) + 2; // Largura total = 6 dígitos inteiros + 1 ponto decimal + 2 casas decimais
    int larguraDouble = contarAlgarismos(doubleVar) + 2; // Largura total = 6 dígitos inteiros + 1 ponto decimal + 2 casas decimais

    printf("%*hd%*ld%*d\n", larguraShort + 4, shortVar, larguraLong + 20 - larguraShort, longVar, larguraInt + 20 - larguraLong, intVar);
    printf("%*.*f%*.*lf%*c\n", larguraFloat + 15, 2, floatVar, larguraDouble + 20 - larguraFloat, 2, doubleVar, 7, charVar);

    return 0;
}


#endif

/*3 - Escreva um programa que permute o conte�do de duas vari�veis sem utilizar uma
    vari�vel auxiliar.*/
#ifdef aula1ex3
#include <stdio.h>

void main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Depois da troca:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    return;
}

#endif

/*4 - Fa�a um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro n�mero formado pelos d�gitos invertidos do n�mero lido.
    Ex:   N�meroLido = 123
        N�meroGerado = 321*/
#ifdef aula1ex4
#include <stdio.h>

void main() {
    int numeroLido, numeroGerado;

    do {
        printf("Digite um numero inteiro positivo de tres digitos: ");
        scanf("%d", &numeroLido);
    } while (numeroLido < 100 || numeroLido > 999);

    numeroGerado = (numeroLido % 10) * 100 + ((numeroLido / 10) % 10) * 10 + (numeroLido / 100);

    printf("Numero Gerado: %d\n", numeroGerado);

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    return;
}

#endif

/*5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
#ifdef aula1ex5
#include <stdio.h>

void main() {
    int numero, limite, menorMultiplo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Digite o limite minimo: ");
    scanf("%d", &limite);

    menorMultiplo = numero;

    while (menorMultiplo <= limite) {
        menorMultiplo += numero;
    }

    printf("Menor multiplo de %d maior que %d: %d\n", numero, limite, menorMultiplo);

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    return;
}

#endif
