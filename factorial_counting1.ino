// C++ code
int fact(int n){
  int result=1;
  while(n>0){
    result*=n;
    n--;
  }
  return result;
}
void setup()
{
 

  }

void loop()
{
  Serial.begin(9600);
  Serial.println("Enter the num:");
  
  while(Serial.available()){};
  int num=Serial.parseInt();
  Serial.print("Factorial  of");
  Serial.print(num);
  Serial.print("is");
  Serial.println(fact(num));
  delay(1000);

}