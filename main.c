/*Задание 4. Поменять в целом положительном числе (типа int) значение третьего 
бита на введенное пользователем число (изначальное число также вводится с клавиатуры).*/

#include <stdio.h>
#include <stdio.h>

void printfInt(int n){
    for (int i = 32 - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");
}

int main(){
    int number = 0; 
    printf("Введите целое положительное число: ");   
    scanf("%d", &number);   
    getchar(); 

    int threebits = 0;
    printf("Введите третий бит (0 или 1): ");   scanf("%d", &threebits);

    printf("\nВведенное число: %d\n", number);
    printf("Двоичное представление числа\n:  ");     
    printfInt(number);

    int maska = 0xFFFFFFFB; // 1...1111 1011
    if (threebits)
        number = (number | (~maska)); //~инвертирует маску
    else
        number = number & maska;

    printf("\nИзмененное число: %d\n", number);
    printf("Двоичное представление измененного числа: \n");    
    printfInt(number);
}