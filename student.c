#include "student.h"
#include <stdio.h>

float acceptDetails (Students *student1, float *unit) {
    float totalScore = 0.0;
    float totalUnit = 0.0;
    float totalPoint = 0.0;
    float GPA =0.0;
    float calc =0.0;
    int i, Unit, grade, Point, Score;
    
    for (i = 0; i<10; ++i) {
    printf("Enter Course code %d: ", i+1);
    scanf("%s", student1[i].courseCode);
    // printf("Course Code: %s\n", student1[i].courseCode);

    printf("Enter Course Title %d: ", i+1);
    scanf("%s", student1[i].courseTitle);
    // printf("Course Title: %s\n", student1[i].courseTitle);

    printf("Enter Course Unit %d: ", i+1);
    scanf("%d", &student1[i].Unit);
    Unit = student1[i].Unit;
    // printf("Course Unit: %d\n", student1[i].Unit);

    printf("Enter score %d: ", i+1);
    scanf("%d", &student1[i].Score);
    // printf("Score: %d\n", student1[i].Score);


    //  Calculate GPA value  
    if(student1[i].Score>=70 && student1[i].Score <=100)
    {
        grade = 5;
        totalPoint = totalPoint + 5 * Unit;
        totalUnit = totalUnit + Unit;
    }

    else if(student1[i].Score >=60 && student1[i].Score <=69)
    {
        grade = 4;
        totalPoint = totalPoint + 4 * Unit;
        totalUnit = totalUnit + Unit;
    }

    else if(student1[i].Score >=50 && student1[i].Score <=59)
    {
        grade = 3;
        totalPoint = totalPoint + 3 * Unit;
        totalUnit = totalUnit + Unit;
    }

    else if(student1[i].Score >=45 && student1[i].Score <=49)
    {
        grade = 2;
        totalPoint = totalPoint + 2 * Unit;
        totalUnit = totalUnit + Unit;
    }

    else if(student1[i].Score >=40 && student1[i].Score <=44)
    {
        grade = 1;
        totalPoint = totalPoint + 1 * Unit;
        totalUnit = totalUnit + Unit;
    }

    else if(student1[i].Score >=0 && student1[i].Score <=39)
    {
        grade = 0;
        totalPoint = totalPoint + 0 * Unit;
        totalUnit = totalUnit + Unit;
    }

    /* for(i = 0; i < 2; i++)
    printf("Course Code %s\n: ", student1[i].courseCode);
    printf("Course Title %s\n: ", student1[i].courseTitle);
    printf("Course Unit %d\n: ", student1[i].Unit);
    printf("Score %d\n: ", student1[i].Score);
*/    

    }   
    *unit = totalUnit;
    return totalPoint;
}
  
