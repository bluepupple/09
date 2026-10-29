#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int average;
    int sum = 0;
    int grade[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter a student's score: ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    average = sum / SIZE;
    printf("Average score: %d\n", average);
    return 0;
}