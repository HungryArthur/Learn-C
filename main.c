#include <stdio.h>
#include <windows.h>

void info() {
    int age = 19;
    double height = 1.78;
    char grade = 'A';

    printf("Возраст %d лет\n", age);
    printf("Рост %f см\n", height);
    printf("Буква %c (%d код)\n", grade, grade);

    printf("sizeof(int) = %zu байт\n", sizeof(int));
    printf("sizeof(double) = %zu байт\n", sizeof(double));
    printf("sizeof(char) = %zu байт\n", sizeof(char));
}

void test(void) {
    int number = 0;

    printf("Введите число: ");
    if (scanf("%d", &number) != 1) {
        printf("n/a\n");
        return;
    }
    printf("Вы ввели: %d\n", number);
}


int main() {
    // SetConsoleOutputCP(65001);
    printf("Hello, world!\n");
    info();
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

Для локальных переменных указатели мы не используем
Указатели используют для ссылки на переменную которая




*/