#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigocarta[20];
    char cidade[20];
    int população;
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
    scanf("%d", &população);

    printf("Área total da sua Cidade: ");
    scanf("%f", &area);

    printf("Pib da sua Cidade: ");
    scanf("%f", &pib);

    printf("Quantidade de pontos Turísticos: ");
    scanf("%d", &turistico);
    
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
