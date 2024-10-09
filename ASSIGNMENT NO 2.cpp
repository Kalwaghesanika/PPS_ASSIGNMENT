#include<iostream>
using namespace std;

//Base class sports
class Sports {                                                                                               
  public:
          void sports() {
            cout << "I am playing a sports" << endl;
        }
};

// Derived class Teamsports (inherits from Sports)
class Teamsports : public Sports { 
    public:
        void teamsports() {
            cout << "I am playing with 11 members" << endl;
        }
};

// Derived class Criket (inherits from teamsports)
class Cricket : public Teamsports { 
    public:
        void cricket() {
            cout << "I am playing a cricket" << endl;
        }
};

int main() {
    // Create an object of class cricket
     Cricket mycricket ;

    // Call methods of cricket, Teamsports, and Sports through cricket object
    mycricket.cricket();          // cricket method
    mycricket.teamsports();  // Teamsports method
    mycricket.sports();      // Sports method

    return 0;
}