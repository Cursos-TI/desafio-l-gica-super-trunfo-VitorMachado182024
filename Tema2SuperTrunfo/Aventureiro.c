#include <stdio.h>

struct Carta {
    char Estado[50];
    char Codigo[50];
    char NomeCidade[50];
    int Populacao;
    float AreaKm2;
    float PIB;
    int PontosTuristicos;
    float SuperPoder;
    float DensidadePopulacional;
    float PibPerCapita;
};

int main() {
    struct Carta carta1, carta2;
    int opcao;
    
    // Inserindo os dados da primeira carta
    printf("\n===== Insira os dados da primeira carta =====\n");
    printf("Estado: ");
    scanf("%s", carta1.Estado);
    printf("Código da carta: ");
    scanf("%s", carta1.Codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta1.NomeCidade);
    printf("População: ");
    scanf("%d", &carta1.Populacao);
    printf("Área (em Km²): ");
    scanf("%f", &carta1.AreaKm2);
    printf("PIB: ");
    scanf("%f", &carta1.PIB);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.PontosTuristicos);

    // Cálculo de atributos derivados
    carta1.DensidadePopulacional = carta1.Populacao / carta1.AreaKm2;
    carta1.PibPerCapita = carta1.PIB / carta1.Populacao;
    // Cálculo do Super Poder
    carta1.SuperPoder = carta1.Populacao + 
    carta1.AreaKm2 + 
    carta1.PIB + 
    carta1.PontosTuristicos + 
    carta1.PibPerCapita +     
    (1.0 / carta1.DensidadePopulacional);

    // Inserindo os dados da segunda carta
    printf("\n===== Insira os dados da segunda carta =====\n");
    printf("Estado: ");
    scanf("%s", carta2.Estado);
    printf("Código da carta: ");
    scanf("%s", carta2.Codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta2.NomeCidade);
    printf("População: ");
    scanf("%d", &carta2.Populacao);
    printf("Área (em Km²): ");
    scanf("%f", &carta2.AreaKm2);
    printf("PIB: ");
    scanf("%f", &carta2.PIB);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.PontosTuristicos);

    // Cálculo de atributos derivados
    carta2.DensidadePopulacional = carta2.Populacao / carta2.AreaKm2;
    carta2.PibPerCapita = carta2.PIB / carta2.Populacao;
    // Cálculo do Super Poder
    carta2.SuperPoder = carta2.Populacao + 
    carta2.AreaKm2 + 
    carta2.PIB + 
    carta2.PontosTuristicos + 
    carta2.PibPerCapita + 
    (1.0 / carta2.DensidadePopulacional);

    // Exibindo os dados inseridos de cada carta
    printf("\n===== Dados da primeira carta =====\n");
    printf("Estado: %s\n", carta1.Estado);
    printf("Código da carta: %s\n", carta1.Codigo);
    printf("Nome da cidade: %s\n", carta1.NomeCidade);
    printf("População: %d habitantes\n", carta1.Populacao);
    printf("Área: %.2f Km²\n", carta1.AreaKm2);
    printf("PIB: %.2f\n", carta1.PIB);
    printf("Número de pontos turísticos: %d\n", carta1.PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.DensidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta1.PibPerCapita); 
    printf("Super Poder: %.2f\n", carta1.SuperPoder);

    printf("\n===== Dados da segunda carta =====\n");
    printf("Estado: %s\n", carta2.Estado);
    printf("Código da carta: %s\n", carta2.Codigo);
    printf("Nome da cidade: %s\n", carta2.NomeCidade);
    printf("População: %d habitantes\n", carta2.Populacao);
    printf("Área: %.2f Km²\n", carta2.AreaKm2);
    printf("PIB: %.2f\n", carta2.PIB);
    printf("Número de pontos turísticos: %d\n", carta2.PontosTuristicos); 
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.DensidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta2.PibPerCapita);
    printf("Super Poder: %.2f\n", carta2.SuperPoder);
   
    // Escolha do critério de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per capita\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Pontos Turísticos\n");
    printf("7 - Super Poder\n");    
    printf("Opção: ");
    scanf("%d", &opcao);
    
    printf("\n===== Comparação entre as cartas =====\n");
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", carta1.NomeCidade, carta1.Populacao);
            printf("%s: %d habitantes\n", carta2.NomeCidade, carta2.Populacao);
            if (carta1.Populacao > carta2.Populacao) {
                printf("Vencedor: %s\n", carta1.NomeCidade);
            } else if (carta1.Populacao < carta2.Populacao) {
                printf("Vencedor: %s\n", carta2.NomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.NomeCidade, carta1.AreaKm2);
            printf("%s: %.2f km²\n", carta2.NomeCidade, carta2.AreaKm2);
            if (carta1.AreaKm2 > carta2.AreaKm2) {
                printf("Vencedor: %s\n", carta1.NomeCidade);
            } else if (carta1.AreaKm2 < carta2.AreaKm2) {
                printf("Vencedor: %s\n", carta2.NomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.NomeCidade, carta1.PIB);
            printf("%s: %.2f\n", carta2.NomeCidade, carta2.PIB);
            if (carta1.PIB > carta2.PIB) {
                printf("Vencedor: %s\n", carta1.NomeCidade);
            } else if (carta1.PIB < carta2.PIB) {
                printf("Vencedor: %s\n", carta2.NomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Atributo: PIB per capita\n");
            printf("%s: %.2f\n", carta1.NomeCidade, carta1.PibPerCapita);
            printf("%s: %.2f\n", carta2.NomeCidade, carta2.PibPerCapita);
            if (carta1.PibPerCapita > carta2.PibPerCapita) {
                printf("Vencedor: %s\n", carta1.NomeCidade);
            } else if (carta1.PibPerCapita < carta2.PibPerCapita) {
                printf("Vencedor: %s\n", carta2.NomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f habitantes/km²\n", carta1.NomeCidade, carta1.DensidadePopulacional);
            printf("%s: %.2f habitantes/km²\n", carta2.NomeCidade, carta2.DensidadePopulacional);
            if (carta1.DensidadePopulacional < carta2.DensidadePopulacional) {
                printf("Vencedor: %s\n", carta1.NomeCidade);
            } else if (carta1.DensidadePopulacional > carta2.DensidadePopulacional) {
                printf("Vencedor: %s\n", carta2.NomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 6:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", carta1.NomeCidade, carta1.PontosTuristicos);
            printf("%s: %d pontos turísticos\n", carta2.NomeCidade, carta2.PontosTuristicos);
            if (carta1.PontosTuristicos > carta2.PontosTuristicos) {
                printf("Vencedor: %s\n", carta1.NomeCidade);
            } else if (carta1.PontosTuristicos < carta2.PontosTuristicos) {
                printf("Vencedor: %s\n", carta2.NomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", carta1.NomeCidade, carta1.SuperPoder);
            printf("%s: %.2f\n", carta2.NomeCidade, carta2.SuperPoder);
            if (carta1.SuperPoder > carta2.SuperPoder) {
                printf("Vencedor: %s\n", carta1.NomeCidade);
            } else if (carta1.SuperPoder < carta2.SuperPoder) {
                printf("Vencedor: %s\n", carta2.NomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}