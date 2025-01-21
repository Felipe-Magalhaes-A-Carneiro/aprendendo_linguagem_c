# include <stdio.h>

int main(void){
    //TIPOS DE VARIÁVEIS:

    //INT
    int numeroInt = 10;
    // Função de saída de dados 'printf':
    printf("Numero inteiro: %d \n", numeroInt);
    // '%d' é uma máscara/marcador que remete a um tipo de dado e, neste caso, um dado inteiro (%d), afim de especificar que tipo de dado a função de saída de dados 'printf' irá trazer, se for outro tipo de váriavel você utilizar %d, dará um erro!


    //FLOAT
    float numeroFloat = 10.00;
    printf("Numero float: %f \n", numeroFloat);
    //'%f' é a mascara/marcador usado para o tipo de dado float
    // Obs.: Neste caso a saída foi 'Numero float: 10.000000 ', não houve definição de quantas casas decimais devem haver na função de saída, siga o próximo passo para saber como fazer a definição.

    //Definido quantas casa decimais deve haver com '%.2f' (ou seja, 2 casas decimais):
    printf("Numero float: %.2f \n", numeroFloat);
    //SAÍDA: 'Numero float: 10.00'


    //CHARACTER
    char umCaractere = 'A';
    printf("A letra definida foi: %c \n", umCaractere);
    
    return 0;
}
