#include <16F628.h>
#use delay(clock=4000000)
#fuses XT,NOWDT,PUT

int x=100;

void main()
   {
       
        
    
         
         inicio:
         //output_b(0b11111111);
         if(input(pin_a2))
         {
         //delay_us(x);
         output_b(0b10000100); //linha1
         delay_us(x);
         output_b(0b00000000);
         delay_us(x);       
         output_b(0b10000010); //linha2
         delay_us(x);
         output_b(0b0000000);
         delay_us(x);
         output_b(0b11111111); //linha3
         delay_us(x);
         output_b(0b0000000);
         delay_us(x);        
         output_b(0b10000010); //linha4
         delay_us(x);
         output_b(0b00000000);
         delay_us(x);
         output_b(0b10000100); //linha5
         delay_us(x);
         output_b(0b00000000);
         delay_us(x); 
            
      
    
         }
     
     
      goto inicio;
   }
