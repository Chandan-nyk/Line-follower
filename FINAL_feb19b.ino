#define S2 2      
#define S3 3     
#define S4 4 
#define S5 5      
#define S6 6     
#define S7 7
//#define S7 8


#define LM1 10       // left motor
#define LM2 11      // left motor
#define RM1 12      // right motor
#define RM2 9      // right motor
void setup()
{
  pinMode(S7, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
  pinMode(S6, INPUT);
  //pinMode(S7, INPUT);


  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);

    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);


  
}
void loop()
{    
  if (digitalRead(3)==0 && digitalRead(4)==0)     
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);  
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }

  
  else if ( digitalRead(6)==0)     
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);  
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  else if(digitalRead(5)==0 && digitalRead(6)==0)    
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }

  
  else if(digitalRead(3)==0)    
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  else if(digitalRead(2)==0 && digitalRead(3)==0)   //
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    
  }
   
  else if(digitalRead(6)==0 && digitalRead(7)==0)   //
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    ;
    
  }






    
  else if(digitalRead(7)==0)   //
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    
  }

    
  else if(digitalRead(2)==0 )   //
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    
  }
  
else if(digitalRead(3)==0 && digitalRead(4)==0 && digitalRead(5)==0 && digitalRead(6)==0 && digitalRead(7)==0){
  
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);

    
}


else if(digitalRead(2)==0 && digitalRead(3)==0 && digitalRead(4)==0 ){
 
     digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);

       
}


else if(digitalRead(2)==0 && digitalRead(3)==0 && digitalRead(4)==0 && digitalRead(5)==0 ){
 
     digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);

       
}


else if(digitalRead(2)==0 && digitalRead(3)==0 && digitalRead(4)==0 && digitalRead(5)==0 && digitalRead(6)==0 ){
 
     digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);

       
}








else if(digitalRead(7)==0 && digitalRead(2)==0 && digitalRead(3)==0 && digitalRead(4)==0 && digitalRead(5)==0 && digitalRead(6)==0){
    /* digitalWrite(LM1,LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  */  


     digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
  

      
}
else if(digitalRead(4)== 0 ||  digitalRead(5)==0)    // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }

  
else if(digitalRead(7) && digitalRead(2) && digitalRead(3) && digitalRead(4) && digitalRead(5) && digitalRead(6)){
   /*  digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
     */
  
   digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
     
      
}

else
{
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    
  }






  
  
}
