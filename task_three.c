#include <At89S52.h>
 #define LED P2_0
  #define LE P3_0
 #define OFF 1       
 #define ON 0  
 void wait(int);
void main()
{
char n;
LED=OFF;
LE=OFF;
while(1)
{
LED=ON;
wait(1);
LE=OFF;
wait(1);
LE=ON;
wait(1);
LED=OFF;
wait(1);


}
}
void wait(int del)
{
int c1,c2;
for(c1=0; c1<del; c1++){
for(c2=0;c2<15;c2++){
}
}
}
