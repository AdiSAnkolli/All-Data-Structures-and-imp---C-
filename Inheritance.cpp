// Access Modifiers:-
/*
There are 3 types of access modifiers:-
1) Private:- The variables or member functions defined by using this access modifier can only and only be used only by the objects of that class
2) Public:- The variables or member functions defined by using this access modifier can be used by any class object
3) Protected:- The variables or member functions defined using this access modifier can be used by that class and the classes derived by it.


Access	          public	  protected	  private
Same class	      yes	      yes	        yes
Derived classes	  yes	      yes	        no
Outside classes	  yes	      no	        no
*/

//Base and Derived Class:- 
//e.g) class derived-class: access-specifier base-class

//Sample Code Example:- (Simple Inheritance)

#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}

//OUTPUT
/*
Total area: 35
*/


/* 
class derived-class: access-specifier base-class, the access specifier shows what type of inheritance is being done.
Public Inheritance − When deriving a class from a public base class, public members of the base class become public members of the derived class and protected members of the base class become protected members of the derived class. A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

Protected Inheritance − When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.

Private Inheritance − When deriving from a private base class, public and protected members of the base class become private members of the derived class.

*/

//Multiple Inheritace

//class derived-class: access baseA, access baseB....

//Sample Code

#include <iostream>
 
using namespace std;

// Base class Shape
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

// Derived class
class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   area = Rect.getArea();
   
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;

   return 0;
}

//OUTPUT

/*
Total area: 35
Total paint cost: $2450
*/
