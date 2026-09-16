#include <stdio.h>

int main() {
    int order_id;
    int subtotal;
    float distance_km;
    int booking_hour;
    int is_store_open;
    int inventory_qty;

    int is_peak_hour;
    int is_freeship_eligible;
    int is_valid_order;

    int base_fee = 15000;
    int surcharge;
    int discount;
    int final_delivery_fee;
    int total_payment;

    // Input
    printf("Nhap ma don hang: ");
    scanf("%d", &order_id);

    printf("Nhap gia tri tien mon an (VNĐ): ");
    scanf("%d", &subtotal);

    printf("Nhap khoang cach giao hang (km): ");
    scanf("%f", &distance_km);

    printf("Nhap gio dat hang (0-23): ");
    scanf("%d", &booking_hour);

    printf("Nhap trang thai quan (1-Mo, 0-Dong): ");
    scanf("%d", &is_store_open);

    printf("Nhap so luong ton kho: ");
    scanf("%d", &inventory_qty);

    // Kiem tra khung gio cao diem
    is_peak_hour =
        ((booking_hour >= 11 && booking_hour <= 13)
        || (booking_hour >= 18 && booking_hour <= 20));

    // Kiem tra dieu kien giam phi giao hang
    is_freeship_eligible = (subtotal >= 100000);

    // Kiem tra don hang hop le
    is_valid_order =
        (order_id > 0
        && subtotal >= 0
        && distance_km > 0
        && distance_km <= 15.0
        && booking_hour >= 0
        && booking_hour <= 23
        && is_store_open == 1
        && inventory_qty > 0);

    // Tinh phi
    surcharge = is_peak_hour * 10000;
    discount = is_freeship_eligible * 15000;

    final_delivery_fee =
        is_valid_order * (base_fee + surcharge - discount);

    total_payment =
        is_valid_order * (subtotal + final_delivery_fee);

    // Order Receipt
    printf("\n========== SHOPEEFOOD ORDER RECEIPT ==========\n");
    printf("Ma don hang       : %d\n", order_id);
    printf("Tien mon an       : %d VNĐ\n", subtotal);
    printf("Khoang cach       : %.2f km\n", distance_km);
    printf("Gio dat hang      : %d\n", booking_hour);
    printf("Quan mo cua       : %d\n", is_store_open);
    printf("Ton kho           : %d\n", inventory_qty);

    printf("----------------------------------------------\n");
    printf("Cao diem          : %d\n", is_peak_hour);
    printf("Phu phi cao diem  : %d VNĐ\n", surcharge);
    printf("Giam phi           : %d VNĐ\n", discount);
    printf("Don hang hop le   : %d\n", is_valid_order);
    printf("Phi giao hang     : %d VNĐ\n", final_delivery_fee);
    printf("----------------------------------------------\n");
    printf("TONG THANH TOAN   : %d VNĐ\n", total_payment);
    printf("==============================================\n");

    return 0;
}
