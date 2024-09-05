int ip = 8;   //Input Pin
int val = 0;  //Variable to store the value
int led = 13; // Led pin for Indication
void setup() {
  Serial.begin(9600);
  pinMode (ip, INPUT);  //Define Pin as input
  pinMode (led, OUTPUT);//Led as OUTPUT
}
void loop() {
     val = digitalRead(ip); //Read Pin as input
     Serial.println(val, DEC);
         if(val > 0)
            digitalWrite(led, HIGH);
         else
            digitalWrite(led, LOW);
     delay(100);
}
