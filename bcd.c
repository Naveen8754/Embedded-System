#include <AT89S52.h>   /*include header file*/
 #define LED P1_1     /*led connected in port p2.0*/
 #define SW P0     /*switch connected at port p3.0*/
   
 void main()
 {
 char sw
 char l,h;/* used the number*/
 SW=0xFF;
 LED=1;
 while(1)
 {
 sw=~SW;
l=sw&0x0F;/* LOWER BIT IS GENERATED AND OTHER IS ZERO*/
h=sw>>4; /*SHIFT THE BIT VALUE TO 4 TIMES*/
if(l<=9&h<=9)
{
LED=0;
}
else{
LED=1;
}
 }
 }