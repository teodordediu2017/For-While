
int comptar = 10;
int i = 0;

void setup() {
Serial.begin(9600);
Serial.println("Ara comptare de 0 a 11");

while(i <= comptar)
{
  
   Serial.print(i);
  Serial.print("-");
  i++;
}
Serial.print("11");
}

void loop() {

}
