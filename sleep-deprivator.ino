
#include <ProTrinketKeyboard.h>

const byte PIN_LED_V = 13; // Green LED of the Trinket Pro.
const byte PIN_SLEEP_DEPRIVATION_ENABLE = 4; // Connect a switch between GND and this pin to enable/disable the keyboard.
const int loopDurationMs = 5;
const int msBetweenKeyboardInput = 30000; // Send a key press event every 30 seconds.

int nbMsElapsedKeyboard = 0;
bool ledOff = true;

void setup() {
  pinMode(PIN_LED_V, OUTPUT);
  pinMode(PIN_SLEEP_DEPRIVATION_ENABLE, INPUT_PULLUP);
  TrinketKeyboard.begin();
}

void loop() {
  // When this pin is on, send a "ctrl press" signal.
  if (digitalRead(PIN_SLEEP_DEPRIVATION_ENABLE) == HIGH)
  {
    digitalWrite(PIN_LED_V, HIGH);
    nbMsElapsedKeyboard = nbMsElapsedKeyboard + loopDurationMs;
    if (nbMsElapsedKeyboard > msBetweenKeyboardInput)
    {
      // Here, a press on CONTROL is set to awake the computer, which is invisible in OS X.
      // For an other OS, you might want to change to something less harmful (if you're typing Q at that moment that can be frustrating).
      // Full list available in ProTrinketKeyboard.h.
      TrinketKeyboard.pressKey(0, KEYCODE_LEFT_CONTROL);
      TrinketKeyboard.pressKey(0, 0); // Release key press.
      nbMsElapsedKeyboard = 0;
    }
  }
  else
  {
    digitalWrite(PIN_LED_V, LOW);
  }

  TrinketKeyboard.poll(); // This needs to be called at least every 10 ms.
  delay(loopDurationMs);
}
