#include <stdio.h>

void abrirNotepad(); 
void abrirPaint();
void abrirCalculadora();

int main() {
    int opcao;
    int continuar = 1; // Controla se o programa continua rodando

    while (continuar) {
        printf("\n--- MENU DE APPS ---\n");
        printf("1 - Notepad\n");
        printf("2 - Paint\n");
        printf("3 - Calculadora\n");
        printf("0 - Sair\n");
        printf("> ");
        
        if (scanf("%d", &opcao) != 1) {
            while(getchar() != '\n'); 
            printf("Erro: Digite apenas números.\n");
            continue;
        }

        switch (opcao) {
            case 1:
                abrirNotepad();
                break;
            case 2:
                abrirPaint();
                break;
            case 3:
                abrirCalculadora();
                break;
            case 0:
                printf("Saindo do programa...\n");
                continuar = 0; // Quebra o laço while
                break;
            default:
                printf("Opcao Invalida!\n");
                break;
        }
    }

    return 0;
}
