#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[20];
    float midterm1;
    float midterm2;
    float final_exam;
    float final_grade;
}   Student;

int main(void) {
    printf("Let's grade!\n");
    Student student1, student2, student3;
    strcpy(student1.name, "Alvin");
    strcpy(student2.name, "Bella");
    strcpy(student3.name, "Charlie");

    student1.midterm1 = 86;
    student2.midterm1 = 78;
    student3.midterm1 = 70;

    student1.midterm2 = 90;
    student2.midterm2 = 84;
    student3.midterm2 = 77;

    student1.final_exam = 98;
    student2.final_exam = 90;
    student3.final_exam = 92;

    student1.final_grade = (student1.midterm1 + student1.midterm2 + student1.final_exam) / 3;
    student2.final_grade = (student2.midterm1 + student2.midterm2 + student2.final_exam) / 3;
    student3.final_grade = (student3.midterm1 + student3.midterm2 + student3.final_exam) / 3;

    printf("%s's final grade is %g\n", student1.name, student1.final_grade);
    printf("%s's final grade is %g\n", student2.name, student2.final_grade);
    printf("%s's final grade is %g\n", student3.name, student3.final_grade);

    return 0;
}