// Defining a Structure :- 
/* struct [structure tag] = {
                              member definition;
                              member definition;
                              .....
                              
                              }[one or more structure variables]
                              
                              
                             
 e.g)
 struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book; 

*/

// Accessing Structure Members :-
//Sample Code

#include <iostream>
#include <cstring>
 
using namespace std;
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main() {
   struct Books Book1;        // Declare Book1 of type Book
   struct Books Book2;        // Declare Book2 of type Book
 
   // book 1 specification
   strcpy( Book1.title, "BumBum");
   strcpy( Book1.author, "Apurva Shrivastava"); 
   strcpy( Book1.subject, "How to be the best");
   Book1.book_id = 143;

   // book 2 specification
   strcpy( Book2.title, "Queen");
   strcpy( Book2.author, "Strawberry Champagne");
   strcpy( Book2.subject, "Royalty");
   Book2.book_id = 1433;
 
   // Print Book1 info
   cout << "Book 1 title : " << Book1.title <<endl;
   cout << "Book 1 author : " << Book1.author <<endl;
   cout << "Book 1 subject : " << Book1.subject <<endl;
   cout << "Book 1 id : " << Book1.book_id <<endl;

   // Print Book2 info
   cout << "Book 2 title : " << Book2.title <<endl;
   cout << "Book 2 author : " << Book2.author <<endl;
   cout << "Book 2 subject : " << Book2.subject <<endl;
   cout << "Book 2 id : " << Book2.book_id <<endl;

   return 0;
}
