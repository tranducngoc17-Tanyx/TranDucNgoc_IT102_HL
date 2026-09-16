# Bài tập 03 - Phân tích Trade-off

## 1. Input

- order_id: Mã đơn hàng
- subtotal: Giá trị tiền món ăn
- distance_km: Khoảng cách giao hàng
- booking_hour: Giờ đặt hàng
- is_store_open: Trạng thái quán
- inventory_qty: Số lượng tồn kho

## 2. Output

- Trạng thái đơn hàng hợp lệ
- Phụ phí cao điểm
- Mức giảm phí
- Phí giao hàng
- Tổng tiền thanh toán

## 3. Giải pháp A - Tách biến cờ

Tạo các biến cờ:

- is_peak_hour
- is_freeship_eligible
- is_valid_order

Các cờ có giá trị 0 hoặc 1.

Sau đó dùng phép nhân để tính phí:

surcharge = is_peak_hour * 10000

discount = is_freeship_eligible * 15000

final_delivery_fee =
is_valid_order * (base_fee + surcharge - discount)

total_payment =
is_valid_order * (subtotal + final_delivery_fee)

## 4. Giải pháp B - Gộp biểu thức

Gộp trực tiếp các điều kiện logic vào công thức tính toán.

Ví dụ:

surcharge =
((booking_hour >= 11 && booking_hour <= 13) ||
(booking_hour >= 18 && booking_hour <= 20)) * 10000

Cách này làm code ngắn hơn nhưng biểu thức dài và khó đọc.

## 5. So sánh

| Tiêu chí | Giải pháp A | Giải pháp B |
|----------|-------------|-------------|
| Dễ đọc | Dễ | Khó hơn |
| Bảo trì | Dễ | Khó |
| Dễ phát hiện lỗi | Dễ | Khó hơn |
| Bộ nhớ | Nhiều biến hơn | Ít biến hơn |

## 6. Lựa chọn

Chọn Giải pháp A vì các điều kiện được tách thành từng biến cờ,
dễ đọc, dễ kiểm tra và dễ thay đổi khi nghiệp vụ thay đổi.

## 7. Pseudocode

Nhập dữ liệu.

Tính is_peak_hour.

Tính is_freeship_eligible.

Tính is_valid_order.

Tính surcharge.

Tính discount.

Tính final_delivery_fee.

Tính total_payment.

In Order Receipt.

## 8. Biên dịch

gcc -Wall -Wextra -std=c11 main.c -o main

## 9. Git commit

feat(session01): implement shopeefood order validator and fee calculator
