 #include <AT89S52.h>   /*include header file*/
 #define LED P2_0     /*led connected in port p2.0*/
 #define SW P3_0     /*switch connected at port p3.0*/
 #define OFF 1       /*logic set to 1 inactive*/
 #define ON 0       /*logic set to 0 active*/
 #define INPUT 1     
 
  void main()
  {
  __bit status;/*intialize a bit variable*/
  LED = OFF;/*turn on led*/
  SW = INPUT;/*configure port pin connected to switch as input*/
  while(1)    /*execute in loop*/
  {
   status = SW;/*read sitch and store the logic variable*/
   LED = status; /*write the logic*/
   
  }
  }