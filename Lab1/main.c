#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define Name "Катерина"
#define LastName "Фольваркова"
#define GroupName "РЕ-22"
#define Faculty "РТФ"
#define University "КПІ ім.Ігоря Сікорського"
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleOutputCP(1251);
 int semestr;
 float admissionScore;
 int grade1;
 int grade2;
 int grade3;
 int grade4;
 int grade5;
 int grade6;
 int grade7;
 int grade8;
 double averageGrade;
 unsigned int age;
printf("%s %s введіть наступні дані .\n", Name, LastName);
 printf("Введіть семестр:");
 scanf("%u", &semestr);
 printf("Введіть свій вступний бал: ");
 scanf("%f", &admissionScore);
 printf("Введіть результат з математики: ");
 scanf("%d", &grade1);
 printf("Введіть результат з фізики:");
 scanf("%d", &grade2);
 printf("Введіть результат з інформатики:");
 scanf("%d", &grade3);
  printf("Введіть результат з української мови: ");
 scanf("%d", &grade4);
  printf("Введіть результат з англійської мови: ");
 scanf("%d", &grade5);
  printf("Введіть результат з історії України: ");
 scanf("%d", &grade6);
 printf("Введіть свій вік: ");
 scanf("%u", &age);
 averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5 + grade6) / 6;
 system("cls");
 printf("\f***************", "*");
 printf("\n===============", "=");
 system("cls");
 printf("%s", University);
 printf("\n%s", Faculty);
 printf("\n%s", GroupName);
 printf("\n---------------------------");
 printf("\nстудент: %s %s", Name, LastName);
 printf("\nвік: %u", age);
 printf("\nсеместр: %u", semestr);
 printf("\n---------------------------");
 printf("\nвступний бал: %.1f", admissionScore);
 printf("\nсередній бал = %.2lf", averageGrade);
 printf("\n");
 return 0;
}
