#include <stdio.h>

int main()
{
    //Dados da Carta 1
    char cidade1[] = "São Paulo";
    char estado1[] = "A";
    char codigo1[] = "A01";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    //Dados da Carta 2
    char cidade2[] = "Rio de Janeiro";
    char estado2[] = "B";
    char codigo2[] = "A02";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    //Variáveis para controle das escolhas
    int escolha1 = 0, escolha2 = 0;
    float valor1a = 0, valor2a = 0, valor1b = 0, valor2b = 0;

    //Menu interativo para escolha dos Atributos a serem Comparados
    printf("------------------------------------------------\n");
    printf(" ### Escolha qual Atributo sera Comparado: ### \n" );
    printf("------------------------------------------------\n");
    printf("\n");
    printf("1. PoPulacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    scanf("%d", &escolha1);

    // Atribui valores conforme a primeira escolha
    switch (escolha1)
    {
    case 1:
        valor1a = populacao1;
        valor2a = populacao2;
        break;
    case 2:
        valor1a = area1;
        valor2a = area2;
        break;
    case 3:
        valor1a = pib1;
        valor2a = pib2;
        break;
    case 4:
        valor1a = pontos1;
        valor2a = pontos2;
        break;
    case 5:
        valor1a = densidade1;
        valor2a = densidade2;
        break;
    case 6:
        valor1a = pibPerCapita1;
        valor2a = pibPerCapita2;
        break;
    default:
        printf("### Opção inválida! ###\n");
        return 1;
    }

    //Menu do segundo atributo
    printf("-------------------------------------------------------------\n");
    printf("\n### Escolha o segundo atributo (diferente do primeiro): ###\n");
    printf("-------------------------------------------------------------\n");
    if (escolha1 != 1)
        printf("1 - População\n");
    if (escolha1 != 2)
        printf("2 - Área\n");
    if (escolha1 != 3)
        printf("3 - PIB\n");
    if (escolha1 != 4)
        printf("4 - Pontos Turísticos\n");
    if (escolha1 != 5)
        printf("5 - Densidade Demográfica\n");
    if (escolha1 != 6)
        printf("6 - PIB per capita\n");
    scanf("%d", &escolha2);

    //Validação para impedir repetição de atributo
    if (escolha2 == escolha1)
    {
        printf("Erro: O segundo atributo deve ser diferente do primeiro.\n");
        return 1;
    }

    //Atribui valores conforme a segunda escolha
    switch (escolha2)
    {
    case 1:
        valor1b = populacao1;
        valor2b = populacao2;
        break;
    case 2:
        valor1b = area1;
        valor2b = area2;
        break;
    case 3:
        valor1b = pib1;
        valor2b = pib2;
        break;
    case 4:
        valor1b = pontos1;
        valor2b = pontos2;
        break;
    case 5:
        valor1b = densidade1;
        valor2b = densidade2;
        break;
    case 6:
        valor1b = pibPerCapita1;
        valor2b = pibPerCapita2;
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    //Soma dos valores dos dois atributos escolhidos (carta 1 e carta 2)
    float soma1 = valor1a + valor1b; // Calcula a soma dos dois atributos escolhidos para a carta 1
    float soma2 = valor2a + valor2b; // Calcula a soma dos dois atributos escolhidos para a carta 2

    //Exibe os dados da carta 1 ===
     printf("--------------------------------------\n");
    printf("\n---### Resultado da Comparação ###---\n");
     printf("--------------------------------------\n");
    printf("Carta 1 - %s (%s):\n", cidade1, estado1);
    printf("  Atributo 1 (");
    switch (escolha1)
    {
    case 1:
        printf("População");
        break;
    case 2:
        printf("Área");
        break;
    case 3:
        printf("PIB");
        break;
    case 4:
        printf("Pontos Turísticos");
        break;
    case 5:
        printf("Densidade Demográfica");
        break;
    case 6:
        printf("PIB per capita");
        break;
    }
    printf("): %.2f\n", valor1a);

    printf("  Atributo 2 (");
    switch (escolha2)
    {
    case 1:
        printf("População");
        break;
    case 2:
        printf("Área");
        break;
    case 3:
        printf("PIB");
        break;
    case 4:
        printf("Pontos Turísticos");
        break;
    case 5:
        printf("Densidade Demográfica");
        break;
    case 6:
        printf("PIB per capita");
        break;
    }
    printf("): %.2f\n", valor1b);
    printf("  Soma: %.2f\n", soma1);

    //Exibe os dados da carta 2
    printf("Carta 2 - %s (%s):\n", cidade2, estado2);
    printf("  Atributo 1 (");
    switch (escolha1)
    {
    case 1:
        printf("População");
        break;
    case 2:
        printf("Área");
        break;
    case 3:
        printf("PIB");
        break;
    case 4:
        printf("Pontos Turísticos");
        break;
    case 5:
        printf("Densidade Demográfica");
        break;
    case 6:
        printf("PIB per capita");
        break;
    }
    printf("): %.2f\n", valor2a);

    printf("  Atributo 2 (");
    switch (escolha2)
    {
    case 1:
        printf("População");
        break;
    case 2:
        printf("Área");
        break;
    case 3:
        printf("PIB");
        break;
    case 4:
        printf("Pontos Turísticos");
        break;
    case 5:
        printf("Densidade Demográfica");
        break;
    case 6:
        printf("PIB per capita");
        break;
    }
    printf("): %.2f\n", valor2b);
    printf("  Soma: %.2f\n", soma2);

    //Resultado da comparação final com operador ternário
    printf("\n ### -- Vencedor: -- ### \n");
    (soma1 > soma2) ? printf("Carta 1 (%s)\n", cidade1) : (soma2 > soma1) ? printf("Carta 2 (%s)\n", cidade2) : printf("Empate!\n");

    return 0;
}
