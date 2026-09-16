#include <stdio.h>

/*
Bai tap: Debug loi nham lan = va == khi xet duyet Freeship

1. Phan tich loi:
   Loi nam o dieu kien:
   (is_da_huy = 0)

Toan tu = la toan tu gan, khong phai so sanh.
Lenh nay gan is_da_huy = 0 va lam bieu thuc co gia tri 0,
nen is_freeship luon bang 0.
Dong thoi gia tri is_da_huy ban dau cung bi thay doi.

Sua lai thanh:
(is_da_huy == 0)

2. Test Cases:

* Truong hop 1:
  Input: 200000, 2.0, 1, 0
  Ket qua sai: Freeship = 0
  Ket qua dung: Freeship = 1

* Truong hop 2:
  Input: 200000, 2.0, 1, 1
  Ket qua sai: Freeship = 0, is_da_huy bi doi thanh 0
  Ket qua dung: Freeship = 0, is_da_huy giu nguyen 1
  */

// task: Kiem tra ma Freeship ShopeeFood

int main() {
// Khai bao cac thong tin dau vao
int gia_tri_don;
float khoang_cach_km;
int is_vip;
int is_da_huy;

// Nhap du lieu
printf("Nhap gia tri don hang (VND): ");
scanf("%d", &gia_tri_don);

printf("Nhap khoang cach giao hang (km): ");
scanf("%f", &khoang_cach_km);

printf("Nhap trang thai VIP (1: Co, 0: Khong): ");
scanf("%d", &is_vip);

printf("Nhap trang thai huy don (1: Da huy, 0: Hop le): ");
scanf("%d", &is_da_huy);

// Kiem tra dieu kien Freeship
int is_freeship =
    (gia_tri_don >= 100000 || is_vip == 1)
    && (khoang_cach_km <= 5.0)
    && (is_da_huy == 0);

// In ket qua
printf("\n===================================\n");
printf(" KET QUA KIEM TRA MA FREESHIP \n");
printf("===================================\n");
printf("Trang thai Freeship (1: Duoc nhan, 0: Tu choi): %d\n", is_freeship);
printf("Trang thai don bi huy (1: Da huy, 0: Hop le): %d\n", is_da_huy);

	return 0;
}

