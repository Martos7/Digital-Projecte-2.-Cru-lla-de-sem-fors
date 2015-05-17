const int led0=3;
const int led1=5;
const int led2=7;
const int led3=8;
const int led4=10;
const int led5=12;

void setup ()

{
  pinMode ( led0, OUTPUT);
  pinMode ( led1, OUTPUT);
  pinMode ( led2, OUTPUT);
  pinMode ( led3, OUTPUT);
  pinMode ( led4, OUTPUT);
  pinMode ( led5, OUTPUT);
  
}

void loop ()

{
  digitalWrite ( led0, HIGH );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(1000); //1
  
  digitalWrite ( led0, HIGH );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, LOW );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, HIGH );
  delay(1000); //2
  
  digitalWrite ( led0, HIGH );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, LOW );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, HIGH );
  delay(1000); //3
  
  digitalWrite ( led0, HIGH );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, LOW );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, HIGH );
  delay(1000);//4
  
  digitalWrite ( led0, HIGH );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, LOW );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, HIGH );
  delay(1000);//5
  
  digitalWrite ( led0, HIGH );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, LOW );
  digitalWrite ( led4, HIGH );
  digitalWrite ( led5, LOW );
  delay(1000); //6
  
  digitalWrite ( led0, HIGH );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(1000); //7
  
  digitalWrite ( led0, LOW );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, HIGH );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(1000); //8
  
  digitalWrite ( led0, LOW );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, HIGH );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(1000); //9
  
  digitalWrite ( led0, LOW );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, HIGH );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(1000); //10
 
  digitalWrite ( led0, LOW );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, HIGH );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(1000); //11
  
   digitalWrite ( led0, LOW );
  digitalWrite ( led1, HIGH );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(1000); //12
  
   digitalWrite ( led0, HIGH );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(1000); //13
   
}

// Programa que simula un "cruze" de semàfors 
