#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100000


int is_non_decreasing(const char *num) {

    int len = strlen(num);
    for (int i = 1; i < len; i++) {
        if (num[i] < num[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int compare(const void *a, const void *b) {
    int *count_a = (int *)a;
    int *count_b = (int *)b;
    if (*count_b != *count_a) {
        return *count_b - *count_a;
    }
    return 0;
}

int main() {
	printf("Nhap so nguyen duong khong qua 9 chu so. Khong qua 100000 so:\n");
    char str[MAX_SIZE];
    char *num;
    int freq[MAX_SIZE] = {0};
    char numbers[MAX_SIZE][10];
    int total_numbers = 0;

    while (fgets(str, MAX_SIZE, stdin)) {
        num = strtok(str, " \n");
        while (num != NULL) {
            if (is_non_decreasing(num)) {
                strcpy(numbers[total_numbers], num);
                freq[total_numbers]++;
                total_numbers++;
            }
            num = strtok(NULL, " \n");
        }
    }

    qsort(freq, total_numbers, sizeof(int), compare);

    for (int i = 0; i < total_numbers; i++) {
        printf("Ket qua: %s %d\n", numbers[i], freq[i]);
    }

    return 0;
}
