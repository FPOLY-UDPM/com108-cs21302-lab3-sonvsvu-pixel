/******************************************************************************
 * Họ và tên: [Nguyễn Trường Sơn]
 * MSSV:      [PS48636]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Bai 1 - Xep loai hoc luc\n");
        printf("2. Bai 2 - Giai phuong trinh bac 1\n");
        printf("3. Bai 3 - Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            // BÀI 1: HỌC LỰC
            float diem;
            printf("Nhap diem: ");
            scanf("%f", &diem);

            if (diem < 0 || diem > 10)
                printf("Diem khong hop le!\n");
            else if (diem >= 9)
                printf("Hoc luc: Xuat sac\n");
            else if (diem >= 8)
                printf("Hoc luc: Gioi\n");
            else if (diem >= 6.5)
                printf("Hoc luc: Kha\n");
            else if (diem >= 5)
                printf("Hoc luc: Trung binh\n");
            else if (diem >= 3.5)
                printf("Hoc luc: Yeu\n");
            else
                printf("Hoc luc: Kem\n");
            break;
        }

        case 2: {
            // BÀI 2: PHƯƠNG TRÌNH BẬC 1
            float a, b;
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);

            if (a == 0) {
                if (b == 0)
                    printf("Phuong trinh co vo so nghiem\n");
                else
                    printf("Phuong trinh vo nghiem\n");
            } else {
                printf("Nghiem x = %.2f\n", -b / a);
            }
            break;
        }

        case 3: {
            // BÀI 3: TIỀN ĐIỆN
            int soDien;
            long tien = 0;
            printf("Nhap so dien: ");
            scanf("%d", &soDien);

            if (soDien <= 50)
                tien = soDien * 1678;
            else if (soDien <= 100)
                tien = 50*1678 + (soDien-50)*1734;
            else if (soDien <= 200)
                tien = 50*1678 + 50*1734 + (soDien-100)*2014;
            else
                tien = 50*1678 + 50*1734 + 100*2014 + (soDien-200)*2536;

            printf("Tien dien: %ld VND\n", tien);
            break;
        }

        case 0:
            printf("Thoat chuong trinh!\n");
            break;

        default:
            printf("Lua chon sai!\n");
        }

    } while (choice != 0);

    return 0;
}
