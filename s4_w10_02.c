#include <stdio.h>

int main() {
    float scores[3][3]; // 3 นักเรียน, 3 วิชา
    float sum_subjects[3] = {0}; // รวมคะแนนแต่ละวิชา
    const char *subjects[] = {"Math", "Physics", "Chemistry"};

    // รับคะแนนจากผู้ใช้
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%s: ", subjects[j]);
            scanf("%f", &scores[i][j]);
            sum_subjects[j] += scores[i][j];
        }
    }

    // แสดงตารางคะแนน
    printf("\nScore Table:\n");
    printf("Student    Math   Physics  Chemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("   %d      ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%6.2f  ", scores[i][j]);
        }
        printf("\n");
    }

    // คำนวณและแสดงค่าเฉลี่ยของแต่ละวิชา
    printf("\nAverage per subject:\n");
    for (int j = 0; j < 3; j++) {
        printf("%s: %.2f\n", subjects[j], sum_subjects[j] / 3);
    }

    return 0;
}