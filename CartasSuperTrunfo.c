#include <stdio.h>

int main() {
    int p_turistico1, p_turistico2;
    char codigo1[5], estado1[30], cidade1[30];
    float area1, pib1, densidade1, pibpc1;
    char codigo2[5], estado2[30], cidade2[30];
    float area2, pib2, densidade2, pibpc2;

    unsigned long long int populacao1, populacao2;
    float super1, super2;
    int resultpop, resultarea, resultpib, resultp_turistico, resultpibpc, resultden;
    
    /*
    p_turistico: número de pontos turísticos
    codigo: código da carta
    densidade: Densidade populacional
    pibpc: P.I.B. per capita
    resultpop: Resultado da comparação das populações
    resultarea: Resultado da comparação das áreas
    resultpib: Resultado da comparação dos P.I.B.
    resultp_turistico: Resultado da comparação do número de pontos turísticos
    resultpibpc: Resultado da comparação dos P.I.B. per capita
    resultden: Resultado da comparação das dencidades
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

    densidade1 = 1 / densidade1;
    super1 = populacao1 + area1 + pib1 + p_turistico1 + pibpc1 - densidade1;

    printf("O super poder dessa carta é: %f\n", super1);

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

    densidade2 = 1 / densidade2;
    super2 = populacao2 + area2 + pib2 + p_turistico2 + pibpc2 + densidade2;

    printf("O super poder dessa carta é: %f\n", super2);

    resultpop = populacao1 > populacao2;
    resultarea = area1 > area2;
    resultpib = pib1 > pib2;
    resultp_turistico = p_turistico1 > p_turistico2;
    resultpibpc = pibpc1 > pibpc2;
    resultden = densidade1 < densidade2;

    printf("Comparaçao das cartas criadas:\n");

    printf("População da Carta 1: %lld\n", populacao1);
    printf("População da Carta 2: %lld\n", populacao2);
    if (resultpop == 1){
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    };

    printf("Área da Carta 1: %f\n", area1);
    printf("Área da Carta 2: %f\n", area2);
    if (resultarea == 1){
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    };

    printf("P.I.B. da Carta 1: %f\n", pib1);
    printf("P.I.B. da Carta 2: %f\n", pib2);
    if (resultpib == 1){
        printf("P.I.B.: Carta 1 venceu\n");
    } else {
        printf("P.I.B.: Carta 2 venceu\n");
    };

    printf("Número de pontos turísticos da Carta 1: %d\n", p_turistico1);
    printf("Número de pontos turísticos da Carta 2: %d\n", p_turistico2);
    if (resultp_turistico == 1){
        printf("Número de pontos turísticos: Carta 1 venceu\n");
    } else {
        printf("Número de pontos turísticos: Carta 2 venceu\n");
    };

    printf("P.I.B. per capita da Carta 1: %f\n", pibpc1);
    printf("P.I.B. per capita da Carta 2: %f\n", pibpc2);
    if (resultpibpc == 1){
        printf("P.I.B. per capita: Carta 1 venceu\n");
    } else {
        printf("P.I.B. per capita: Carta 2 venceu\n");
    };

    printf("Densidade populacional da Carta 1: %f\n", densidade1);
    printf("Densidade populacional da Carta 2: %f\n", densidade2);
    if (resultden != 1){
        printf("Densidade populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade populacional: Carta 2 venceu\n");
    };

    return 0;

}
