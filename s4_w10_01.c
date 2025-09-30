#include <stdio.h>

int main() {
    int num_students;
    float score, sum = 0, average;

    // รับจำนวนของนักเรียน
    printf("Enter number of students: ");
    scanf("%d", &num_students);

    // รับคะแนนของนักเรียนแต่ละคน
    printf("Enter %d student scores (one per line):\n", num_students);
    for (int i = 0; i < num_students; i++) {
        printf("Score %d: ", i + 1);
        scanf("%f", &score);
        sum += score;
    }

    // คำนวณค่าเฉลี่ย
    average = sum / num_students;

    // แสดงผลลัพธ์
    printf("\nNumber of students = %d\n", num_students);
    printf("Average score = %.2f\n", average);

    return 0;
}