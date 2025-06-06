#include <stdio.h>

int main() {
    char estado;
    char codigocarta[20];
    char cidade[20];
    int populacão;
    float area;
    float pib;
    int turistico;
    
    printf("Insira a letra inicial do seu estado: ");
    scanf("%c", &estado);

    printf("Insira a inicial do estado junto de um número de 01 á 04: ");
    scanf("%s", &codigocarta);

    printf("Nome da sua Cidade: ");
    scanf("%s", &cidade);

    printf("Quantidade da populção da sua Cidade: ");
    scanf("%d", &populacão);

    printf("Área total da sua Cidade: ");
    scanf("%f", &area);

    printf("Pib da sua Cidade: ");
    scanf("%f", &pib);

    printf("Quantidade de pontos Turísticos: ");
    scanf("%d", &turistico);
    
    printf("Inicial: %c" , estado);
    

    return 0;
}
