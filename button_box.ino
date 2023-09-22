// Psychology Response Box
// 4 Button Version
// E. Pedapati
// https://github.com/cincibrainlab/PsychologyResponseBox/

// v 1.1
// Uses internal PULLUPs. No need for resistors for each button!
// https://www.instructables.com/Arduino-Button-with-no-resistor/

// Define which pins are connected to buttons
#define BUTTON_PIN1 3  // Button
#define BUTTON_PIN2 4  // Button
#define BUTTON_PIN3 8  // Button
#define BUTTON_PIN4 12  // Button

//BOX C
#define BUTTON_PIN1 3  // Button
#define BUTTON_PIN2 9  // Button
#define BUTTON_PIN3 7  // Button
#define BUTTON_PIN4 5  // Button

//BOX D
#define BUTTON_PIN1 5  // Button
#define BUTTON_PIN2 7  // Button
#define BUTTON_PIN3 9 // Button
#define BUTTON_PIN4 3  // Button

//BOX D
#define BUTTON_PIN1 4  // Button
#define BUTTON_PIN2 8  // Button
#define BUTTON_PIN3 2 // Button
#define BUTTON_PIN4 11  // Button

// Box EW23-01161
#define BUTTON_PIN1 3  // Button
#define BUTTON_PIN2 9 // Button
#define BUTTON_PIN3 7  // Button
#define BUTTON_PIN4 5  // Button

// Box EW23-BlackButton
#define BUTTON_PIN1 9  // Button
#define BUTTON_PIN2 7 // Button
#define BUTTON_PIN3 5  // Button
#define BUTTON_PIN4 3  // Button

// Flip of Box A
#define BUTTON_PIN1 12  // Button
#define BUTTON_PIN2 8 // Button
#define BUTTON_PIN3 4  // Button
#define BUTTON_PIN4 3  // Button

#define DELAY 5  // Delay per loop in ms

void setup() {
  
  // activate the internal pull-up resistor
  pinMode(BUTTON_PIN1, INPUT_PULLUP);
  pinMode(BUTTON_PIN2, INPUT_PULLUP);
  pinMode(BUTTON_PIN3, INPUT_PULLUP);
  pinMode(BUTTON_PIN4, INPUT_PULLUP);

  // Define pin #13 as output, for the LED
  Serial.begin(115200);
  
}

void loop() {
  // Read the value of the input. It can either be 1 or 0
  int button_val1 = digitalRead(BUTTON_PIN1);
  int button_val2 = digitalRead(BUTTON_PIN2);
  int button_val3 = digitalRead(BUTTON_PIN3);
  int button_val4 = digitalRead(BUTTON_PIN4);

  if (button_val1 == LOW) {
    Serial.print(button_val1 ? "" : "0");
  }

  if (button_val2 == LOW) {
    Serial.print(button_val2 ? "" : "1");
  }

  if (button_val3 == LOW) {
    Serial.print(button_val3 ? "" : "2");
  } 

  if (button_val4 == LOW) {
    Serial.print(button_val4 ? "" : "3");
  }

  delay(DELAY);

}
