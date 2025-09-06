#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    char estado1; // Uma letra de 'A' a 'H' (representando um dos oito estados)
    char estado2;
    char codigo1[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char codigo2[4];
    char cidade1[50]; // O nome da cidade.
    char cidade2[50];
    unsigned long int  populacao1; // O número de habitantes da cidade.
    unsigned long int  populacao2;
    float area1; // A área da cidade em quilômetros quadrados.
    float area2;
    float pib1; // O Produto Interno Bruto da cidade.
    float pib2;
    int pontos1; // A quantidade de pontos turísticos na cidade.
    int pontos2;
    float densidade1; // A densidade populacional da cidade (população/área).
    float densidade2;
    float pib_per_capita1; // O PIB per capita da cidade (PIB/população).
    float pib_per_capita2;
    float super_poder1; // O super poder da carta 1.
    float super_poder2;
    
    int atributo; // Atributo escolhido para comparação (1 a 7).

    printf("Carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta: ");
    scanf(" %3s", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1); // REGEX para ler até o newline

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
    
    printf("Carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta: ");
    scanf(" %3s", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2); // REGEX para ler até o newline

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 * 1000000000.0 / populacao1;
    pib_per_capita2 = pib2 * 1000000000.0 / populacao2;
    super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos1 + 1.0/densidade1 + pib_per_capita1;
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos2 + 1.0/densidade2 + pib_per_capita2;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\nAtributos para Comparação \n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
    printf("Escolha um atributo: ");
    scanf("%d", &atributo);

    switch (atributo) {
        case 1:
            printf("Comparando por População:\n");
            if (populacao1 > populacao2) {
                printf("Carta 1 (%s) venceu com população %lu habitantes\n", cidade1, populacao1);
            } else if (populacao1 < populacao2) {
                printf("Carta 2 (%s) venceu com população %lu habitantes\n", cidade2, populacao2);
            } else {
                printf("Empate - População Igual: Ambas as cartas têm %lu habitantes\n", populacao1);
            }
            break;
        case 2:
            printf("Comparando por Área:\n");
            if (area1 > area2) {
                printf("Carta 1 (%s) venceu com área %.2f km²\n", cidade1, area1);
            } else if (area1 < area2) {
                printf("Carta 2 (%s) venceu com área %.2f km²\n", cidade2, area2);
            } else {
                printf("Empate - Área Igual: Ambas as cartas têm %.2f km²\n", area1);
            }
            break;
        case 3:
            printf("Comparando por PIB:\n");
            if (pib1 > pib2) {
                printf("Carta 1 (%s) venceu com PIB %.2f bilhões de reais\n", cidade1, pib1);
            } else if (pib1 < pib2) {
                printf("Carta 2 (%s) venceu com PIB %.2f bilhões de reais\n", cidade2, pib2);
            } else {
                printf("Empate - PIB Igual: Ambas as cartas têm PIB de %.2f bilhões de reais\n", pib1);
            }
            break;
        case 4:
            printf("Comparando por Pontos Turísticos:\n");
            if (pontos1 > pontos2) {
                printf("Carta 1 (%s) venceu com %d pontos turísticos\n", cidade1, pontos1);
            } else if (pontos1 < pontos2) {
                printf("Carta 2 (%s) venceu com %d pontos turísticos\n", cidade2, pontos2);
            } else {
                printf("Empate - Pontos Turísticos Iguais: Ambas as cartas têm %d pontos turísticos\n", pontos1);
            }
            break;
        case 5:
            printf("Comparando por Densidade Populacional:\n");
            if (densidade1 < densidade2) {
                printf("Carta 1 (%s) venceu com densidade populacional %.2f hab/km²\n", cidade1, densidade1);
            } else if (densidade1 > densidade2) {
                printf("Carta 2 (%s) venceu com densidade populacional %.2f hab/km²\n", cidade2, densidade2);
            } else {
                printf("Empate - Densidade Populacional Igual: Ambas as cartas têm densidade populacional de %.2f hab/km²\n", densidade1);
            }
            break;
        case 6:
            printf("Comparando por PIB per Capita:\n");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta 1 (%s) venceu com PIB per capita de %.2f reais\n", cidade1, pib_per_capita1);
            } else if (pib_per_capita1 < pib_per_capita2) {
                printf("Carta 2 (%s) venceu com PIB per capita de %.2f reais\n", cidade2, pib_per_capita2);
            } else {
                printf("Empate - PIB per Capita Igual: Ambas as cartas têm PIB per capita de %.2f reais\n", pib_per_capita1);
            }
            break;
        case 7:
            printf("Comparando por Super Poder:\n");
            if (super_poder1 > super_poder2) {
                printf("Carta 1 (%s) venceu com Super Poder de %.2f\n", cidade1, super_poder1);
            } else if (super_poder1 < super_poder2) {
                printf("Carta 2 (%s) venceu com Super Poder de %.2f\n", cidade2, super_poder2);
            } else {
                printf("Empate - Super Poder Igual: Ambas as cartas têm Super Poder de %.2f\n", super_poder1);
            }
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    return 0;
}
