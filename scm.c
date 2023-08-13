#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void data_hora(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Agora: %d-%02d-%02d %02d:%02d:%02d\n\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour -3, tm.tm_min, tm.tm_sec);
}

void potencia(int a, int b) {
    printf("%d^%d = %f\n", a, b, pow(a, b));
}

void divide(int a, int b) {
    if (b == 0) {
        printf("Divisões por 0 não são permitidas!\n");
    } else {
        printf("%d/%d = %d\n", a, b, a / b);
    }
}

void subtrai(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}

int main() {
    data_hora();
    char nome[80];
    printf("Insira o seu nome: ");
    scanf("%s", nome);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Olá estudante %s, hoje é %d-%02d-%02d.\n", nome, tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

    soma(5, 3);
    divide(6, 3);
    divide(6, 0);
    subtrai(5, 3);
    return 0;
}
