#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

    printf("Desafio Super Trunfo\n"); //titulo do programa

    //variaveis do cadastro das cartas
    char nomeestado1, nomeestado2, codigocarta1[20], codigocarta2[20], nomecidade1[20], nomecidade2[20];
    int habitantes1, habitantes2, pontosturisticos1, pontosturisticos2;
    float areadacidade1, areadacidade2, pib1, pib2;

    printf("Vamos fazer o cadastro das cartas do jogo:\n");
    printf("Para iniciarmos, vamos começar cadastrando duas cartas\n\n");
    
    //inicio cadastro de dados carta01
    printf("Cadastro CARTA 01\n");

    printf("Vamos começar pelo ESTADO\n"
           "Digite a primeira letra que representa o nome do estado onde fica a cidade da carta:\n");
    scanf("%c",&nomeestado1);

    printf("Agora vamos gravar o codigo da carta\n"
           "O Codigo da carta deverá conter a letra do nome do estado em seguida do numero de 01 ao 02(ex:A01,B02)\n"
           "Digite o código da carta:\n");
    scanf("%s", &codigocarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomecidade1);

    printf("Digite a população da cidade:\n");
    scanf("%d", &habitantes1);

    printf("Digite a area da cidade em Km²\n");
    scanf("%f", &areadacidade1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);
    //fim do cadastro de dados carta01

    //inicio impressão dados carta01
    printf("Dados cadastrados:\n");
    printf("CARTA 01\n");
    printf("Estado: %c\n", nomeestado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %i\n", habitantes1);
    printf("Área: %fKm²\n", areadacidade1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n\n", pontosturisticos1);
    //fim de impressão dados carta01           


    //inicio cadastro de dados carta02
    printf("Cadastro CARTA 02\n");

    printf("Vamos começar pelo ESTADO\n"
           "Digite a primeira letra que representa o nome do estado onde fica a cidade da carta:\n");
    scanf("%c",&nomeestado2);

    printf("Agora vamos gravar o codigo da carta\n"
           "O Codigo da carta deverá conter a letra do nome do estado em seguida do numero de 01 ao 02(ex:A01,B02)\n"
           "Digite o código da carta:\n");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomecidade2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &habitantes2);

    printf("Digite a area da cidade em Km²\n");
    scanf("%f", &areadacidade2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);
    //fim do cadastro de dados carta02

    //inicio impressão dados carta02
    printf("Dados cadastrados:\n");
    printf("CARTA 01\n");
    printf("Estado: %c\n", nomeestado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %i\n", habitantes2);
    printf("Área: %fKm²\n", areadacidade2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n\n", pontosturisticos2);
    //fim de impressão dados carta01           

    

    return 0;
}
