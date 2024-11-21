#include <stdio.h>

int main() {
    int N;
    
    printf("Nhap so luong phan tu N: ");
    scanf("%d", &N);
    
    int arr[N];   
    for (int i = 0; i < N; i++) {
    	printf("Nhap day so: ");
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < N - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
        
        for (int k = 0; k < N; k++) {
            printf("Ket qua: %d ", arr[k]);
        }
        printf("\n");
    }

    return 0;
}
