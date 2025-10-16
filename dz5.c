#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Rus");

    int year, month, day;
    int current_year = 2025, current_month = 10, current_day = 16;

    printf("¬ведите дату рождени€ (год мес€ц день): ");
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
    printf("ѕолный возраст: %d лет, %d мес€цев, %d дней\n", age_years, age_months, age_days);

    return 0;
}