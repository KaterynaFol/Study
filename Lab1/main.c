#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define Name "��������"
#define LastName "�����������"
#define GroupName "��-22"
#define Faculty "���"
#define University "�ϲ ��.����� ѳ���������"
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
printf("%s %s ������ ������� ��� .\n", Name, LastName);
 printf("������ �������:");
 scanf("%u", &semestr);
 printf("������ ��� �������� ���: ");
 scanf("%f", &admissionScore);
 printf("������ ��������� � ����������: ");
 scanf("%d", &grade1);
 printf("������ ��������� � ������:");
 scanf("%d", &grade2);
 printf("������ ��������� � �����������:");
 scanf("%d", &grade3);
  printf("������ ��������� � ��������� ����: ");
 scanf("%d", &grade4);
  printf("������ ��������� � ��������� ����: ");
 scanf("%d", &grade5);
  printf("������ ��������� � ����� ������: ");
 scanf("%d", &grade6);
 printf("������ ��� ��: ");
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
 printf("\n�������: %s %s", Name, LastName);
 printf("\n��: %u", age);
 printf("\n�������: %u", semestr);
 printf("\n---------------------------");
 printf("\n�������� ���: %.1f", admissionScore);
 printf("\n������� ��� = %.2lf", averageGrade);
 printf("\n");
 return 0;
}
