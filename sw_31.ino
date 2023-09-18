#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

int count, toggle;
bool flag = false;

void loop() {

  if (flag) digitalWrite(PIN_LED, 1);
  else {
    digitalWrite(PIN_LED, toggle);
    delay(1000);
    int cnt = 0;
    while (cnt < 5) {
      for (int i = 0; i < 2; i++) {
        toggle = 1 - toggle;
        digitalWrite(PIN_LED, toggle);
        delay(100);
      }
      cnt += 1;
    }
    flag = true;
  }
  
}
