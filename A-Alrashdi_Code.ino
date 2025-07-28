const int button1 = 7;
const int button2 = 8;
const int button3 = 9;

const int led1 = 10;
const int led2 = 11;
const int led3 = 12;

int lastButton1 = LOW;
int lastButton2 = LOW;
int lastButton3 = LOW;

bool led1State = false;
bool led2State = false;
bool led3State = false;

void setup() {
pinMode(button1, INPUT);
pinMode(button2, INPUT);
pinMode(button3, INPUT);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
int current1 = digitalRead(button1);
int current2 = digitalRead(button2);
int current3 = digitalRead(button3);

if (current1 == HIGH && lastButton1 == LOW) {
led1State = !led1State;
digitalWrite(led1, led1State);
delay(200); // Debounce
}
lastButton1 = current1;

if (current2 == HIGH && lastButton2 == LOW) {
led2State = !led2State;
digitalWrite(led2, led2State);
delay(200);
}
lastButton2 = current2;

if (current3 == HIGH && lastButton3 == LOW) {
led3State = !led3State;
digitalWrite(led3, led3State);
delay(200);
}
lastButton3 = current3;
}