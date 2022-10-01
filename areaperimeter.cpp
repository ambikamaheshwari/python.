#include <iostream>
using namespace std;

class Rectangle {

   public:
   float length, height;
   Rectangle(float l, float h) {
     length = l;
     height = h;
   }
  
   float perimeter() { 
    return length*2  + height*2;
   }

   float get_area() { 
    return length*height;
   }
};
int main(){

    Rectangle rect(6,9);
    
    cout<< rect.get_area<<endl;
}