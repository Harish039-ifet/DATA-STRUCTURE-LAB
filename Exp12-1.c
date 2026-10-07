/*
 * Exp 12: Student marks details using structures
 */

#include <stdio.h>
#define SIZE 50

struct Student {
    char name[30];
    int rollno;
    int sub[3];
};

void main() {
    int i, j, max, count, total, n, a[SIZE], ni;
    struct Student st[SIZE];

    printf("Enter how many students: ");
    scanf("%d", &n);

    /* for loop to read the names and roll numbers */
    for (i = 0; i < n; i++) {
        printf("\nEnter name and roll number for student %d : ", i);
        scanf("%s", st[i].name);
        scanf("%d", &st[i].rollno);
    }

    /* for loop to read ith student's jth subject */
    for (i = 0; i < n; i++) {
        for (j = 0; j <= 2; j++) {
            printf("\nEnter marks of student %d for subject %d : ", i, j);
            scanf("%d", &st[i].sub[j]);
        }
    }

    /* (i) for loop to calculate total marks obtained by each student */
    for (i = 0; i < n; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total = total + st[i].sub[j];
        }
        printf("\nTotal marks obtained by student %s are %dn", st[i].name, total);
        a[i] = total;
    }

    /* (ii) for loop to list out the student who secured the highest marks in each subject */
    for (j = 0; j < 3; j++) {
        max = 0;
        for (i = 0; i < n; i++) {
            if (max < st[i].sub[j]) {
                max = st[i].sub[j];
                ni = i;
            }
        }
        printf("\nStudent %s got maximum marks = %d in Subject : %d", st[ni].name, max, j);
    }

    /* student who secured the highest total marks */
    max = 0;
    for (i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
            ni = i;
        }
    }
    printf("\n%s obtained the total highest marks.", st[ni].name);
    getchar();
    getchar();
}

/*
OUTPUT:
Enter how many students: 2
Enter name and roll number for student 0 : ARUN
4211101
Enter name and roll number for student 1 : KUMAR
4211102
Enter marks of student 0 for subject 0 : 78
Enter marks of student 0 for subject 1 : 98
Enter marks of student 0 for subject 2 : 67
Enter marks of student 1 for subject 0 : 78
Enter marks of student 1 for subject 1 : 55
Enter marks of student 1 for subject 2 : 57

Total marks obtained by student ARUN are 243n
Total marks obtained by student KUMAR are 190n
Student ARUN got maximum marks = 78 in Subject : 0
Student ARUN got maximum marks = 98 in Subject : 1
Student ARUN got maximum marks = 67 in Subject : 2
ARUN obtained the total highest marks.
*/
