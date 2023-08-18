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
    bool introducao = true;

    // Mensagens de boas vindas

    printf("Bem-vindo(a) à calculadora!\n");
    printf("A seguir, escolha o número da operação que você deseja realizar:\n");
    printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n\nDigite o número da sua escolha: ");

    // Identifica a escolha do usuário

    int escolha;
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        soma = true;
        introducao = false;
        break;
    case 2:
        subtracao = true;
        introducao = false;
        break;
    case 3:
        multiplicacao = true;
        introducao = false;
        break;
    case 4:
        divisao = true;
        introducao = false;
        break;
    default:
        printf("ERRO: Escolha inválida!\n\nReinicie o processo.");
        break;
    }

    // Inicia o processo de divisão

    while (divisao = true)
    {
        printf("---------------------------------\n|            DIVISÃO           |\n---------------------------------\n");

        float primeiroNum;
        printf("Insira o primeiro dígito: ");
        if (!scanf("%f", &primeiroNum) == 1)
        {
            printf("ERRO: Você deve inserir um número.\n\nReinicie o processo.");
            break;
        }

        float segundoNum;
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