int lux = 0; 
void setup() {
  Serial.begin(9600); //モニターに出力するための設定
}
void loop() {
  lux = analogRead(0);
  Serial.println(lux); //入力された値をモニターに出力
  delay(1000);
}
