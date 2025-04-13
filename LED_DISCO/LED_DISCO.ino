#define led1 2
#define led2 4
#define led3 18
#define led4 15


void setup() {


  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);


}

void loop() {
 
  digitalWrite(led1, random(0, 2));  
  digitalWrite(led2, random(0, 2));
  digitalWrite(led3, random(0, 2));
  digitalWrite(led4, random(0, 2));
  
  delay(random(10, 50)); 
}
