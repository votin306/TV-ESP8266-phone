BLYNK_WRITE(V0) { // кнопка вверх (button up) 
  int up = param.asInt();
  if (up == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0x2F0, 12);
      delay(40);
    }
  }
}

BLYNK_WRITE(V1) { // кнопка вправо (button right) 
  int left = param.asInt();
  if (left == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0x2D0, 12);
      delay(40);
    }
  }
}

BLYNK_WRITE(V2) { // кнопка влево (button left) 
  int right = param.asInt();
  if (right == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0xCD0, 12);
      delay(40);
    }
  }
}

BLYNK_WRITE(V3) { // кнопка вниз (button down) 
  int down = param.asInt();
  if (down == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0xAF0, 12);
      delay(40);
    }
  }
}

BLYNK_WRITE(V6) { // кнопка ОК (button ОК) 
  int OK = param.asInt();
  if (OK == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0xA70, 12);
      delay(40);
    }
  }
}


BLYNK_WRITE(V4) { // кнопка +канал (button +ch) 
  int _ch = param.asInt();
  if (_ch == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0x490, 12);
      delay(40);
    }
  }
}

BLYNK_WRITE(V5) { // кнопка -канал (button -ch) 
  int ch_ = param.asInt();
  if (ch_ == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0xC90, 12);
      delay(40);
    }
  }
}
BLYNK_WRITE(V7) { // кнопка +громкость (button +vol) 
  int _vol = param.asInt();
  if (_vol == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0x90, 12);
      delay(40);
    }
  }
}

BLYNK_WRITE(V8) { // кнопка -громкость (button -vol) 
  int vol_ = param.asInt();
  if (vol_ == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0x890, 12);
      delay(40);
    }
  }
}

BLYNK_WRITE(V9) { // кнопка home (button home) 
  int homes = param.asInt();
  if (homes == 1) {
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0x70, 12);
      delay(40);
    }
  }
}
