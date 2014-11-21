#include <iostream>

int toMakeChoice(){
    printf("(1) Добавить элемент в список\n");
    printf("(2) Вывести весь список\n");
    printf("(5) Выход\n");

    int choise;

    printf("Введите значение: ");
    std::cin >> choise;
    return choise;
}

