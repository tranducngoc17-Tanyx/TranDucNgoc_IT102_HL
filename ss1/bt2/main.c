#include <stdio.h>

int main() {
    int ma_mon;
    float don_gia;
    int so_luong;
    float khoang_cach;
    int is_peak;
    int is_store_open;
    int ton_kho;
    char loai_tai_khoan;

    printf("Nhap ma mon an: ");
    scanf("%d", &ma_mon);

    printf("Nhap don gia (VND): ");
    scanf("%f", &don_gia);

    printf("Nhap so luong dat: ");
    scanf("%d", &so_luong);

    printf("Nhap khoang cach giao hang (km): ");
    scanf("%f", &khoang_cach);

    printf("Nhap khung gio cao diem (1: Co, 0: Khong): ");
    scanf("%d", &is_peak);

    printf("Nhap trang thai cua hang (1: Mo, 0: Dong): ");
    scanf("%d", &is_store_open);

    printf("Nhap so luong ton kho: ");
    scanf("%d", &ton_kho);

    printf("Nhap loai tai khoan (V: VIP, N: Normal): ");
    scanf(" %c", &loai_tai_khoan);

    float subtotal = don_gia * so_luong;

    float shipping_fee = khoang_cach * 5000.0;

    int is_freeship = ((subtotal >= 100000) && (khoang_cach <= 5.0)) || (loai_tai_khoan == 'V');

    float freeship_discount = 15000.0 * is_freeship;

    freeship_discount = freeship_discount * (freeship_discount <= shipping_fee) + shipping_fee * (freeship_discount > shipping_fee);

    float peak_surcharge = 10000.0 * is_peak;

    int is_valid = (is_store_open == 1) && (ton_kho >= so_luong) && (so_luong > 0) && (don_gia > 0);

    float final_amount = (subtotal + shipping_fee - freeship_discount + peak_surcharge) * is_valid;

    printf("\n==================================================\n");
    printf("          SHOPEEFOOD ORDER CHECKOUT SYSTEM\n");
    printf("==================================================\n");

    printf("Ma mon an : %d\n", ma_mon);
    printf("Don gia : %.2f VND\n", don_gia);
    printf("So luong dat : %d\n", so_luong);
    printf("Khoang cach giao : %.1f km\n", khoang_cach);
    printf("Khung gio cao diem : %d\n", is_peak);
    printf("Trang thai quan : %d\n", is_store_open);
    printf("So luong ton kho : %d\n", ton_kho);
    printf("Loai tai khoan : %c\n", loai_tai_khoan);

    printf("--------------------------------------------------\n");

    printf("TONG TIEN MON AN : %.2f VND\n", subtotal);
    printf("PHI GIAO HANG CO BAN : %.2f VND\n", shipping_fee);
    printf("GIAM GIA FREESHIP : %.2f VND\n", freeship_discount);
    printf("PHU PHI GIO CAO DIEM : %.2f VND\n", peak_surcharge);

    printf("--------------------------------------------------\n");

    printf("DON HANG HOP LE : %d (1: HOP LE / 0: TU CHOI)\n", is_valid);

    printf("TONG THANH TIEN : %.2f VND\n", final_amount);

    printf("==================================================\n");

    return 0;
}

