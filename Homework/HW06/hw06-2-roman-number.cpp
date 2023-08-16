/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/
#include <stdio.h>

// สัญลักษณ์และค่าที่เกี่ยวข้องกับตัวเลขโรมัน
char *roman_numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int arabic_values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

void convertToRoman(int number) {
    if (number <= 0) {
        printf("Input must be a positive integer.\n");
        return;
    }

    printf("%d = ", number);

    for (int i = 0; number > 0; i++) {
        while (number >= arabic_values[i]) {
            printf("%s", roman_numerals[i]);
            number -= arabic_values[i];
        }
    }

    printf("\n");
}

int main() {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    convertToRoman(input);
    return 0;
}
