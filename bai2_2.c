/******************************************************************************
 * Họ và tên: [Nguyễn Trường Sơn]
 * MSSV:      [PS48636]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>

int main() {
    float a, b, c;
    float delta;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    if (a == 0) {
        // Phuong trinh bac 1
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh co vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Phuong trinh co nghiem: x = %f\n", -c / b);
        }
    } else {
        // Phuong trinh bac 2
        delta = b*b - 4*a*c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        }
        else if (delta == 0) {
            printf("Phuong trinh co nghiem kep: x = %f\n", -b / (2*a));
        }
        else {
            printf("Phuong trinh co 2 nghiem phan biet\n");
            printf("(Chua hoc can bac hai nen khong tinh cu the)\n");
        }
    }

    return 0;
}
