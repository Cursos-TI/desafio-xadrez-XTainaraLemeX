#include <stdio.h>

int main (){
    int peca, movimento, andarCasas, menuPrincipal = 1, menuMovimento = 1, movimentoCompleto = 1;

    while (menuPrincipal)
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
        
        menuMovimento = 1;

        while (menuMovimento) 
        {
            printf("Você escolheu Torre. Qual movimento você quer?\n");
            printf("1. Para Cima.\n");
            printf("2. Para Baixo.\n");
            printf("3. Para o Lado Esquerdo.\n");
            printf("4. Para o Lado Direito.\n");
            printf("5. Voltar.\n");
            printf("ESCOLHA: ");
            scanf("%d", &movimento);
            printf("\n");

            switch (movimento)
            {
            case 1:

                do
                {
                    printf("Você escolheu para Cima.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0){
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("CIMA\n");
                    
                }
                printf("\n");
                return 0;
            
            break;

            case 2:
            
                do
                {
                    printf("Você escolheu para o Baixo.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("BAIXO\n");
                    
                }
                printf("\n");
                return 0;
                
            break;

            case 3:
                
                do
                {
                    printf("Você escolheu para o Lado Esquerdo.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("Lado esquerdo\n");
                    
                }
                printf("\n");
                return 0;

            break;

            case 4:
                
                do
                {
                    printf("Você escolheu para o Lado Direito.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("Lado Direito\n");
                    
                }
                printf("\n");
                return 0;

            break;

            case 5:
                printf("Voltando...\n");
                menuMovimento = 0;
            break;

            default:
                printf("Opção inválida!\n\n");
            break;
            }

        }

    break;

    case 2: 

        menuMovimento = 1;

        while (menuMovimento) 
        {
            printf("Você escolheu Bispo. Qual movimento você quer?!\n");
            printf("1. Diagonal Esquerda para Cima.\n");
            printf("2. Diagonal Esquerda para Baixo.\n");
            printf("3. Diagonal Direita para Cima.\n");
            printf("4. Diagonal Direita para Baixo.\n");
            printf("5. Voltar.\n");
            printf("ESCOLHA: ");
            scanf("%d", &movimento);
            printf("\n");

            switch (movimento)
            {
            case 1:

                do
                {
                    printf("Você escolheu Diagonal Esquerda para Cima.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("CIMA\n");
                    printf("ESQUERDA\n\n");
                    
                }
                printf("\n");
                return 0;
            
            break;

            case 2:
            
                do
                {
                    printf("Você escolheu Diagonal Esquerda para Baixo.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("BAIXO\n");
                    printf("ESQUERDA\n\n");
                    
                }
                printf("\n");
                return 0;
                
            break;

            case 3:
                
                do
                {
                    printf("Você escolheu Diagonal Direita para Cima.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("CIMA\n");
                    printf("DIREITA\n\n");

                }
                printf("\n");
                return 0;

            break;

            case 4:
                
                do
                {
                    printf("Você escolheu Diagonal Direita para Baixo.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("BAIXO\n");
                    printf("DIREITA\n\n");
                    
                }
                printf("\n");
                return 0;

            break;

            case 5:
                printf("Voltando...\n");
                menuMovimento = 0;
            break;

            default:
                printf("Opção inválida!\n\n");
            break;
            }

        }
        
        
    break;

    case 3:

        menuMovimento = 1;

        while (menuMovimento) 
        {
            printf("Você escolheu RAINHA. Qual movimento você quer?!\n");
            printf("1. Para Cima.\n");
            printf("2. Para Baixo.\n");
            printf("3. Para o Lado Esquerdo.\n");
            printf("4. Para o Lado Direito.\n");
            printf("5. Diagonal Esquerda para Cima.\n");
            printf("6. Diagonal Esquerda para Baixo.\n");
            printf("7. Diagonal Direita para Cima.\n");
            printf("8. Diagonal Direita para Baixo.\n");
            printf("9. Voltar.\n");
            printf("ESCOLHA: ");
            scanf("%d", &movimento);
            printf("\n");

            switch (movimento)
            {
            case 1:

                do
                {
                    printf("Você escolheu para Cima.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("CIMA\n");
                    
                }
                printf("\n");
                return 0;
            
            break;

            case 2:
            
                do
                {
                    printf("Você escolheu para o Baixo.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("BAIXO\n");
                    
                }
                printf("\n");
                return 0;
                
            break;

            case 3:
                
                do
                {
                    printf("Você escolheu para o Lado Esquerdo.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("Lado esquerdo\n");
                    
                }
                printf("\n");
                return 0;

            break;

            case 4:
                
                do
                {
                    printf("Você escolheu para o Lado Direito.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("Lado Direito\n");
                    
                }
            
            case 5:

                do
                {
                    printf("Você escolheu Diagonal Esquerda para Cima.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("CIMA\n");
                    printf("ESQUERDA\n\n");
                    
                }
                printf("\n");
                return 0;
            
            break;

            case 6:
            
                do
                {
                    printf("Você escolheu Diagonal Esquerda para Baixo.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("BAIXO\n");
                    printf("ESQUERDA\n\n");
                    
                }
                printf("\n");
                return 0;
                
            break;

            case 7:
                
                do
                {
                    printf("Você escolheu Diagonal Direita para Cima.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0);
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("CIMA\n");
                    printf("DIREITA\n\n");

                }
                printf("\n");
                return 0;

            break;

            case 8:
                
                do
                {
                    printf("Você escolheu Diagonal Direita para Baixo.\n");
                    printf("Quantas casas você quer andar?\n");
                    printf("ESCOLHA: ");
                    scanf("%d", &andarCasas);
                    printf("\n");

                    if(andarCasas <= 0)
                    {
                        printf("ERRO! Sua escolha tem que ser um número positivo inteiro.\n");
                    }


                } while (andarCasas <= 0); 
                

                for (int andar = 0; andar < andarCasas; andar++)
                {
                    printf("BAIXO\n");
                    printf("DIREITA\n\n");
                    
                }

                printf("\n");
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
        printf("Saindo do Programa...\n");
        menuPrincipal = 0;
    break;

    default:
        printf("Opção invalida!\n\n");
    break;
    }  
    }
    return 0;
}