/*
 * Dự án: Đọc nhiệt độ 2 kênh LM35 và gửi qua Serial dạng CSV
 * Môn: Mạng Cảm Biến - Tuần 03
 */

int adcValues[2]; 
float nhietDo[2]; 
char chuoi[30];

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;

  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;

  sprintf(chuoi, "%d,%d\n", (int)nhietDo[0], (int)nhietDo[1]);
  Serial.print(chuoi);

  int valA2 = analogRead(A2); // Sinh vien A them doc kenh A2
  
  delay(100); 
}