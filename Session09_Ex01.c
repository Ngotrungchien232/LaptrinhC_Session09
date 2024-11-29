#include <stdio.h>

int main() {
    int n;
    int i;

   
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    
    int arr[n];

   
    printf("Nhap gia tri cho mang:\n");
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    int index, vtm;

    printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &index);

    
    if (index >= 0 && index < n) {
        printf("Nhap gia tri moi cho phan tu tai vi tri %d: ", index);
        scanf("%d", &vtm);

      
        arr[index] = vtm;

     
        printf("Mang sau khi sua la:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Vi tri ban nhap khong hop le\n");
    }

    return 0;
}

