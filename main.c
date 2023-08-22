#include <stdio.h>
#include <stdbool.h>
int main()
{

    // Definindo qual funcão deve ser executada
    // Talvez não seja a melhor solução, mas funciona!

    bool soma = false;
    bool subtracao = false;
    bool multiplicacao = false;
    bool divisao = false;

    // Mensagens de boas vindas

    printf("Bem-vindo(a) à calculadora!\n");
    printf("A seguir, escolha o número da operação que você deseja realizar:\n");
    printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n\nDigite o número da sua escolha: ");

    // Identifica a escolha do usuário

    int escolha;
    scanf("%d", &escolha);

    // Numeros

    float primeiroNum;
    float segundoNum;

    // Adição
    if (escolha == 1)
    {
        while (divisao = true)
        {
            printf("---------------------------------\n|            ADIÇÃO           |\n---------------------------------\n");

            printf("Insira o primeiro dígito: ");
            if (!scanf("%f", &primeiroNum) == 1)
            {
                printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
                break;
            }

            printf("Insira o segundo dígito: ");
            if (!scanf("%f", &segundoNum) == 1)
            {
                printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
                break;
            }

            float resultado = primeiroNum + segundoNum;

            printf("Resultado: %.2f", resultado);
            break;
        }
    }

    // Subtração
    else if (escolha == 2)
    {
        while (subtracao = true)
        {
            printf("---------------------------------\n|            SUBTRAÇÃO           |\n---------------------------------\n");

            printf("Insira o primeiro dígito: ");
            if (!scanf("%f", &primeiroNum) == 1)
            {
                printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
                break;
            }

            printf("Insira o segundo dígito: ");
            if (!scanf("%f", &segundoNum) == 1)
            {
                printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
                break;
            }

            float resultado = primeiroNum - segundoNum;

            printf("Resultado: %.2f", resultado);
            break;
        }
    }

    // Multiplicação
    else if (escolha == 3)
    {
        while (divisao = true)
        {
            printf("---------------------------------\n|         MULTIPLICAÇÃO        |\n---------------------------------\n");

            printf("Insira o primeiro dígito: ");
            if (!scanf("%f", &primeiroNum) == 1)
            {
                printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
                break;
            }

            printf("Insira o segundo dígito: ");
            if (!scanf("%f", &segundoNum) == 1)
            {
                printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
                break;
            }

            float resultado = primeiroNum * segundoNum;

            printf("Resultado: %.2f", resultado);
            break;
        }
    }

    // Divisão
    else if (escolha == 4)
    {
        while (divisao = true)
        {
            printf("---------------------------------\n|            DIVISÃO           |\n---------------------------------\n");

            printf("Insira o primeiro dígito: ");
            if (!scanf("%f", &primeiroNum) == 1)
            {
                printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
                break;
            }

            
            printf("Insira o segundo dígito: ");
            if (!scanf("%f", &segundoNum) == 1)
            {
                printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
                break;
            }

            float resultado = primeiroNum / segundoNum;

            printf("Resultado: %.2f", resultado);
            break;
        }
    }
}