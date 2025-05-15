#include <stdio.h>
#include <string.h> // Para usar strcspn

// Função para remover o '\n' das strings capturadas com fgets
void removeNewline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

int main() {
    char Estado1[50], Codigo1[50], cidade1[50];
    int Populacao1, Turismo1;
    float area1, Pib1, superpoder1;
    float densidade1, pibpercapito1;

    char Estado2[50], Codigo2[50], cidade2[50];
    int Populacao2, Turismo2;
    float area2, Pib2, superpoder2;
    float densidade2, pibpercapito2;

    int comparativopopulacao, comparativoarea, comparativoturismo, comparativopib;
    int comparativodensidade, comparativopibpercapito, comparativosuperpoder;

    printf("Carta 1 \n");
    printf("Insira o Estado:\n");
    fgets(Estado1, sizeof Estado1, stdin); removeNewline(Estado1);
    printf("Insira o Codigo da Carta:\n");
    fgets(Codigo1, sizeof Codigo1, stdin); removeNewline(Codigo1);
    printf("Insira a Cidade:\n");
    fgets(cidade1, sizeof cidade1, stdin); removeNewline(cidade1);
    printf("Insira a populacao:\n");
    scanf("%d", &Populacao1); getchar();
    printf("Insira a area:\n");
    scanf("%f", &area1); getchar();
    printf("Insira o PIB:\n");
    scanf("%f", &Pib1); getchar();
    printf("Insira a quantidade de Pontos turisticos:\n");
    scanf("%d", &Turismo1); getchar();

    printf("Carta 2 \n");
    printf("Insira o Estado:\n");
    fgets(Estado2, sizeof Estado2, stdin); removeNewline(Estado2);
    printf("Insira o Codigo da Carta:\n");
    fgets(Codigo2, sizeof Codigo2, stdin); removeNewline(Codigo2);
    printf("Insira a Cidade:\n");
    fgets(cidade2, sizeof cidade2, stdin); removeNewline(cidade2);
    printf("Insira a populacao:\n");
    scanf("%d", &Populacao2); getchar();
    printf("Insira a area:\n");
    scanf("%f", &area2); getchar();
    printf("Insira o PIB:\n");
    scanf("%f", &Pib2); getchar();
    printf("Insira a quantidade de Pontos turisticos:\n");
    scanf("%d", &Turismo2); getchar();

    // Cálculos
    densidade1 = Populacao1 / area1;
    pibpercapito1 = Pib1 / Populacao1;
    densidade2 = Populacao2 / area2;
    pibpercapito2 = Pib2 / Populacao2;

    superpoder1 = Populacao1 + area1 + Pib1 + pibpercapito1 + Turismo1 + 1 / densidade1;
    superpoder2 = Populacao2 + area2 + Pib2 + pibpercapito2 + Turismo2 + 1 / densidade2;

    comparativopopulacao = Populacao1 > Populacao2;
    comparativoarea = area1 > area2;
    comparativoturismo = Turismo1 > Turismo2;
    comparativopib = Pib1 > Pib2;
    comparativodensidade = densidade1 < densidade2; // menor densidade ganha
    comparativopibpercapito = pibpercapito1 > pibpercapito2;
    comparativosuperpoder = superpoder1 > superpoder2;

    // Impressão dos resultados
    printf("Carta 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", Pib1);
    printf("Numero de pontos Turisticos: %d\n", Turismo1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapito1);

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", Pib2);
    printf("Numero de pontos Turisticos: %d\n", Turismo2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapito2);

    printf("Agora veremos quem fez a maior quantidade de pontos!\n");
    printf("Quando aparecer o numero 1 o ponto será direcionado à Carta 1,\n");
    printf("mas quando for 0 o ponto será direcionado à Carta 2.\n\n");

    printf("Populacao: %d\n", comparativopopulacao);
    printf("Area: %d\n", comparativoarea);
    printf("PIB: %d\n", comparativopib);
    printf("Numero de pontos Turisticos: %d\n", comparativoturismo);
    printf("Densidade populacional (menor vence): %d\n", comparativodensidade);
    printf("PIB per capita: %d\n", comparativopibpercapito);
    printf("SUPERPODER: %d\n", comparativosuperpoder);

    return 0;
}
