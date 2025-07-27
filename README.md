# Tổng quan cảm biến siêu âm HC-SR04

Cảm biến siêu âm HC-SR04 là loại cảm biến đo khoảng cách không tiếp xúc bằng cách sử dụng sóng siêu âm (ultrasound). Nó thường được dùng trong các ứng dụng:

- Robot tránh vật cản
- Đo mức nước
- Tự động hóa nhà ở (cửa tự mở, đèn bật khi có người,…)
- Xe tự hành (tự động lùi)

---

## ⚙️ Nguyên lý hoạt động

1. Module phát sóng siêu âm (ở tần số ~40 kHz) từ chân **TRIG**.
2. Sóng siêu âm gặp vật sẽ phản xạ lại và được thu nhận qua chân **ECHO**.
3. Bộ vi xử lý đo thời gian từ lúc phát đến khi nhận lại — từ đó tính khoảng cách:

**Công thức tính:**
Distance = (Time × Speed of Sound) / 2
