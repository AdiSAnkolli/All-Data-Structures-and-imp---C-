/*
Data encapsulation is a mechanism of bundling the data,and the functions that use them and
data abstraction is a mechanism of exposing only the interfaces and hiding the implementation details from the user.
*/

//Sample Code same as Data Abstraction:-

Live Demo
#include <iostream>
using namespace std;

class Adder {
   public:
      // constructor
      Adder(int i = 0) {
         total = i;
      }
      
      // interface to outside world
      void addNum(int number) {
         total += number;
      }
      
      // interface to outside world
      int getTotal() {
         return total;
      };
   
   private:
      // hidden data from outside world
      int total;
};

int main() {
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);

   cout << "Total " << a.getTotal() <<endl;
   return 0;
}

//Output

//Total 60

/*
The public members addNum and getTotal are the interfaces to the outside world and a user needs to know them to use the class.
The private member total is something that is hidden from the outside world, but is needed for the class to operate properly.
*/
