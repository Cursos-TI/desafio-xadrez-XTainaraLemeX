#include <stdio.h>

void moverTorre(int casas, int movimento) 
{
    if (casas == 0) return;

    switch (movimento)
    {
    case 1:
        printf("Cima\n");
    break;

    case 2:
        printf("Baixo\n");
    break;

    case 3:
        printf("Direita\n");
    break;

    case 4:
        printf("Esquerda\n");
    break;

    case 5:
        printf("Voltando...\n\n");
    break;
    
    default:
        printf("Opção inválida!\n\n");
    break;
    }
    
    moverTorre(casas - 1, movimento);
}

void moverBispo(int casas, int movimento)
{
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) 
    {
        if (movimento == 1 || movimento == 2)
            printf("Cima\n");
        else
            printf("Baixo\n");

        for (int j = 0; j < 1; j++) 
        {
            if (movimento == 1 || movimento == 3)
                printf("Direita\n");
            else
                printf("Esquerda\n");
        }
    }

    moverBispo(casas - 1, movimento);
}

void moverRainha(int casas, int movimento)
{
    if (casas == 0) return;

    switch (movimento)
    {
    case 1:
        printf("Cima\n");
    break;

    case 2:
        printf("Baixo\n");
    break;

    case 3:
        printf("Lado Esquerdo\n");
    break;

    case 4:
        printf("Lado Direito\n");
    break;

    case 5:
        printf("Cima\n");
        printf("Esquerda\n");
    break;

    case 6: 
        printf("Baixo\n");
        printf("Esquerda\n");
    break;

    case 7:
        printf("Cima\n");
        printf("Direita\n\n");
    break;

    case 8:
        printf("Baixo\n");
        printf("Direita\n");
    break;

    case 9:
        printf("Voltando...\n\n");    
    break;

    default:
        printf("Opção inválida!\n\n");
    break;
    }

    moverRainha(casas - 1, movimento);
}




int main ()
{
    int movimento, menuPrincipal = 1, menuMovimento = 1, movimentoCompleto = 1 ,peca, casas;

     
    while(menuPrincipal)
    {

        printf("*JOGO DE XADREZ*\n");
        printf("1. TORRE\n");
        printf("2. BISPO\n");
        printf("3. RAINHA\n");
        printf("4. CAVALO\n");
        printf("5. Sair do Programa\n");
        printf("ESCOLHA UMA PEÇA: ");
        scanf("%d", &peca);
        printf("\n");

    switch (peca)
    {
    case 1:

        printf("Você escolheu Torre. Qual movimento você quer?\n");
        printf("1. Para Cima.\n");
        printf("2. Para Baixo.\n");
        printf("3. Para o Lado Esquerdo.\n");
        printf("4. Para o Lado Direito.\n");
        printf("5. Voltar.\n");
        printf("ESCOLHA: ");
        scanf("%d", &movimento);
        printf("\n");

        if (movimento == 5) {
        printf("Voltando ao menu principal...\n\n");
        break;
        }

        printf("Quantas casas você quer andar? ");
        scanf("%d", &casas);
        printf("\n");

        if(casas <= 0)
        {
            printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n\n");
        } else {
            moverTorre(casas, movimento);
            printf("\n");
        }

    break;

    case 2:

        printf("Você escolheu Bispo. Qual movimento você quer?\n");
        printf("1. Cima para Direita\n");
        printf("2. Cima para Esquerda\n");
        printf("3. Baixo para Direita\n");
        printf("4. Baixo para Esquerda\n");
        printf("5. Voltar.\n");
        printf("ESCOLHA: ");
        scanf("%d", &movimento);
        printf("\n");

        if (movimento == 5) {
        printf("Voltando ao menu principal...\n\n");
        break;
        }

       do 
       {
            printf("Quantas casas você quer andar? ");
            scanf("%d", &casas);
            printf("\n");

            if (casas <= 0) 
            {
                printf("ERRO! Digite um número positivo.\n");
            }

        } while (casas <= 0);

        moverBispo(casas, movimento);
        return 0;
    break; 

    case 3:

        printf("Você escolheu RAINHA. Qual movimento você quer?!\n");
        printf("1. Para Cima.\n");
        printf("2. Para Baixo.\n");
        printf("3. Para o Lado Esquerdo.\n");
        printf("4. Para o Lado Direito.\n");
        printf("5. Diagonal Cima para Esquerda.\n");
        printf("6. Diagonal Baixo para Esquerda.\n");
        printf("7. Diagonal Cima para Direita.\n");
        printf("8. Diagonal Baixo para Direita.\n");
        printf("9. Voltar.\n"); 
        printf("ESCOLHA: ");
        scanf("%d", &movimento);
        printf("\n");

        if (movimento == 9) {
        printf("Voltando ao menu principal...\n\n");
        break;
        }
        
        printf("Quantas casas você quer andar? ");
        scanf("%d", &casas);
        printf("\n");

        if(casas <= 0)
        {
            printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n\n");
        } else {
            moverRainha(casas, movimento);
            printf("\n");
        }
        return 0;
    break;

    case 4:

        menuMovimento = 1;

        while (menuMovimento) 
        {
            printf("Você escolheu CAVALO. Qual movimento você quer?!\n");
            printf("1. Dois para cima e um para esquerda.\n");
            printf("2. Dois para cima e um para direita.\n");
            printf("3. Dois para baixo e um para esquerda.\n");
            printf("4. Dois para baixo e um para direita.\n");
            printf("5. Dois para o lado esquerdo e um para cima.\n");
            printf("6. Dois para o lado esquerdo e um para baixo.\n");
            printf("7. Dois para o lado direito e um para cima.\n");
            printf("8. Dois para o lado direito e um para baixo.\n");
            printf("9. Voltar.\n");
            printf("ESCOLHA: ");
            scanf("%d", &movimento);
            printf("\n");

            switch (movimento)
            {
            case 1:

                    printf("Você escolheu Dois para cima e um para esquerda.\n\n");
                    
                    while (movimentoCompleto--)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("CIMA\n");
                        }
                        printf("ESQUERDA\n");
                        
                    }

                return 0;
            
            break;

            case 2:
            
                    printf("Você escolheu Dois para cima e um para direita.\n\n");
                    
                    while (movimentoCompleto--)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("CIMA\n");
                        }
                        printf("DIREITA\n");
                        
                    }
 
                return 0;
                
            break;

            case 3:
                
                    printf("Você escolheu Dois para baixo e um para esquerda.\n\n");
                    
                    while (movimentoCompleto--)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("BAIXO\n");
                        }
                        printf("ESQUERDA\n");
                        
                    }
             
                return 0;

            break;

            case 4:
                
                    printf("Você escolheu Dois para baixo e um para direita.\n\n");
                    
                    while (movimentoCompleto--)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("BAIXO\n");
                        }
                        printf("DIREITA\n");
                        
                    }
    
                return 0;
            
            break;
            
            case 5:

                    printf("Você escolheu Dois para o lado esquerdo e um para cima.\n\n");
                    
                    while (movimentoCompleto--)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("ESQUERDA\n");
                        }
                        printf("CIMA\n");
                        
                    }

                return 0;
            
            break;

            case 6:
            
                    printf("Você escolheu Dois para o lado esquerdo e um para baixo.\n\n");
                    
                    while (movimentoCompleto--)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("ESQUERDA\n");
                        }
                        printf("BAIXO\n");
                        
                    }
           
                return 0;
                
            break;

            case 7:
                
                    printf("Você escolheu Dois para o lado direito e um para cima.\n\n");

                    while (movimentoCompleto--)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("DIREITA\n");
                        }
                        printf("CIMA\n");
                        
                    }
                    
                return 0;

            break;

            case 8:
                
                    printf("Você escolheu Dois para o lado direito e um para baixo.\n\n");

                    while (movimentoCompleto--)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("DIREITA\n");
                        }
                        printf("BAIXO\n");
                        
                    }
                    
                return 0;

            break;

            case 9:
                printf("Voltando...\n");
                menuMovimento = 0;
            break;

            default:
                printf("Opção inválida!\n\n");
            break;
            }

        }
        
    break;

    case 5:
        printf("Saindo do programa...\n");
        menuPrincipal = 0;
    break;

    default:
        printf("Opção inválida!\n\n");
    break;

    }

    }

    return 0;
}