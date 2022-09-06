
/* Fibonacci Series:

First no. should be zero;
Second no should be one;
The Series start from zero and one and so on; For Example
0 , 1 , 1 , 2 , 3 , 5 , 13 , ...... 

Logic_of_fibonacci:
first_no added_up with second_no to print the 3rd_no;
then they replace their positions with next_no & second_no and so on...;

*/

#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
int first_no=0, second_no=1, next_no, size_of_Fib;
while (!Serial.available());

  while (Serial.available())
  {
    size_of_Fib=Serial.readStringUntil('\n').toInt(); // integer value
    Serial.print("size_of_Fib: ");
    Serial.println(size_of_Fib);
  }

for (int i = 0; i < size_of_Fib; i++)
{
  /* code */
  if (i<=1)      
  {
    /* code */
    next_no=i; // stores 0 & 1
  }
  else
  {
    next_no=first_no+second_no; // stores the position of n (new number) 
    first_no=second_no; //stores second position as (n-1)
    second_no=next_no; //stores next position as (n-2)
  }
  printf("Fibonacci Series: %d\n", next_no);
}

}