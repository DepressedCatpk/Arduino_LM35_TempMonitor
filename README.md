# Giám sát Nhiệt độ với Arduino và LM35

## Mô tả
Dự án mạng cảm biến: Đọc nhiệt độ từ 2 cảm biến LM35 thông qua Arduino, đóng gói và gửi dữ liệu dạng CSV qua cổng Serial để hiển thị đồ thị trên máy tính.

## Tính năng nổi bật
- Đọc dữ liệu nhiệt độ song song từ 2 kênh (A0, A1).
- Chuyển đổi tín hiệu ADC sang độ C theo thời gian thực.
- Truyền dữ liệu tốc độ 9600 baud, định dạng chuẩn CSV để dễ dàng vẽ đồ thị.

## Phần cứng cần thiết
| STT | Thiết bị | Số lượng | Ghi chú |
|---|---|---|---|
| 1 | Arduino Uno R3 | 1 | Vi điều khiển trung tâm |
| 2 | Cảm biến LM35 | 2 | Đo nhiệt độ |
| 3 | Dây cắm testboard | Tùy chọn | Kết nối tín hiệu |

## Hướng dẫn sử dụng
1. Lắp mạch: Chân OUT của 2 cảm biến LM35 lần lượt nối vào chân A0 và A1 trên Arduino. Cấp nguồn 5V và GND.
2. Mở file `firmware/LM35_TempReader/LM35_TempReader.ino` bằng Arduino IDE hoặc VS Code.
3. Chọn đúng cổng COM và nạp code xuống board.
4. Mở Serial Monitor (baud rate 9600) để theo dõi luồng dữ liệu (ví dụ: `25,28`).

## Cấu trúc thư mục
```text
Arduino_LM35_TempMonitor/
├── docs/
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino
├── libs/
├── pc_app/
├── simulation/
└── README.md
Họ và tên: Phạm Hoàng Nguyên Khôi
MSSV: N23DCCI036
Lớp: D23CQCI01-N

Thành viên nhóm:
Họ và tên: Lê Văn Hùng
MSSV: N23DCCI028    
Lớp: D23CQCI01-N

Trang web cá nhân (Portfolio): [https://DepressedCa
tpk.github.io](https://DepressedCatpk.github.io)