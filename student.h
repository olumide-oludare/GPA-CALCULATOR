#ifndef STUDENT_H
#define STUDENT_H
// #include <stdio.h>

typedef struct Students {
    char courseCode[10];
    char courseTitle[40];
    int Unit;
    int Score;
    float totalPoint;
    float totalUnit;
    
   

}Students;
float acceptDetails (Students *student1, float *unit);

#endif