# Домашнее задание к работе 5

## Условие задачи
Написать программу, которая на основе введенного года рождения вычисляет полный возраст в годах и выводит результат в текстовой форме.

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. запросить у пользователя ввод даты рождения в формате: ГОД МЕСЯЦ ДЕНЬ
 считать введенные значения в переменные:
 - `birth_year - год рождения
 - `birth_month - месяц рождения
 - `birth_day - день рождения
3. Установка текущей даты
 Зафиксировать текущую дату как:
 - `current_year = 2025
 - `current_month = 10
 - `current_day = 16
4. Предварительный расчет разницы
 - Вычислить первоначальную разницу:
 - `age_years = current_year - birth_year
 -`age_months = current_month - birth_month
 -`age_days = current_day - birth_day
5. Корректировка по дням
 - ЕСЛИ `age_days < 0 ТО:
 - меньшить `age_months на 1
 - Прибавить к `age_days 30 дней (упрощенный расчет)
КОНЕЦ ЕСЛИ
6. Корректировка по месяцам
 - ЕСЛИ `age_months < 0 ТО:
 - Уменьшить `age_years на 1
 - Прибавить к `age_months 12 месяцев
КОНЕЦ ЕСЛИ
7: 
 - Вывод результата
 - Отобразить полный возраст в формате:
 - "Полный возраст: X лет, Y месяцев, Z дней"
 - где `X = age_years, Y = age_months, Z = age_days
8.**Конец**


### Блок-схема
![Блок-схема алгоритма](
https://drive.google.com/file/d/1PcsfYL0YjxrbVIZht2YCRSO_ITmnB3j0/view?usp=drive_link


## 2. Реализация программы

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Rus");

    int year, month, day;
    int current_year = 2025, current_month = 10, current_day = 16;

    printf("Введите дату рождения (год месяц день): ");
    scanf("%d %d %d", &year, &month, &day);

 
    int age_years = current_year - year;
    int age_months = current_month - month;
    int age_days = current_day - day;


    if (age_days < 0) {
        age_months--;

        age_days += 30;
    }

    if (age_months < 0) {
        age_years--;
        age_months += 12;
    }
    printf("Полный возраст: %d лет, %d месяцев, %d дней\n", age_years, age_months, age_days);

    return 0;
}


## 3. Результаты работы программы 
Введите дату рождения (год месяц день): 2004 12 29
Полный возраст: 20 лет, 9 месяцев, 17 дней

D:\проекты вижуал\prakt6\prakt6.3.c\x64\Debug\dz5.exe (процесс 9728) завершил работу с кодом 0 (0x0).
Нажмите любую клавишу, чтобы закрыть это окно: