int d0 = 10;
int d1 = 11;
int d2 = 12;
int d3 = 13;

int d0Val = 0;
int d1Val = 0;
int d2Val = 0;
int d3Val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(d0, INPUT);
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
  pinMode(d3, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  d0Val = digitalRead(d0);
  d1Val = digitalRead(d1);
  d2Val = digitalRead(d2);
  d3Val = digitalRead(d3);

  Serial.print("D0: ");
  Serial.println(d0Val);
  Serial.print("D1: ");
  Serial.println(d1Val);
  Serial.print("D2: ");
  Serial.println(d2Val);
  Serial.print("D3: ");
  Serial.println(d3Val);

  delay(500);  // delay in ms

}
