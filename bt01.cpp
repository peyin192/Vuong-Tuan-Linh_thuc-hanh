#include <stdio.h>

#define MAX 30000

void mostfrq(int n, int arr[]) {
    int count[MAX] = {0};
    int maxFr = 0;

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > maxFr) {
            maxFr = count[arr[i]];
        }
    }

    for (int i = 0; i < n; i++) {
        if (count[arr[i]] == maxFr) {
            printf("%d ", arr[i]);
            count[arr[i]] = 0; 
        }
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        mostfrq(n, arr);
    }

    return 0;
}
