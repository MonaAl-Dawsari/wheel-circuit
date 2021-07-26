//Motor 1:
#define Ena 10
#define IN1 9
#define IN2 8

//Motor 2:
#define Enb 11
#define IN3 12
#define IN4 13

int speed1=120;
int Direct1=1;
int Direct2=0;

int speed2=120;
int Direct3=1;
int Direct4=0;

void setup()
{
  pinMode(Ena, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(Enb, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop()
{
  //Motor 1:
  digitalWrite(IN1, Direct1);
  digitalWrite(IN2, Direct2);
  analogWrite(Ena,speed1);
  
  //Motor 2:
  digitalWrite(IN3, Direct3);
  digitalWrite(IN4, Direct4);
  analogWrite(Enb,speed2);
  
}