#include <iostream>
#include <string>
using namespace std;

class chocolate {
public:
  // Properties (data members)
  string brand;
  int price;
  string flavour;
  
  // Function to display chocolate information
  void displayInfo() {
    cout<<"Brand:"<<brand<<endl;
    cout<<"Price:"<<price<<endl;
    cout<<"Flavour:"<<flavour<<endl;
  }
};
int main() {
   // Create objects (instances) of the chocolate class;
   chocolate A1;
   chocolate A2;
   
   // Set properties for chocolate A1
   A1.brand="Ferroro Rocher";
   A1.price=137;
   A1.flavour="Hazelnut and milk chocolate";
   
   // Set properties for chocolate A2
   A2.brand="Lindt";
   A2.price=750;
   A2.flavour="Dark chocolate with sea salt";
   
   // Display information for each student
   cout<<"A1 Information:"<<endl;
   A1.displayInfo();
   cout<<endl; // For better readability
   cout<<"A2 Information:"<<endl;
   A2.displayInfo();
   return 0;
   }