#include <stdio.h>

int main() {
    int p_turistico1, p_turistico2, opcao1, opcao2, resultfinal = 0;
    char codigo1[5], estado1[30], cidade1[30];
    float area1, pib1, densidade1, pibpc1;
    char codigo2[5], estado2[30], cidade2[30];
    float area2, pib2, densidade2, pibpc2;
    double soma1opcao1 = 0, soma2opcao1 = 0, soma1opcao2 = 0, soma2opcao2 = 0, comparacao1 = 0, comparacao2 = 0;

    unsigned long long int populacao1, populacao2;
    float super1, super2;
    int resultpop, resultarea, resultpib, resultp_turistico, resultpibpc, resultden;
    int opcaopop, opcaoarea, opcaopib, opcaop_turistico, opcaopibpc, opcaoden;
    
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

    printf("Vamos criar uma carta para o jogo de super trunfo!\n");
    printf("Digite o nome de um estado brasileiro para essa carta:\n ");
    printf("(Não use espaços)\n");
    scanf("%s", &estado1);

    printf("Agora, digite o nome de uma cidade desse estado:\n");
    printf("(Não use espaços)\n");
    scanf("%s", &cidade1);

    printf("Digite o código da carta:\n");
    printf("(Primeira letra do estado + o número dessa carta)\n");
    scanf("%s", &codigo1);

    printf("Digite sua população:\n");
    scanf("%llu", &populacao1);

    printf("Digite sua área em kilometros quadrados:\n");
    scanf("%f", &area1);

    printf("Digite seu PIB:\n");
    scanf("%f", &pib1);

    printf("Digite sua quantidade pontos turísticos:\n");
    scanf("%d", &p_turistico1);

    densidade1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;

    printf("Carta 01\n");
    printf("Codígo da carta:%s\n", codigo1);
    printf("Estado:%s - Cidade:%s\n", estado1, cidade1);
    printf("População:%llu - Área:%f\n", populacao1, area1);
    printf("PIB:%f - Quantidade de pontos turísticos:%d\n", pib1, p_turistico1);
    printf("Densidade populacional:%f\n", densidade1);
    printf("P.I.B. per capita:%f\n", pibpc1);

    densidade1 = 1 / densidade1;
    super1 = populacao1 + area1 + pib1 + p_turistico1 + pibpc1 - densidade1;

    printf("O super poder dessa carta é:%f\n", super1);

    printf("Agora vamos criar uma segunda carta!\n");
    printf("Digite o nome de outro estado brasileiro:\n");
    printf("(Não use espaços)\n");
    scanf("%s", &estado2);

    printf("Agora, digite o nome de uma cidade desse estado:\n");
    printf("(Não use espaços)\n");
    scanf("%s", &cidade2);

    printf("Digite o código da carta:\n");
    printf("(Primeira letra do estado + o número dessa carta)\n");
    scanf("%s", &codigo2);

    printf("Digite sua população:\n");
    scanf("%llu", &populacao2);

    printf("Digite sua área em kilometros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite seu PIB:\n");
    scanf("%f", &pib2);

    printf("Digite sua quantidade pontos turísticos:\n");
    scanf("%d", &p_turistico2);

    densidade2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;

    printf("Carta 02\n");
    printf("Codígo da carta:%s\n", codigo2);
    printf("Estado:%s - Cidade:%s\n", estado2, cidade2);
    printf("População:%llu - Área:%f\n", populacao2, area2);
    printf("PIB:%f - Quantidade de pontos turísticos:%d\n", pib2, p_turistico2);
    printf("Densidade populacional:%f\n", densidade2);
    printf("P.I.B. per capita:%f\n", pibpc2);

    densidade2 = 1 / densidade2;
    super2 = populacao2 + area2 + pib2 + p_turistico2 + pibpc2 + densidade2;

    printf("O super poder dessa carta é:%f\n", super2);

    resultpop = populacao1 > populacao2;
    resultarea = area1 > area2;
    resultpib = pib1 > pib2;
    resultp_turistico = p_turistico1 > p_turistico2;
    resultpibpc = pibpc1 > pibpc2;
    resultden = densidade1 > densidade2;

    printf("Vamos comparar as cartas criadas!\n");
    printf("Qual atributo você deseja comparar?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. P.I.B.\n");
    printf("4. Quantidade de pontos turísticos\n");
    printf("5. P.I.B. per capita\n");
    printf("6. Densidade\n");
    scanf("%d", &opcao1);

    switch (opcao1){
        case 1:
            opcaopop = 1;
            printf("Comparação da população das cartas criadas:\n");
            printf("Nome do Estado:%s - População da Carta 1: %llu\n", estado1, populacao1);
            printf("Nome do Estado:%s - População da Carta 2: %llu\n", estado2, populacao2);
            if (populacao1 == populacao2){
                printf("Deu empate.\n");
            } else {
                resultpop == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}
        break;
        case 2:
            opcaoarea = 1;
            printf("Comparação da Área das cartas criadas:\n");
            printf("Nome do Estado:%s - Área da Carta 1: %f\n", estado1, area1);
            printf("Nome do Estado:%s - Área da Carta 2: %f\n", estado2, area2);
            if (area1 == area2){
                printf("Deu empate.\n");
            } else {
                resultarea == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}
        break;
        case 3:
            opcaopib = 1;
            printf("Comparação do P.I.B. das cartas criadas:\n");
            printf("Nome do Estado:%s - P.I.B. da Carta 1: %f\n", estado1, pib1);
            printf("Nome do Estado:%s - P.I.B. da Carta 2: %f\n", estado2, pib2);
            if (pib1 == pib2){
                printf("Deu empate.\n");
            } else {
                resultpib == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}
        break;
        case 4:
            opcaop_turistico = 1;
            printf("Comparação da quantidade de pontos turísticos das cartas criadas:\n");
            printf("Nome do Estado:%s - quantidade de pontos turísticos da Carta 1: %f\n", estado1, p_turistico1);
            printf("Nome do Estado:%s - Áreaquantidade de pontos turísticos da Carta 2: %f\n", estado2, p_turistico2);
            if (p_turistico1 == p_turistico2){
                printf("Deu empate.\n");
            } else {
                resultp_turistico == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}
        break;
        case 5:
            opcaopibpc = 1;
            printf("Comparação do P.I.B. per capita das cartas criadas:\n");
            printf("Nome do Estado:%s - P.I.B. per capita da Carta 1: %f\n", estado1, pibpc1);
            printf("Nome do Estado:%s - P.I.B. per capita da Carta 2: %f\n", estado2, pibpc2);
            if (pibpc1 == pibpc2){
                printf("Deu empate.\n");
            } else {
                resultpibpc == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}
        break;
        case 6:
            opcaoden = 1;
            densidade1 = 1 / densidade1;
            densidade2 = 1 / densidade2;
            printf("Comparação da Densidade das cartas criadas:\n");
            printf("Nome do Estado:%s - Densidade da Carta 1: %f\n", estado1, densidade1);
            printf("Nome do Estado:%s - Densidade da Carta 2: %f\n", estado2, densidade2);
            if (densidade1 == densidade2){
                printf("Deu empate.\n");
            } else {
                resultden == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}
        break;
        default:
            printf("Opção Inválida.");
        break;}
    
        printf("Agora vamos comparar um segundo atributo das cartas criadas!\n");
        printf("Qual atributo você deseja comparar?\n");
        if (opcaopop != 1){
            printf("1. População\n");}
        if (opcaoarea != 1){
            printf("2. Área\n");}
        if (opcaopib != 1){
            printf("3. P.I.B.\n");}
        if (opcaop_turistico != 1){
            printf("4. Quantidade de pontos turísticos\n");}
        if (opcaopibpc != 1){
            printf("5. P.I.B. per capita\n");}
        if (opcaoden != 1){
            printf("6. Densidade\n");}
        scanf("%d", &opcao2);
    
        switch (opcao2){
        case 1:
            if (opcaopop == 1){
                printf("Opção Inválida.");
            } else {
                printf("Comparação da população das cartas criadas:\n");
                printf("Nome do Estado:%s - População da Carta 1: %llu\n", estado1, populacao1);
                printf("Nome do Estado:%s - População da Carta 2: %llu\n", estado2, populacao2);
                if (populacao1 == populacao2){
                    printf("Deu empate.\n");
                } else {
                    resultpop == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}}
        break;
        case 2:
            if (opcaoarea == 1){
                printf("Opção Inválida.");
            } else {
                printf("Comparação da Área das cartas criadas:\n");
                printf("Nome do Estado:%s - Área da Carta 1: %f\n", estado1, area1);
                printf("Nome do Estado:%s - Área da Carta 2: %f\n", estado2, area2);
                if (area1 == area2){
                    printf("Deu empate.\n");
                } else {
                resultarea == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}}
        break;
        case 3:
            if (opcaopib == 1){
                printf("Opção Inválida.");
            } else {
                printf("Comparação do P.I.B. das cartas criadas:\n");
                printf("Nome do Estado:%s - P.I.B. da Carta 1: %f\n", estado1, pib1);
                printf("Nome do Estado:%s - P.I.B. da Carta 2: %f\n", estado2, pib2);
                if (pib1 == pib2){
                    printf("Deu empate.\n");
                } else {
                    resultpib == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}}
        break;
        case 4:
            if (opcaop_turistico == 1){
                printf("Opção Inválida.");
            } else {
                printf("Comparação da quantidade de pontos turísticos das cartas criadas:\n");
                printf("Nome do Estado:%s - quantidade de pontos turísticos da Carta 1: %f\n", estado1, p_turistico1);
                printf("Nome do Estado:%s - Áreaquantidade de pontos turísticos da Carta 2: %f\n", estado2, p_turistico2);
                if (p_turistico1 == p_turistico2){
                    printf("Deu empate.\n");
                } else {
                    resultp_turistico == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}}
        break;
        case 5:
           if (opcaopibpc == 1){
                printf("Opção Inválida.");
            } else {
                printf("Comparação do P.I.B. per capita das cartas criadas:\n");
                printf("Nome do Estado:%s - P.I.B. per capita da Carta 1: %f\n", estado1, pibpc1);
                printf("Nome do Estado:%s - P.I.B. per capita da Carta 2: %f\n", estado2, pibpc2);
                if (pibpc1 == pibpc2){
                    printf("Deu empate.\n");
                } else {
                    resultpibpc == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}}
        break;
        case 6:
            if (opcaoden == 1){
                printf("Opção Inválida.");
            } else {
                densidade1 = 1 / densidade1;
                densidade2 = 1 / densidade2;
                printf("Comparação da Densidade das cartas criadas:\n");
                printf("Nome do Estado:%s - Densidade da Carta 1: %f\n", estado1, densidade1);
                printf("Nome do Estado:%s - Densidade da Carta 2: %f\n", estado2, densidade2);
                if (densidade1 == densidade2){
                    printf("Deu empate.\n");
                } else {
                    resultden == 1 ? printf("A carta 1 venceu a rodada!\n") : printf("A carta 2 venceu a rodada!\n");}
            }
        break;
        default:
            printf("Opção Inválida.");
        break;}
        
        printf("Agora Vamos ver qual carta venceu o jogo.\n");
        printf("Primeira Carta - Nome do Estado:%s\n", estado1);
        printf("Resultado das comparações: ");
        switch (opcao1){
        case 1:
            soma1opcao1 = populacao1;
            printf("População:%llu + ", populacao1);
        break;
        case 2:
            soma1opcao1 = area1;
            printf("Área:%f + ", area1);
        break;
        case 3:
            soma1opcao1 = pib1;
            printf("P.I.B.:%f + ", pib1);
        break;
        case 4:
            soma1opcao1 = p_turistico1;
            printf("Quantidade de pontos turísticos:%d + ", p_turistico1);
        break;
        case 5:
            soma1opcao1 = pibpc1;
            printf("P.I.B. per capita:%f + ", pibpc1);
        break;
        case 6:
            soma1opcao1 = densidade1;
            printf("Densidade:%f + ", densidade1);
        break;
        default:
            printf("Opção Inválida.");
        break;}
    
        switch (opcao2){
        case 1:
        if (opcaopop == 1){
            printf("Opção Inválida.");
        } else {
            soma1opcao2 = populacao1;
            printf("População:%llu\n", populacao1);}
        break;
        case 2:
        if (opcaoarea == 1){
            printf("Opção Inválida.");
        } else {
            soma1opcao2 = area1;
            printf("Área:%f\n", area1);}
        break;
        case 3:
        if (opcaopib == 1){
            printf("Opção Inválida.");
        } else {
            soma1opcao2 = pib1;
            printf("P.I.B.:%f\n", pib1);}
        break;
        case 4:
        if (opcaop_turistico == 1){
            printf("Opção Inválida.");
        } else {
            soma1opcao2 = p_turistico1;
            printf("Quantidade de pontos turísticos:%d\n", p_turistico1);}
        break;
        case 5:
        if (opcaopibpc == 1){
            printf("Opção Inválida.");
        } else {
            soma1opcao2 = pibpc1;
            printf("P.I.B. per capita:%f\n", pibpc1);}
        break;
        case 6:
        if (opcaoden == 1){
            printf("Opção Inválida.");
        } else {
            soma1opcao2 = densidade1;
            printf("Densidade:%f\n", densidade1);}
        break;
        default:
            printf("Opção Inválida.");
        break;}
    
        comparacao1 = soma1opcao1 + soma1opcao2;
        printf("Resultado das comparações:%f\n", comparacao1);
        printf("Segunda Carta - Nome do Estado:%s\n", estado2);
        printf("Resultado das comparações: ");
    
        switch (opcao1){
        case 1:
            soma2opcao1 = populacao2;
            printf("População:%llu + ", populacao2);
        break;
        case 2:
            soma2opcao1 = area2;
            printf("Área:%f + ", area2);
        break;
        case 3:
            soma2opcao1 = pib2;
            printf("P.I.B.:%f + ", pib2);
        break;
        case 4:
            soma2opcao1 = p_turistico2;
            printf("Quantidade de pontos turísticos:%d + ", p_turistico2);
        break;
        case 5:
            soma2opcao1 = pibpc2;
            printf("P.I.B. per capita:%f + ", pibpc2);
        break;
        case 6:
            soma2opcao1 = densidade2;
            printf("Densidade:%f + ", densidade2);
        break;
        default:
            printf("Opção Inválida.");
        break;}
    
        switch (opcao2){
        case 1:
        if (opcaopop == 1){
            printf("Opção Inválida.");
        } else {
            soma2opcao2 = populacao2;
            printf("População:%llu\n", populacao2);}
        break;
        case 2:
        if (opcaoarea == 1){
            printf("Opção Inválida.");
        } else {
            soma2opcao2 = area2;
            printf("Área:%f\n", area2);}
        break;
        case 3:
        if (opcaopib == 1){
            printf("Opção Inválida.");
        } else {
            soma2opcao2 = pib2;
            printf("P.I.B.:%f\n", pib2);}
        break;
        case 4:
        if (opcaop_turistico == 1){
            printf("Opção Inválida.");
        } else {
            soma2opcao2 = p_turistico2;
            printf("Quantidade de pontos turísticos:%d\n", p_turistico2);}
        break;
        case 5:
        if (opcaopibpc == 1){
            printf("Opção Inválida.");
        } else {
            soma2opcao2 = pibpc2;
            printf("P.I.B. per capita:%f\n", pibpc2);}
        break;
        case 6:
        if (opcaoden == 1){
            printf("Opção Inválida.");
        } else {
            soma2opcao2 = densidade2;
            printf("Densidade:%f\n", densidade2);}
        break;
        default:
            printf("Opção Inválida.");
        break;}
    
        comparacao2 = soma2opcao1 + soma2opcao2;
        printf("Resultado das comparações:%f\n", comparacao2);
        resultfinal = comparacao1 > comparacao2;
        if (comparacao1 == comparacao2){
            printf("O jogo resultou em um empate.");
        } else {
            resultfinal = 0 ? printf("A carta 1 venceu o jogo!") : printf("A carta 2 venceu o jogo!");}
    return 0;
    }