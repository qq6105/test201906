/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 11:04:03 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteLabel label2;
LRemoteLabel label3;
LRemoteSwitch switch1;

void setup()
{
  LRemote.setName("LinkIt 7697");
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

    switch1.setPos(0, 3);
    switch1.setSize(5, 1);
    switch1.setText("開關");
    switch1.setColor(RC_YELLOW);
    LRemote.addControl(switch1);
  LRemote.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (switch1.isValueChanged()) {
    if (switch1.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);

    } else {
      digitalWrite(LED_BUILTIN, LOW);

    }

  }
}