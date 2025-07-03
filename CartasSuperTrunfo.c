#include <stdio.h>

//Criação das variaveis Carta 1 e Carta 2.

int main() {
    int opcao, regras;
    char estado1, estado2;
    char codigocarta1[20], codigocarta2[20];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2, pibper1, pibper2;
    float superPoder1, superPoder2;
    float inversoDensidade1, inversoDensidade2;
//1. entrada de dados
//2. O ser irá preencher os dados com suas devidas informações, referentes aos seus campos.
//2.1. Printf: Determina o que está sendo pedido, de deverá ser preenchido no terminal;
//2.2 Scanf: Determina a entrada dos dados e o seu tipo.
    printf("=== Seja Bem Vindo ao Super Trunfo ===\n");
    printf("Iniciar - DIGITE 1\n");
    printf("Regras - DIGITE 2\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
    printf("Carta: 1\n");
    printf("Insira uma letra de A - H representando o estado: ");
        scanf("%c", &estado1);

    printf("Insira a inicial do estado junto de um número de 01 á 04(Ex:C01 ): ");
        scanf("%s", &codigocarta1); //(EX. C01 ).

    printf("Nome da sua Cidade: ");
        scanf("%s", &cidade1);

    printf("Quantidade da população da sua Cidade: ");
        scanf("%lu", &populacao1); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).
    
    printf("Área total da sua Cidade: ");
        scanf("%f", &area1); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("PIB da sua Cidade: ");
        scanf("%f", &pib1); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("Quantidade de pontos Turísticos: ");
        scanf("%d", &turistico1); //Digitar valores sem ponto ou virgula.
    
    printf("Carta: 2\n");
    printf("Insira uma letra de A - H representando o estado: ");
        scanf(" %c", &estado2);

    printf("Insira a inicial do estado junto de um número de 01 á 04 (Ex:S02 ): ");
        scanf("%s", &codigocarta2); //(EX. S02 ).

    printf("Nome da sua Cidade: ");
        scanf("%s", &cidade2);

    printf("Quantidade da população da sua Cidade: ");
        scanf("%lu", &populacao2); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).
    
    printf("Área total da sua Cidade: ");
        scanf("%f", &area2); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("PIB da sua Cidade: ");
        scanf("%f", &pib2); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("Quantidade de pontos Turísticos: ");
        scanf("%d", &turistico2);

        printf("\n\n===== CARTA 1 =====\n");
        printf("Estado: %c\n" , estado1);
        printf("Código: %s\n" , codigocarta1);
        printf("Nome da Cidade: %s\n" , cidade1);
        printf("População: %lu hab\n" , populacao1);
        printf("Área: %.2f km²\n" , area1); //Utilização de ".3" para especificar as casa decimais depois do ponto.
        printf("PIB: R$%.2f\n" , pib1); //Utilização de ".3" para especificar as casa decimais depois do ponto.
        printf("Número de Pontos Turísticos: %d\n" , turistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: R$%.2f\n", pibper1);
        printf("Super Poder: %.2f SP\n", superPoder1);

        printf("\n===== CARTA 2 =====\n");
        printf("Estado: %c\n" , estado2);
        printf("Código: %s\n" , codigocarta2);
        printf("Nome da Cidade: %s\n" , cidade2);
        printf("População: %lu hab\n" , populacao2);
        printf("Área: %.2f km²\n" , area2); //Utilização de ".3" para especificar as casa decimais depois do ponto.
        printf("PIB: R$%.2f\n" , pib2); //Utilização de ".3" para especificar as casa decimais depois do ponto.
        printf("Número de Pontos Turísticos: %d\n" , turistico2);
        printf("Densidade Populacional: %f hab/km²\n", densidade2);
        printf("PIB per Capita: R$%f\n", pibper2);
        printf("Super Poder: %.2f SP\n", superPoder2);
        break;
    
    default:
        break;
    }
   

//Calculo Densidade e Pib
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibper1 = pib1 /populacao1;
    pibper2 = pib2 /populacao2;
    inversoDensidade1 = (-1/densidade1);
    inversoDensidade2 = (-1/densidade2);
    superPoder1 = ((float)populacao1 + area1 + pib1 + turistico1 + inversoDensidade1);
    superPoder2 = ((float)populacao2 + area2 + pib2 + turistico2 + inversoDensidade2);

//1. Saida de dados no terminal, após Preenchimento.
//2. Os dados preenchidos antes agora irão sair organizados e formarão os dados da carta.
//2.1 Printf: Responsável por adiministrar a saída dos dados no terminal, antes preenchidos.


//Declaração de Condição para Embate
printf("\n***Fight***\n");
printf("Escolha o seu Atributo");



printf("\n***Resultado do Embate entre as Cartas***\n");
printf("\n   %s X %s  \n", cidade1, cidade2);

    printf("\nPopulação Mais numerosa?\n");
if (populacao1 > populacao2){
    printf("Carta 1 Ganhou!!\n");
}else{
    printf("Carta 2 Ganhou!!\n");}

    printf("\nMaior Area por km²?\n");
if (area1 > area2){
    printf("Carta 1 Ganhou!!\n");
}else{
    printf("Carta 2 Ganhou!!\n");}

    printf("\nMaior Pib?\n");
if (pib1 > pib2){
    printf("Carta 1 Ganhou!!\n");
}else{
    printf("Carta 2 Ganhou!!\n");}

    printf("\nMaior Número de Pontos Turísticos?\n");
if (turistico1 > turistico2){
    printf("Carta 1 Ganhou!!\n");
}else{
    printf("Carta 2 Ganhou!!\n");}

    printf("\nMenor Densidade Populacional?\n");
if (inversoDensidade1 < inversoDensidade2){
    printf("Carta 1 Ganhou!!\n");
}else{
    printf("Carta 2 Ganhou!!\n");}

    printf("\nMaior Pib per Capita?\n");
if (pibper1 > pibper2){
    printf("Carta 1 Ganhou!!\n");
}else{
    printf("Carta 2 Ganhou!!\n");}

    printf("\nSuper Poder?\n");
if (superPoder1 > superPoder2){
    printf("Carta 1 Ganhou!!\n");
}else{
    printf("Carta 2 Ganhou!!\n");}


return 0; //Finalização do Progarma. 
}
