/* Polymorphism means having many forms:-
In C++ it's like overloading (overriding), 
which means a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.
e.g) base class has been derived by 2 different classes:-
*/

//Sample Code

#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

// Main function for the program
int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;
   
   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   shape->area();
   
   return 0;
}

//Output

/*
Parent class area :
Parent class area :
*/

/* the reason behind the incorrect output is because the area() function overrides over the derived classes.
This is called static resolution of the function call, or static linkage - the function call is fixed before the program is executed. (or early binding)
But now, let's make a slight modification in our program and precede the declaration of area() in the Shape class with the keyword virtual so that it looks like this −
*/

//Slight Change to correct output

class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0) {
         width = a;
         height = b;
      }
      virtual int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

//Output

/*
Rectangle class area
Triangle class area
*/

//Virtual Function
/*
A virtual function is a function in a base class that is declared using the keyword virtual
Defining in a base class a virtual function, with another version in a derived class, signals to the compiler that we don't want static linkage for this function.
This sort of operation is called Dynamic Linkage.
*/

//Pure Virtual functions work like constructors, i.e in this scenario, pure virtual function will look like:-

class Shape {
   protected:
      int width, height;

   public:
      Shape(int a = 0, int b = 0) {
         width = a;
         height = b;
      }
      
      // pure virtual function
      virtual int area() = 0;
};
