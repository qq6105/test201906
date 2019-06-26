/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 11:35:14 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteLabel label2;
LRemoteLabel label3;
LRemoteButton button1;
LRemoteButton button2;

void setup()
{
  LRemote.setName("qq6105");
  LRemote.setOrientation(RC_PORTRAIT);
  LRemote.setGrid(5, 6);
    label1.setPos(0, 0);
    label1.setText("手機遙控");
    label1.setSize(5, 1);
    label1.setColor(RC_ORANGE);
    LRemote.addControl(label1);

    label2.setPos(0, 1);
    label2.setText("");
    label2.setSize(5, 1);
    label2.setColor(RC_BLUE);
    LRemote.addControl(label2);

    label3.setPos(0, 5);
    label3.setText("洪千佳製造");
    label3.setSize(5, 1);
    label3.setColor(RC_GREEN);
    LRemote.addControl(label3);

    button1.setPos(0, 3);
    button1.setText("開");
    button1.setSize(2, 1);
    button1.setColor(RC_PINK);
    LRemote.addControl(button1);

    button2.setPos(3, 3);
    button2.setText("關");
    button2.setSize(2, 1);
    button2.setColor(RC_PINK);
    LRemote.addControl(button2);
  LRemote.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (button1.isValueChanged()) {
    if (button1.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);
      label2.updateText(String("燈亮"));

    }

  }
  if (button2.isValueChanged()) {
    if (button2.getValue() == 1) {
      digitalWrite(LED_BUILTIN, LOW);
      label2.updateText(String("燈滅"));

    }

  }
  delay(100);
}