
int comptar = 11;         

void setup() {
Serial.begin(9600);
Serial.print("Ara comptare de 0 a ");
Serial.println(comptar);
for (int i=0; i <= comptar; i++)
{
  Serial.print(i);
  Serial.print("-");
}

}

void loop() {
}
