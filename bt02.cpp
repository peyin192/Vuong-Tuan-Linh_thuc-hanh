#include <stdio.h>
#include <stdlib.h>

int ss(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    
    printf("hay nhap so: ");
    scanf("%d", &n);
    
    int A[n];
    int even[n], odd[n];
    int even_count = 0, odd_count = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0) {
            even[even_count++] = A[i];
        } 
		else {
            odd[odd_count++] = A[i];
        }
    }
    
    qsort(even, even_count, sizeof(int), ss);
    qsort(odd, odd_count, sizeof(int), ss);
    
    printf("ket qua sap xep:\n ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    
    printf("\n");
    
    return 0;
}

