/* ------------------------
 Nicholas Chen       
 ICS3U1-01        
 Assignment #6: Triangle Classification   
--------------------------- */

#include <iostream>
#include "triangle.h"
using namespace std;

  int main() {

    int a = 1, b = 1, c = 1 ; 

    triangleSideLengths(a,b,c);
    //terminates program when 0 0 0 entered 
   while ( a != 0 && b != 0 && c !=0 ) {  
     
     
     
  cout << endl;

    triangleSideClassification(a, b, c); 
    triangleAngleClassification(a, b, c);
  
  cout << endl;
  triangleSideLengths(a,b,c);
  }
  }


  