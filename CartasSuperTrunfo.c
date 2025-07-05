#include <stdio.h>
//Declaração de variaveis e funções
int main() {
    int opcao, atributo;
    char estado1, estado2;
    char codigocarta1[20], codigocarta2[20];
    char pais1[20], pais2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2, pibper1, pibper2;
    float superPoder1, superPoder2;
    float inversoDensidade1, inversoDensidade2;

// Exibição inicial

    printf("=== Seja Bem Vindo ao Super Trunfo ===\n");
    printf("Iniciar - DIGITE 1\n");
    printf("Regras - DIGITE 2\n");
    scanf("%d", &opcao);

// Entrada de Características das cartas

    switch (opcao) {
        case 1:
            printf("Carta: 1\n");
            printf("Insira uma letra de A - H representando o estado: ");
            scanf(" %c", &estado1);
            printf("Insira a inicial do estado junto de um número de 01 á 04(Ex:C01 ): ");
            scanf("%s", codigocarta1);
            printf("Nome do seu País: ");
            scanf("%s", pais1);
            printf("Quantidade da população da sua Cidade: ");
            scanf("%lu", &populacao1);
            printf("Área total da sua Cidade: ");
            scanf("%f", &area1);
            printf("PIB da sua Cidade: ");
            scanf("%f", &pib1);
            printf("Quantidade de pontos Turísticos: ");
            scanf("%d", &turistico1);

            printf("Carta: 2\n");
            printf("Insira uma letra de A - H representando o estado: ");
            scanf(" %c", &estado2);
            printf("Insira a inicial do estado junto de um número de 01 á 04 (Ex:S02 ): ");
            scanf("%s", codigocarta2);
            printf("Nome do seu País: ");
            scanf("%s", pais2);
            printf("Quantidade da população da sua Cidade: ");
            scanf("%lu", &populacao2);
            printf("Área total da sua Cidade: ");
            scanf("%f", &area2);
            printf("PIB da sua Cidade: ");
            scanf("%f", &pib2);
            printf("Quantidade de pontos Turísticos: ");
            scanf("%d", &turistico2);

// Cálculo dos atributos das cartas

            densidade1 = populacao1 / area1;
            densidade2 = populacao2 / area2;
            pibper1 = pib1 / populacao1;
            pibper2 = pib2 / populacao2;
            inversoDensidade1 = -1 / densidade1;
            inversoDensidade2 = -1 / densidade2;
            superPoder1 = populacao1 + area1 + pib1 + turistico1 + inversoDensidade1;
            superPoder2 = populacao2 + area2 + pib2 + turistico2 + inversoDensidade2;
            
//Exibição dos Dados das cartas

            printf("\n\n===== CARTA 1 =====\n");
            printf("Inicial: %c\n", estado1);
            printf("Código: %s\n", codigocarta1);
            printf("Nome do País: %s\n", pais1);
            printf("População: %lu hab\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: R$%.2f\n", pib1);
            printf("Número de Pontos Turísticos: %d\n", turistico1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capita: R$%.2f\n", pibper1);
            printf("Super Poder: %.2f SP\n", superPoder1);

            printf("\n===== CARTA 2 =====\n");
            printf("Inicial: %c\n", estado2);
            printf("Código: %s\n", codigocarta2);
            printf("Nome do País: %s\n", pais2);
            printf("População: %lu hab\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: R$%.2f\n", pib2);
            printf("Número de Pontos Turísticos: %d\n", turistico2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: R$%.2f\n", pibper2);
            printf("Super Poder: %.2f SP\n", superPoder2);

// Escolha do atributo para o combate

            printf("\n ===Fight=== \n");
            printf("\nEscolha de 1 a 7: \n");
            scanf("%d", &atributo);

            switch (atributo) {
                case 1:
                    printf("\n***Combate de População***\n");
                    printf("\n%s x %s\n", pais1, pais2);
                    if (populacao1 > populacao2)
                        printf("%s Com seus: %lu de População\n CARTA 1 VENCEU!!!\n", pais1, populacao1);
                    else if (populacao2 > populacao1)
                        printf("%s Com seus: %lu de População\n CARTA 2 VENCEU!!!\n", pais2, populacao2);
                    else
                        printf("EMPATE ENTRE CARTAS\n");
                    break;
                case 2:
                    printf("\n***Combate de Área***\n");
                    printf("\n%s x %s\n", pais1, pais2);
                    if (area1 > area2)
                        printf("%s Com seus: %.2f de Área\n CARTA 1 VENCEU!!!\n", pais1, area1);
                    else if (area2 > area1)
                        printf("%s Com seus: %.2f de Área\n CARTA 2 VENCEU!!!\n", pais2, area2);
                    else
                        printf("EMPATE ENTRE CARTAS\n");
                    break;
                case 3:
                    printf("\n***Combate de PIB***\n");
                    printf("\n%s x %s\n", pais1, pais2);
                    if (pib1 > pib2)
                        printf("%s Com seus: %.2f de PIB\n CARTA 1 VENCEU!!!\n", pais1, pib1);
                    else if (pib2 > pib1)
                        printf("%s Com seus: %.2f de PIB\n CARTA 2 VENCEU!!!\n", pais2, pib2);
                    else
                        printf("EMPATE ENTRE CARTAS\n");
                    break;
                case 4:
                    printf("\n***Combate de Pontos Turísticos***\n");
                    printf("\n%s x %s\n", pais1, pais2);
                    if (turistico1 > turistico2)
                        printf("%s Com seus: %d Pontos Turísticos\n CARTA 1 VENCEU!!!\n", pais1, turistico1);
                    else if (turistico2 > turistico1)
                        printf("%s Com seus: %d Pontos Turísticos\n CARTA 2 VENCEU!!!\n", pais2, turistico2);
                    else
                        printf("EMPATE ENTRE CARTAS\n");
                    break;
                case 5:
                    printf("\n***Combate de Densidade Populacional***\n");
                    printf("\n%s x %s\n", pais1, pais2);
                    if (densidade1 > densidade2)
                        printf("%s Com seus: %.2f de Densidade\n CARTA 1 VENCEU!!!\n", pais1, densidade1);
                    else if (densidade2 > densidade1)
                        printf("%s Com seus: %.2f de Densidade\n CARTA 2 VENCEU!!!\n", pais2, densidade2);
                    else
                        printf("EMPATE ENTRE CARTAS\n");
                    break;
                case 6:
                    printf("\n***Combate de PIB per Capita***\n");
                    printf("\n%s x %s\n", pais1, pais2);
                    if (pibper1 > pibper2)
                        printf("%s Com seus: %.2f de PIB per Capita\n CARTA 1 VENCEU!!!\n", pais1, pibper1);
                    else if (pibper2 > pibper1)
                        printf("%s Com seus: %.2f de PIB per Capita\n CARTA 2 VENCEU!!!\n", pais2, pibper2);
                    else
                        printf("EMPATE ENTRE CARTAS\n");
                    break;
                case 7:
                    printf("\n***Combate de Super Poder***\n");
                    printf("\n%s x %s\n", pais1, pais2);
                    if (superPoder1 > superPoder2)
                        printf("%s Com seus: %.2f de Super Poder\n CARTA 1 VENCEU!!!\n", pais1, superPoder1);
                    else if (superPoder2 > superPoder1)
                        printf("%s Com seus: %.2f de Super Poder\n CARTA 2 VENCEU!!!\n", pais2, superPoder2);
                    else
                        printf("EMPATE ENTRE CARTAS\n");
                    break;
                default:
                    printf("Opção inválida! Escolha um atributo de 1 a 7.\n");
                    break;
            }
            break;
//Regras do jogo
        case 2:
            printf("\n=== REGRAS DO SUPER TRUNFO ===\n");
            printf("1- Você irá cadastrar duas cartas representando cidades ou países.\n");
            printf("2- Cada carta contém os seguintes atributos:\n");
            printf("1.População.\n 2.Área.\n 3.PIB.\n 4.PontosTurísticos.\n 5.DensidadePopulacional.\n 6.PIB per Capita.\n 7.Super Poder (combinação de todos os outros valores)\n");
            printf("3- Após cadastrar as duas cartas, escolha um atributo para comparar e descobrir qual é a carta vencedora!\n");
            break;
        default:
            printf("Opção inválida. Reinicie o programa.\n");
            break;
    }
    return 0;
}
