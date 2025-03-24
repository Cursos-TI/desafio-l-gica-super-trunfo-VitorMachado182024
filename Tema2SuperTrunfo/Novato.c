#include <stdio.h>

struct Carta {
    char Estado[30];
    char Codigo[10];
    char NomeCidade[30];
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

    // Comparação de um único atributo
    printf("\n===== Comparação entre as cartas =====\n");
    printf("Atributo utilizado: PIB\n");
    printf("%s: %.2f\n", carta1.NomeCidade, carta1.PIB);
    printf("%s: %.2f\n", carta2.NomeCidade, carta2.PIB);
    
    if (carta1.PIB > carta2.PIB) {
        printf("Vencedor: %s com PIB de %.2f\n", carta1.NomeCidade, carta1.PIB);
    } else {
        printf("Vencedor: %s com PIB de %.2f\n", carta2.NomeCidade, carta2.PIB);
    }
    return 0;
}