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
    int opcao1, opcao2;
// Inserindo dados das cartas    
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

    carta1.DensidadePopulacional = carta1.Populacao / carta1.AreaKm2;
    carta1.PibPerCapita = carta1.PIB / carta1.Populacao;
    carta1.SuperPoder = carta1.Populacao + carta1.AreaKm2 + carta1.PIB + carta1.PontosTuristicos + carta1.PibPerCapita + (1.0 / carta1.DensidadePopulacional);

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

    carta2.DensidadePopulacional = carta2.Populacao / carta2.AreaKm2;
    carta2.PibPerCapita = carta2.PIB / carta2.Populacao;
    carta2.SuperPoder = carta2.Populacao + carta2.AreaKm2 + carta2.PIB + carta2.PontosTuristicos + carta2.PibPerCapita + (1.0 / carta2.DensidadePopulacional);

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

// Primeira escolha
printf("\n===== Escolha um atributo para comparar =====\n");
printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - PIB per capita\n5 - Densidade Populacional\n6 - Pontos Turisticos\n7 - Super Poder\n");
printf("Opcao 1: ");
scanf("%d", &opcao1);

if (opcao1 < 1 || opcao1 > 7) {
    printf("Erro: Opção inválida, recomece o jogo!\n");
    return 1;
}

// Segunda escolha
printf("\n===== Escolha outro atributo diferente do primeiro =====\n");
if (opcao1 == 1) {
    printf("2 - Area\n3 - PIB\n4 - PIB per capita\n5 - Densidade Populacional\n6 - Pontos Turisticos\n7 - Super Poder\n");
} else if (opcao1 == 2) {
    printf("1 - Populacao\n3 - PIB\n4 - PIB per capita\n5 - Densidade Populacional\n6 - Pontos Turisticos\n7 - Super Poder\n");
} else if (opcao1 == 3) {
    printf("1 - Populacao\n2 - Area\n4 - PIB per capita\n5 - Densidade Populacional\n6 - Pontos Turisticos\n7 - Super Poder\n");
} else if (opcao1 == 4) {
    printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade Populacional\n6 - Pontos Turisticos\n7 - Super Poder\n");
} else if (opcao1 == 5) {
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - PIB per capita\n6 - Pontos Turisticos\n7 - Super Poder\n");
} else if (opcao1 == 6) {
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - PIB per capita\n5 - Densidade Populacional\n7 - Super Poder\n");
} else if (opcao1 == 7) {
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - PIB per capita\n5 - Densidade Populacional\n6 - Pontos Turisticos\n");
}

printf("Opcao 2: ");
scanf("%d", &opcao2);

if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 7) {
    printf("Erro: Escolha de atributo inválida, recomece o jogo!\n");
    return 1;
}else {
// Iniciando comparação entre as cartas
    printf("\n===== Comparação entre as cartas =====\n");
    float valor1_cidade1, valor1_cidade2, valor2_cidade1, valor2_cidade2;

    switch (opcao1) {
        case 1: valor1_cidade1 = carta1.Populacao; valor1_cidade2 = carta2.Populacao; break;
        case 2: valor1_cidade1 = carta1.AreaKm2; valor1_cidade2 = carta2.AreaKm2; break;
        case 3: valor1_cidade1 = carta1.PIB; valor1_cidade2 = carta2.PIB; break;
        case 4: valor1_cidade1 = carta1.PibPerCapita; valor1_cidade2 = carta2.PibPerCapita; break;
        case 5: valor1_cidade1 = carta1.DensidadePopulacional; valor1_cidade2 = carta2.DensidadePopulacional; break;
        case 6: valor1_cidade1 = carta1.PontosTuristicos; valor1_cidade2 = carta2.PontosTuristicos; break;
        case 7: valor1_cidade1 = carta1.SuperPoder; valor1_cidade2 = carta2.SuperPoder; break;
    }

    switch (opcao2) {
        case 1: valor2_cidade1 = carta1.Populacao; valor2_cidade2 = carta2.Populacao; break;
        case 2: valor2_cidade1 = carta1.AreaKm2; valor2_cidade2 = carta2.AreaKm2; break;
        case 3: valor2_cidade1 = carta1.PIB; valor2_cidade2 = carta2.PIB; break;
        case 4: valor2_cidade1 = carta1.PibPerCapita; valor2_cidade2 = carta2.PibPerCapita; break;
        case 5: valor2_cidade1 = carta1.DensidadePopulacional; valor2_cidade2 = carta2.DensidadePopulacional; break;
        case 6: valor2_cidade1 = carta1.PontosTuristicos; valor2_cidade2 = carta2.PontosTuristicos; break;
        case 7: valor2_cidade1 = carta1.SuperPoder; valor2_cidade2 = carta2.SuperPoder; break;
    }
// Exibindo comparação dos atributos
printf("%d - ", opcao1);
switch (opcao1) {
    case 1: printf("População: %s - %d, %s - %d\n", carta1.NomeCidade, carta1.Populacao, carta2.NomeCidade, carta2.Populacao); break;
    case 2: printf("Área: %s - %.2f Km², %s - %.2f Km²\n", carta1.NomeCidade, carta1.AreaKm2, carta2.NomeCidade, carta2.AreaKm2); break;
    case 3: printf("PIB: %s - %.2f Km², %s - %.2f Km²\n", carta1.NomeCidade, carta1.PIB, carta2.NomeCidade, carta2.PIB); break;
    case 4: printf("PIB per capita: %s - %.2f, %s - %.2f\n", carta1.NomeCidade, carta1.PibPerCapita, carta2.NomeCidade, carta2.PibPerCapita); break;
    case 5: printf("Densidade Populacional: %s - %.2f hab/km², %s - %.2f hab/km²\n", carta1.NomeCidade, carta1.DensidadePopulacional, carta2.NomeCidade, carta2.DensidadePopulacional); break;
    case 6: printf("Pontos Turísticos: %s - %d, %s - %d\n", carta1.NomeCidade, carta1.PontosTuristicos, carta2.NomeCidade, carta2.PontosTuristicos); break;
    case 7: printf("Super Poder: %s - %.2f, %s - %.2f\n", carta1.NomeCidade, carta1.SuperPoder, carta2.NomeCidade, carta2.SuperPoder); break;
    }
printf("%d - ", opcao2);
switch (opcao2) {
    case 1: printf("População: %s - %d, %s - %d\n", carta1.NomeCidade, carta1.Populacao, carta2.NomeCidade, carta2.Populacao); break;
    case 2: printf("Área: %s - %.2f Km², %s - %.2f Km²\n", carta1.NomeCidade, carta1.AreaKm2, carta2.NomeCidade, carta2.AreaKm2); break;
    case 3: printf("PIB: %s - %.2f Km², %s - %.2f Km²\n", carta1.NomeCidade, carta1.PIB, carta2.NomeCidade, carta2.PIB); break;
    case 4: printf("PIB per capita: %s - %.2f, %s - %.2f\n", carta1.NomeCidade, carta1.PibPerCapita, carta2.NomeCidade, carta2.PibPerCapita); break;
    case 5: printf("Densidade Populacional: %s - %.2f hab/km², %s - %.2f hab/km²\n", carta1.NomeCidade, carta1.DensidadePopulacional, carta2.NomeCidade, carta2.DensidadePopulacional); break;
    case 6: printf("Pontos Turísticos: %s - %d, %s - %d\n", carta1.NomeCidade, carta1.PontosTuristicos, carta2.NomeCidade, carta2.PontosTuristicos); break;
    case 7: printf("Super Poder: %s - %.2f, %s - %.2f\n", carta1.NomeCidade, carta1.SuperPoder, carta2.NomeCidade, carta2.SuperPoder); break;
    }
// Executando comparação da soma dos atributos selecionados
    int vitorias_cidade1 = 0, vitorias_cidade2 = 0;
    float soma_cidade1 = valor1_cidade1 + valor2_cidade1;
    float soma_cidade2 = valor1_cidade2 + valor2_cidade2;
    printf("\n===== Resultado da Comparação - Atributo 1 =====\n");
    switch (opcao1) {
        case 1: 
            printf("\nPopulação: ");
            if (carta1.Populacao > carta2.Populacao)
                printf("%s (%d) vence de %s (%d)\n", carta1.NomeCidade, carta1.Populacao, carta2.NomeCidade, carta2.Populacao);
            else if (carta1.Populacao < carta2.Populacao)
                printf("%s (%d) vence de %s (%d)\n", carta2.NomeCidade, carta2.Populacao, carta1.NomeCidade, carta1.Populacao);
            else
                printf("Empate: Ambas têm %d habitantes\n", carta1.Populacao);
            break;
        case 2: 
            printf("\nÁrea: ");
            if (carta1.AreaKm2 > carta2.AreaKm2)
                printf("%s (%.2f Km²) vence de %s (%.2f Km²)\n", carta1.NomeCidade, carta1.AreaKm2, carta2.NomeCidade, carta2.AreaKm2);
            else if (carta1.AreaKm2 < carta2.AreaKm2)
                printf("%s (%.2f Km²) vence de %s (%.2f Km²)\n", carta2.NomeCidade, carta2.AreaKm2, carta1.NomeCidade, carta1.AreaKm2);
            else
                printf("Empate: Ambas têm %.2f Km²\n", carta1.AreaKm2);
            break;
        case 3: 
            printf("\nPIB: ");
            if (carta1.PIB > carta2.PIB)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta1.NomeCidade, carta1.PIB, carta2.NomeCidade, carta2.PIB);
            else if (carta1.PIB < carta2.PIB)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta2.NomeCidade, carta2.PIB, carta1.NomeCidade, carta1.PIB);
            else
                printf("Empate: Ambas têm PIB de %.2f\n", carta1.PIB);
            break;
        case 4: 
            printf("\nPIB per capita: ");
            if (carta1.PibPerCapita > carta2.PibPerCapita)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta1.NomeCidade, carta1.PibPerCapita, carta2.NomeCidade, carta2.PibPerCapita);
            else if (carta1.PibPerCapita < carta2.PibPerCapita)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta2.NomeCidade, carta2.PibPerCapita, carta1.NomeCidade, carta1.PibPerCapita);
            else
                printf("Empate: Ambas têm PIB per capita de %.2f\n", carta1.PibPerCapita);
            break;
        case 5: 
            printf("\nDensidade Populacional: ");
            if (carta1.DensidadePopulacional < carta2.DensidadePopulacional)
                printf("%s (%.2f hab/km²) vence de %s (%.2f hab/km²)\n", carta1.NomeCidade, carta1.DensidadePopulacional, carta2.NomeCidade, carta2.DensidadePopulacional);
            else if (carta1.DensidadePopulacional > carta2.DensidadePopulacional)
                printf("%s (%.2f hab/km²) vence de %s (%.2f hab/km²)\n", carta2.NomeCidade, carta2.DensidadePopulacional, carta1.NomeCidade, carta1.DensidadePopulacional);
            else
                printf("Empate: Ambas têm %.2f hab/km²\n", carta1.DensidadePopulacional);
            break;
        case 6: 
            printf("\nPontos Turísticos: ");
            if (carta1.PontosTuristicos > carta2.PontosTuristicos)
                printf("%s (%d) vence de %s (%d)\n", carta1.NomeCidade, carta1.PontosTuristicos, carta2.NomeCidade, carta2.PontosTuristicos);
            else if (carta1.PontosTuristicos < carta2.PontosTuristicos)
                printf("%s (%d) vence de %s (%d)\n", carta2.NomeCidade, carta2.PontosTuristicos, carta1.NomeCidade, carta1.PontosTuristicos);
            else
                printf("Empate: Ambas têm %d pontos turísticos\n", carta1.PontosTuristicos);
            break;
        case 7: 
            printf("\nSuper Poder: ");
            if (carta1.SuperPoder > carta2.SuperPoder)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta1.NomeCidade, carta1.SuperPoder, carta2.NomeCidade, carta2.SuperPoder);
            else if (carta1.SuperPoder < carta2.SuperPoder)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta2.NomeCidade, carta2.SuperPoder, carta1.NomeCidade, carta1.SuperPoder);
            else
                printf("Empate: Ambas têm %.2f de Super Poder\n", carta1.SuperPoder);
            break;
    }
    printf("\n===== Resultado da Comparação - Atributo 2 =====\n");
    switch (opcao2) {
        case 1: 
            printf("\nPopulação: ");
            if (carta1.Populacao > carta2.Populacao)
                printf("%s (%d) vence de %s (%d)\n", carta1.NomeCidade, carta1.Populacao, carta2.NomeCidade, carta2.Populacao);
            else if (carta1.Populacao < carta2.Populacao)
                printf("%s (%d) vence de %s (%d)\n", carta2.NomeCidade, carta2.Populacao, carta1.NomeCidade, carta1.Populacao);
            else
                printf("Empate: Ambas têm %d habitantes\n", carta1.Populacao);
            break;
        case 2: 
            printf("\nÁrea: ");
            if (carta1.AreaKm2 > carta2.AreaKm2)
                printf("%s (%.2f Km²) vence de %s (%.2f Km²)\n", carta1.NomeCidade, carta1.AreaKm2, carta2.NomeCidade, carta2.AreaKm2);
            else if (carta1.AreaKm2 < carta2.AreaKm2)
                printf("%s (%.2f Km²) vence de %s (%.2f Km²)\n", carta2.NomeCidade, carta2.AreaKm2, carta1.NomeCidade, carta1.AreaKm2);
            else
                printf("Empate: Ambas têm %.2f Km²\n", carta1.AreaKm2);
            break;
        case 3: 
            printf("\nPIB: ");
            if (carta1.PIB > carta2.PIB)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta1.NomeCidade, carta1.PIB, carta2.NomeCidade, carta2.PIB);
            else if (carta1.PIB < carta2.PIB)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta2.NomeCidade, carta2.PIB, carta1.NomeCidade, carta1.PIB);
            else
                printf("Empate: Ambas têm PIB de %.2f\n", carta1.PIB);
            break;   
        case 4: 
            printf("\nPIB per capita: ");
            if (carta1.PibPerCapita > carta2.PibPerCapita)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta1.NomeCidade, carta1.PibPerCapita, carta2.NomeCidade, carta2.PibPerCapita);
            else if (carta1.PibPerCapita < carta2.PibPerCapita)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta2.NomeCidade, carta2.PibPerCapita, carta1.NomeCidade, carta1.PibPerCapita);
            else
                printf("Empate: Ambas têm PIB per capita de %.2f\n", carta1.PibPerCapita);
            break;
        case 5:
            printf("\nDensidade Populacional: ");
            if (carta1.DensidadePopulacional < carta2.DensidadePopulacional)
                printf("%s (%.2f hab/km²) vence de %s (%.2f hab/km²)\n", carta1.NomeCidade, carta1.DensidadePopulacional, carta2.NomeCidade, carta2.DensidadePopulacional);
            else if (carta1.DensidadePopulacional > carta2.DensidadePopulacional)
                printf("%s (%.2f hab/km²) vence de %s (%.2f hab/km²)\n", carta2.NomeCidade, carta2.DensidadePopulacional, carta1.NomeCidade, carta1.DensidadePopulacional);
            else
                printf("Empate: Ambas têm %.2f hab/km²\n", carta1.DensidadePopulacional);
            break;
        case 6:
            printf("\nPontos Turísticos: ");
            if (carta1.PontosTuristicos > carta2.PontosTuristicos)
                printf("%s (%d) vence de %s (%d)\n", carta1.NomeCidade, carta1.PontosTuristicos, carta2.NomeCidade, carta2.PontosTuristicos);
            else if (carta1.PontosTuristicos < carta2.PontosTuristicos)
                printf("%s (%d) vence de %s (%d)\n", carta2.NomeCidade, carta2.PontosTuristicos, carta1.NomeCidade, carta1.PontosTuristicos);
            else
                printf("Empate: Ambas têm %d pontos turísticos\n", carta1.PontosTuristicos);
            break;
        case 7:
            printf("\nSuper Poder: ");
            if (carta1.SuperPoder > carta2.SuperPoder)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta1.NomeCidade, carta1.SuperPoder, carta2.NomeCidade, carta2.SuperPoder);
            else if (carta1.SuperPoder < carta2.SuperPoder)
                printf("%s (%.2f) vence de %s (%.2f)\n", carta2.NomeCidade, carta2.SuperPoder, carta1.NomeCidade, carta1.SuperPoder);
            else
                printf("Empate: Ambas têm %.2f de Super Poder\n", carta1.SuperPoder);
            break;
    }
    if (opcao1 == 5) {
        if (valor1_cidade1 < valor1_cidade2) vitorias_cidade1++;
        else vitorias_cidade2++;
    } else {
        if (valor1_cidade1 > valor1_cidade2) vitorias_cidade1++;
        else vitorias_cidade2++;
    }
    if (opcao2 == 5) {
        if (valor2_cidade1 < valor2_cidade2) vitorias_cidade1++;
        else vitorias_cidade2++;
    } else {
        if (valor2_cidade1 > valor2_cidade2) vitorias_cidade1++;
        else vitorias_cidade2++;
    }
// Exibindo resultado da comparação entre as somas
    printf("\n===== Resultado da Comparação final =====\n");
    printf("Soma dos atributos escolhidos para %s: %.2f\n", carta1.NomeCidade, soma_cidade1);
    printf("Soma dos atributos escolhidos para %s: %.2f\n", carta2.NomeCidade, soma_cidade2);
    printf("\n%s: %.2f vs %s: %.2f\n", carta1.NomeCidade, soma_cidade1, carta2.NomeCidade, soma_cidade2);
    if (soma_cidade1 > soma_cidade2) {
        printf("\nA cidade vecedora é %s!\n", carta1.NomeCidade);
    } else if (soma_cidade2 > soma_cidade1) {
        printf("\nA cidade vencedora é %s!\n", carta2.NomeCidade);
    } else {
        printf("\nEmpate entre as cidades %s e %s!\n", carta1.NomeCidade, carta2.NomeCidade);
    }
    }
    return 0;
}