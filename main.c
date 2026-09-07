#include <stdio.h>
#include <windows.h>

void test() {
    int age = 19;
    double height = 1.78;
    char grade = 'A';

    printf("Возраст %d лет\n", age);
    printf("Рост %f см\n", height);
    printf("Буква %c (%d код)\n", grade);

    printf("sizeof(int) = %zu байт\n", sizeof(int));
    printf("sizeof(int) = %zu байт\n", sizeof(double));
    printf("sizeof(int) = %zu байт\n", sizeof(char));
}

int main() {
    SetConsoleOutputCP(65001);
    printf("Hello, world!\n");
    test();

    return 0;
}

/*
gcc main.c -o main                -o имя_файла как назвать программу

./main   - запуск программы
echo $?  - возвращает код ошибки
0 - все прошло успешно

stdio - это библитоека вывода информации

age   - обращаемся по имени переменной
&age  - обращаемся к адресу переменной
*age  - указатель на переменную
**age - операция разыменоаввания переменной

*/