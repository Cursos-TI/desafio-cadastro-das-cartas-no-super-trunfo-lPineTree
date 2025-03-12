#include <stdio.h>

int main() {
    int carta1, populacao1, p_turistico1;
    char codigo1[5], estado1[30], cidade1[30];
    float area1, pib1, densidade1, pibpc1;
    
    int carta2, populacao2, p_turistico2;
    char codigo2[5], estado2[30], cidade2[30];
    float area2, pib2, densidade2, pibpc2;

    /*
    carta: número da carta
    p_turistico: número de pontos turísticos
    codigo: código da carta
    densidade: Densidade populacional
    pibpc: P.I.B. per capita
    */

    printf("Vamos criar uma carta para o jogo de super trunfo! \n");
    printf("Digite o nome de um estado brasileiro para essa carta: \n ");
    printf("(Não use espaços) \n");
    scanf("%s", &estado1);

    printf("Agora, digite o nome de uma cidade desse estado: \n");
    printf("(Não use espaços) \n");
    scanf("%s", &cidade1);

    printf("Digite o código da carta: \n");
    printf("(Primeira letra do estado + o número dessa carta) \n");
    scanf("%s", &codigo1);

    printf("Digite sua população: \n");
    scanf("%d", &populacao1);

    printf("Digite sua área em kilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite seu PIB: \n");
    scanf("%f", &pib1);

    printf("Digite sua quantidade pontos turísticos: \n");
    scanf("%d", &p_turistico1);

    densidade1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;

    printf("Carta 01 \n");
    printf("Codígo da carta: %s \n", codigo1);
    printf("Estado: %s - Cidade: %s \n", estado1, cidade1);
    printf("População: %d - Área: %f \n", populacao1, area1);
    printf("PIB: %f - Quantidade de pontos turísticos: %d \n", pib1, p_turistico1);
    printf("Densidade populacional: %f \n", densidade1);
    printf("P.I.B. per capita: %f \n", pibpc1);

    printf("Agora vamos criar uma segunda carta! \n");
    printf("Digite o nome de outro estado brasileiro: \n");
    printf("(Não use espaços) \n");
    scanf("%s", estado2);

    printf("Agora, digite o nome de uma cidade desse estado: \n");
    printf("(Não use espaços) \n");
    scanf("%s", &cidade2);

    printf("Digite o código da carta: \n");
    printf("(Primeira letra do estado + o número dessa carta) \n");
    scanf("%s", &codigo2);

    printf("Digite sua população: \n");
    scanf("%d", &populacao2);

    printf("Digite sua área em kilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite seu PIB: \n");
    scanf("%f", &pib2);

    printf("Digite sua quantidade pontos turísticos: \n");
    scanf("%d", &p_turistico2);

    densidade2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;

    printf("Carta 02 \n");
    printf("Codígo da carta: %s \n", codigo2);
    printf("Estado: %s - Cidade: %s \n", estado2, cidade2);
    printf("População: %d - Área: %f \n", populacao2, area2);
    printf("PIB: %f - Quantidade de pontos turísticos: %d \n", pib2, p_turistico2);
    printf("Densidade populacional: %f \n", densidade2);
    printf("P.I.B. per capita: %f \n", pibpc2);

    return 0;

}
