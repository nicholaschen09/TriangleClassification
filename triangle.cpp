#include <iostream>
using namespace std;


void triangleSideLengths(int &a, int &b, int &c) {
  
cout << "Enter three side lengths (enter 0 0 0 to terminate the program): ";
  
  cin >> a >> b >> c;
  
}

void triangleSideClassification(int a, int b, int c) {
  //takes care of negatives
  cout << a << " " << b << " " << c << " ";
  if (a == 0 && b == 0 && c == 0) {
    cout << " ";
  }
 else if (a < 0 || b < 0 || c < 0) {
   cout << "This triangle cannont be formed";
  }
   //takes care of side classification
  else if (a == b && b == c) {
    cout << "Possible Triangle: Equilateral ";
    }
  else if (a == c && c != b || c == b && c != a || b == a && b != c) {
    
    cout << "Possible Triangle: Iscoceles ";
    }

  else {
    cout << "Possible Triangle: Scalene ";
}
  }
  
void triangleAngleClassification(int a, int b, int c) {
//takes care of negatives
  if (a == 0 && b == 0 && c == 0) {
    cout << " ";
  }
  else if (a < 0 || b < 0 || c < 0) {
   cout << " ";
  }
//sets the biggest number to the c variable for classification
   if (a > b && a > c) {
    swap(a, c);
      }
  else if (b > a && b > c ){
    swap(b, c);
      }

  //takes care of angle classification
  if (c*c > a*a + b*b) {
    cout << "Obtuse" << endl;
  }
  else if (c*c < a*a + b*b) {
    cout << "Acute" << endl;
  }
  else if (c*c == a*a + b*b) {
   cout << "Right" << endl;
  }
}


      
