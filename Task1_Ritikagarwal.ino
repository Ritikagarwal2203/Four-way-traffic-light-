int way1[] = {2,3,4};                        //ARRAY FOR BOX 1 WITH A SEQUENCE OF RED,YELLOW,GREEN.
int way2[] = {5,6,7};                        //ARRAY FOR BOX 2 WITH A SEQUENCE OF RED,YELLOW,GREEN.
int way3[] = {8,9,10};                       //ARRAY FOR BOX 3 WITH A SEQUENCE OF RED,YELLOW,GREEN.
int way4[] = {11,12,13};                     //ARRAY FOR BOX 4 WITH A SEQUENCE OF RED,YELLOW,GREEN.
void setup()                                 //HERE IN THIS FUNCTION THE PIN IS DEFINED AS INPUT OR OUTPUT.
{
  Serial.begin(9600);  // 9600
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  for (int i=0;i<3;i++)                       //FOR ASSIGNING ALL THE PIN TO 0 VOLTS IN THE INITIALLY.
  {
    digitalWrite(way1[i],LOW); 
    digitalWrite(way2[i],LOW);
    digitalWrite(way3[i],LOW);
    digitalWrite(way4[i],LOW);
  }
  
}

void loop()                                   //THIS WILL LEAD TO CHANGE IN COLOR OF THE TRAFFIC LIGHT AFTER FIXED INTERVAL OF TIME. 
 {
  digitalWrite(way1[2],HIGH);                 //NEXT FOUR STEP IS FOR ONE GREEN AND REST RED.
  digitalWrite(way2[0],HIGH);
  digitalWrite(way3[0],HIGH);
  digitalWrite(way4[0],HIGH);
  delay(9000);                                // TO STOP THE ABOVE PATTERN FOR 9 SECONDS IN EVERY DELAY(9000).
  digitalWrite(way1[2],LOW);                  // THE FIRST TWO LINE AFTER EVERY DELAYFYNCTION IS TO TURN THE NON DESIRED LIGHT OFF.
  digitalWrite(way2[0],LOW);
  digitalWrite(way1[1],HIGH);                 // THE NEXT TWO LINES TO TURN ON YELLOW LIGHT.
  digitalWrite(way2[1],HIGH);
  delay(3000);                                // INDICATES THE READY TO GO FOR 3 SECONDS IN EVERY DELAY(3000).
  digitalWrite(way1[1],LOW);                  // TWO STEPS FOR TURNING OFF THE YELLOW LIGHTS AND THE NEXT TWO ARE FOR TURNING ON THE GREEN LIGHT OF 2ND BOX AND RED OF THE 1ST BOX.
  digitalWrite(way2[1],LOW);
  digitalWrite(way1[0],HIGH);
  digitalWrite(way2[2],HIGH);
  delay(9000);
  digitalWrite(way2[2],LOW);                  // THE FIRST TWO LINE AFTER EVERY DELAYFYNCTION IS TO TURN THE NON DESIRED LIGHT OFF.
  digitalWrite(way3[0],LOW);
  digitalWrite(way2[1],HIGH);
  digitalWrite(way3[1],HIGH);
  delay(3000);                                // INDICATES THE READY TO GO FOR 3 SECONDS IN EVERY DELAY(3000).
  digitalWrite(way2[1],LOW);                  // TWO STEPS FOR TURNING OFF THE YELLOW LIGHTS AND THE NEXT TWO ARE FOR TURNING ON THE GREEN LIGHT OF 3RD BOX AND RED OF THE 2ND BOX.
  digitalWrite(way3[1],LOW);
  digitalWrite(way2[0],HIGH);
  digitalWrite(way3[2],HIGH);
  delay(9000);
  digitalWrite(way3[2],LOW);                  // THE FIRST TWO LINE AFTER EVERY DELAYFYNCTION IS TO TURN THE NON DESIRED LIGHT OFF.
  digitalWrite(way2[0],LOW);
  digitalWrite(way3[1],HIGH);                 // THE NEXT TWO LINES TO TURN ON YELLOW LIGHT.
  digitalWrite(way4[1],HIGH);
  delay(3000);                                // INDICATES THE READY TO GO FOR 3 SECONDS IN EVERY DELAY(3000).
  digitalWrite(way3[1],LOW);                  // TWO STEPS FOR TURNING OFF THE YELLOW LIGHTS AND THE NEXT TWO ARE FOR TURNING ON THE GREEN LIGHT OF 4TH BOX AND RED OF THE 3RD BOX.
  digitalWrite(way4[1],LOW);
  digitalWrite(way3[0],HIGH);
  digitalWrite(way4[2],HIGH);
  delay(9000);
  digitalWrite(way1[0],LOW);                  // THE FIRST TWO LINE AFTER EVERY DELAYFYNCTION IS TO TURN THE NON DESIRED LIGHT OFF.
  digitalWrite(way4[2],LOW);
  digitalWrite(way1[1],HIGH);                 // THE NEXT TWO LINES TO TURN ON YELLOW LIGHT.
  digitalWrite(way4[1],HIGH);
  delay(3000);                                // INDICATES THE READY TO GO FOR 3 SECONDS IN EVERY DELAY(3000).
  digitalWrite(way1[1], LOW);                 // THE TWO LINES ARE TO TAKE THEM TO THE INITIAL STATE AS DEFINED BY THT VOID SETUP(). 
  digitalWrite(way4[1], LOW);
 }
