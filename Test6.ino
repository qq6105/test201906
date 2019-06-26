/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 12:11:52 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteLabel label2;
LRemoteLabel label3;
LRemoteSlider slider1;

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

    slider1.setPos(0, 4);
    slider1.setSize(5, 1);
    slider1.setText("");
    slider1.setValueRange(0, 255, 1);
    slider1.setColor(RC_ORANGE);
    LRemote.addControl(slider1);
  LRemote.begin();
  pinMode(7, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (slider1.isValueChanged()) {
    analogWrite(7, slider1.getValue());

  }
  delay(100);
}