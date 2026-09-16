ShopeeFood Checkout System

1. Phân tích I/O

Input:

* ma_mon: mã món
* don_gia: đơn giá
* so_luong: số lượng
* khoang_cach: khoảng cách giao hàng
* is_peak: giờ cao điểm
* is_store_open: trạng thái cửa hàng
* ton_kho: tồn kho
* loai_tai_khoan: V (VIP), N (Normal)

Output:

* Tiền món ăn
* Phí giao hàng
* Giảm Freeship
* Phụ phí cao điểm
* Trạng thái đơn hàng
* Tổng tiền

2. Tư duy đại số Boole

Dùng các phép `&&`, `||`, `==`, `>`, `>=` để kiểm tra điều kiện.

Đơn hàng hợp lệ:

(is_store_open == 1)
&& (ton_kho >= so_luong)
&& (so_luong > 0)
&& (don_gia > 0)

Freeship:

((subtotal >= 100000 && khoang_cach <= 5.0)
|| loai_tai_khoan == 'V')

Không sử dụng `if`, `else`, `switch` và vòng lặp.

3. Các bước thực hiện

1. Nhập dữ liệu.
2. Tính tiền món ăn và phí giao hàng.
3. Kiểm tra Freeship.
4. Tính giảm giá và phụ phí.
5. Kiểm tra đơn hàng hợp lệ.
6. Tính tổng tiền.
7. In kết quả.
