#include <NewPing.h>
NewPing sonar (10, 11, 20);
int Distance = 0;

void setup()
{
  Serial.begin(9600);
  delay(50);

}

void loop() {
  Distance = sonar.ping_cm();
  Serial.println(Distance);
  if (Distance < 15)
  {
    Serial.println("Greater than 15");
    digitalWrite(13, HIGH);
  }
  else if (Distance > 15)
  {
    digitalWrite(13, LOW);
  }
  Serial.print("The Distance is:");
  delay(500);
}
