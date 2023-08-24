#include <stdio.h>
int main() {    

    int number1, number2, average;
    
    printf("Insira as duas notas: ");
    scanf("%d %d", &number1, &number2);

    // calculando a media
    average = number1 + number2 / 2;      
    
    printf("%d + %d = %d", number1, number2, average);
    return 0;
}   


