int a=5;
  int b=12;
  int c=sq(a);
  int d=sq(b); 
int  e=c+d; 
int f=sqrt(e);  

void setup() {
  // put your setup code here, to run once:
  
 Serial.begin(9600);
//Tiene que dar 13
}

void loop() {
  // put your main code here, to run repeatedly:
  

  Serial.println(f);
}
