#include <stdio.h>

int main() {
	//khai bao mang hai chieu
    int arr[100][100];
    int n = 0, m = 0, luaChon;
    int i, j;

    while (1) {
        // In menu
        printf("\n========== MENU ==========\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu lon nhat\n");
        printf("8. Thoat\n");
        printf("==========================\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1: {
                //giap kich thuoc va gia tri cua mang
                printf("Nhap so dong: ");
                scanf("%d", &n);
                printf("Nhap so cot: ");
                scanf("%d", &m);

                printf("Nhap gia tri cac phan tu cua ma tran:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        printf("arr[%d][%d] = ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            }

            case 2: {
                // in gia tri cac phan tu theo ma tran
                printf("Ma tran:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                // in cac gia tri le va tinh tong 
                int tong = 0;
                printf("Cac phan tu le: ");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            tong += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", tong);
                break;
            }

            case 4: {
               
                long long tich = 1;
                printf("Cac phan tu tren bien: ");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", arr[i][j]);
                            tich *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren bien: %lld\n", tich);
                break;
            }

            case 5: {
                // in cac phan tu tren duong cheo chinh
                printf("Cac phan tu tren duong cheo chinh: ");
                for (i = 0; i < n && i < m; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            }

            case 6: {
                // in cac phan tu tren duong cheo phu
                printf("Cac phan tu tren duong cheo phu: ");
                for (i = 0; i < n && i < m; i++) {
                    printf("%d ", arr[i][m - i - 1]);
                }
                printf("\n");
                break;
            }

            case 7: {
                // in dong cxo tong phan tu lon nhat
                int maxTong = -1, dongMax = -1;
                for (i = 0; i < n; i++) {
                    int tong = 0;
                    for (j = 0; j < m; j++) {
                        tong += arr[i][j];
                    }
                    if (tong > maxTong) {
                        maxTong = tong;
                        dongMax = i;
                    }
                }
                printf("Dong co tong lon nhat la dong %d: ", dongMax + 1);
                for (j = 0; j < m; j++) {
                    printf("%d ", arr[dongMax][j]);
                }
                printf("\n");
                break;
            }

            case 8:
                // Thoát chuong trình
                printf("Thoat chuong trinh. Tam biet!\n");
                return 0;

            default:
                printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    }

    return 0;
}

