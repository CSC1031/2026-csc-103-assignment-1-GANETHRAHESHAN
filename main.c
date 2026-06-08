#include <stdio.h>
#include <stdlib.h>

//AS2025066

int main()
{
    float m1, m2, m3;
    //m1 = Mathematics
    //m2 = Science
    //m3 = English
    float total, average;
    char grade;
    int pass=1 ,fail=0;



    printf("This is simple calculator for calculate Student's Total marks, Average, Grade and Pass//Fail status\n");
    printf("Enter your marks for Mathematics : ");
    scanf("%f", &m1);

    printf("Enter your marks for Science : ");
    scanf("%f", &m2);

    printf("Enter your marks for English : ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;


    printf("\nYour Total Marks Is %.2f\n", total);
    printf("\nYour Average Mark Is %.2f\n", average);
    printf("\nYour Grade is ");

    if (average >= 80.0 && average <= 100.0) {
        printf("A\n");
    } else if (average >= 70.0) {
        printf("B\n");
    } else if (average >= 60.0) {
        printf("C\n");
    } else if (average >= 50.0) {
        printf("D\n");
    } else {
        printf("F\n");
    }
    printf("\nYou are ");
    if (m1 < 40 || m2 < 40 || m3 < 40) {
        printf("Fail");
        }else {
        printf("Pass");
        }
    return 0;
}
