#include <stdio.h>
#include <string.h>
#include "student.h"
#include "gpa.h"

int main() {
    Students student1[2];
    float totalUnit;
    float GPA;
    int i;
    printStudent();
    float totalPoint = acceptDetails(student1, &totalUnit);

    printf("Displaying Information:\n\n");
    for (i = 0; i <10; ++i)
    printf("Course Code: %s\tCourse Title: %s\tCourse Unit: %d\t Score: %d\n",
        student1[i].courseCode,student1[i].courseTitle,student1[i].Unit,student1[i].Score);

    {
    printf("TOTAL UNIT: %.2f\n", totalUnit);
    printf("TOTAL POINT: %.2f\n", totalPoint);
    GPA = totalPoint / totalUnit;
    printf("SEMESTER GPA: %.2f\n", GPA);
    }
    return 0;

}