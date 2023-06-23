int R = D1;
int G = D2;
int B = D3;
void setup() {
pinMode(R, OUTPUT);
pinMode(G, OUTPUT);
pinMode(B, OUTPUT);
Serial.begin(9600);
}
void loop() {
analogWrite(R, 255);
analogWrite(G, 0);
0 =-098654
analogWrite(B, 4);
delay(500);

}
