#include <stdio.h>

//Criação das variaveis.

int main() {
    char estado;
    char codigocarta[20];
    char cidade[20];
    float populacao;
    float area;
    float pib;
    int turistico;

//Criação da entrada de dados
//O ser irá preencher os dados com suas devidas informações, referentes aos seus campos.
//Printf: Determina o que está sendo pedido, de deverá ser preenchido no terminal;
//Scanf: Determina a entrada dos dados e o seu tipo.
    
    printf("Carta: 1\n");
    printf("Insira a letra inicial do seu estado: ");
    scanf("%c", &estado);

    printf("Insira a inicial do estado junto de um número de 01 á 04: ");
    scanf("%s", &codigocarta);//(EX. C01 ).

    printf("Nome da sua Cidade: ");
    scanf("%s", &cidade);

    printf("Quantidade da populção da sua Cidade: ");
    scanf("%f", &populacao); //Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).
    
    printf("Área total da sua Cidade: ");
    scanf("%f", &area);//Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("Pib da sua Cidade: ");
    scanf("%f", &pib);//Em caso de valores com mais de um ponto "." digitar somente um (Ex: 4.234.234 = 4.234234).

    printf("Quantidade de pontos Turísticos: ");
    scanf("%d", &turistico);//Digitar valores sem ponto ou virgula.
    
    //Saida de dados no terminal, após Preenchimento.
    //Os dados preenchidos antes agora irão sair organizados e formarão os dados da carta.
    //Printf: Responsável por adiministrar a saída dos dados no terminal, antes preenchidos.

    printf("Carta: 1");
    printf("Estado: %c\n" , estado);
    printf("Codígo: %s\n" , codigocarta);
    printf("Nome da Cidade: %s\n" , cidade);
    printf("População: %f\n" , populacao);
    printf("Área: %.3f\n" , area); //Utilização de ".3" para especificar as casa decimais depois do ponto.
    printf("PIB: %.3f\n" , pib); //Utilização de ".3" para especificar as casa decimais depois do ponto.
    printf("Número de Pontos Turísticos: %d\n" , turistico);

    return 0; //Finalização do Progarma. 
}
