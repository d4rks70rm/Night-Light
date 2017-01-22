  /**
 Tiago Santos, 2017
 dark_storm@groundzero.com.pt
 Code to Marvin Night Light
 Free to share
 **/
 
int led = 11;
int reed = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(reed, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(reed) == HIGH ){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led,LOW);
  }

}
