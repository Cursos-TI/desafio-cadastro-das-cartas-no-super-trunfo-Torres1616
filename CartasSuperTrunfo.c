#include <stdio.h>

//Criação das variaveis Carta 1 e Carta 2.

int main() {
    char estado1, estado2;
    char codigocarta1[20], codigocarta2[20];
    char cidade1[20], cidade2[20];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;

//1. Criação da entrada de dados
//2. O ser irá preencher os dados com suas devidas informações, referentes aos seus campos.
//2.1. Printf: Determina o que está sendo pedido, de deverá ser preenchido no terminal;
//2.2 Scanf: Determina a entrada dos dados e o seu tipo.
    
    printf("Carta: 1\n");
    printf("Insira uma letra de A - H representando o estado: ");
        scanf("%c", &estado1);

    printf("Insira a inicial do estado junto de um número de 01 á 04(Ex:C01 ): ");
        scanf("%s", &codigocarta1); //(EX. C01 ).

    printf("Nome da sua Cidade: ");
        scanf("%s", &cidade1);

    printf("Quantidade da população da sua Cidade(Ex:x.xxxxxx): ");
        scanf("%f", &populacao1); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).
    
    printf("Área total da sua Cidade(Ex:xxx.xxx): ");
        scanf("%f", &area1); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("PIB da sua Cidade(Ex:xx.xxx): ");
        scanf("%f", &pib1); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("Quantidade de pontos Turísticos(Ex:xx): ");
        scanf("%d", &turistico1); //Digitar valores sem ponto ou virgula.
    
    printf("Carta: 2\n");
    printf("Insira uma letra de A - H representando o estado: ");
        scanf(" %c", &estado2);

    printf("Insira a inicial do estado junto de um número de 01 á 04 (Ex:S02 ): ");
        scanf("%s", &codigocarta2); //(EX. S02 ).

    printf("Nome da sua Cidade: ");
        scanf("%s", &cidade2);

    printf("Quantidade da população da sua Cidade: ");
        scanf("%f", &populacao2); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).
    
    printf("Área total da sua Cidade (Ex:xxx.xxx): ");
        scanf("%f", &area2); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("PIB da sua Cidade (Ex:xx.xxx): ");
        scanf("%f", &pib2); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("Quantidade de pontos Turísticos (Ex:xx): ");
        scanf("%d", &turistico2); //Digitar valores sem ponto ou virgula.

    //1. Saida de dados no terminal, após Preenchimento.
    //2. Os dados preenchidos antes agora irão sair organizados e formarão os dados da carta.
    //2.1 Printf: Responsável por adiministrar a saída dos dados no terminal, antes preenchidos.

        printf("\n\n===== CARTA 1 =====\n");
        printf("Estado: %c\n" , estado1);
        printf("Código: %s\n" , codigocarta1);
        printf("Nome da Cidade: %s\n" , cidade1);
        printf("População: %f\n" , populacao1);
        printf("Área(KM): %.3f\n" , area1); //Utilização de ".3" para especificar as casa decimais depois do ponto.
        printf("PIB($): %.3f\n" , pib1); //Utilização de ".3" para especificar as casa decimais depois do ponto.
        printf("Número de Pontos Turísticos: %d\n" , turistico1);


        printf("\n===== CARTA 2 =====\n");
        printf("Estado: %c\n" , estado2);
        printf("Código: %s\n" , codigocarta2);
        printf("Nome da Cidade: %s\n" , cidade2);
        printf("População: %f\n" , populacao2);
        printf("Área(KM): %.3f\n" , area2); //Utilização de ".3" para especificar as casa decimais depois do ponto.
        printf("PIB($): %.3f\n" , pib2); //Utilização de ".3" para especificar as casa decimais depois do ponto.
        printf("Número de Pontos Turísticos: %d\n" , turistico2);

    return 0; //Finalização do Progarma. 
}
