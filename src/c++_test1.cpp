

//============================================================================
// Name        : c++_test1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "foo.h"
using namespace std;


//class Box {
//    static int objectCount;
//
//   public:
//      double length;   // Length of a box
//      double breadth;  // Breadth of a box
//      double height;   // Height of a box
//
//      Box(double l = 2, double b= 2, double h =2)
//      {
//    	  length = l;
//    	  breadth = b;
//    	  height = h;
//    	  objectCount++;
//    	  cout << "box is created"<< endl;
//      }
//
//      double getVolume(void)
//      {
//		 return length * breadth * height;
//      }
//      void setLength(double len)
//      {
//    	  length = len;
//      }
//      void setBreadth( double bre )
//      {
//    	  breadth = bre;
//      }
//      void setHeight( double hei )
//      {
//    	  height = hei;
//      }
//
//      static void counterAdd()
//      {
//    	  objectCount++;
//      }
//      static void setObjectCounter(int v)
//      {
//    	  objectCount = v;
//      }
//      static int getObjectCount()
//      {
//    	  return objectCount;
//      }
//};

int Box::objectCount = 4;

int main() {
//    Box::setObjectCounter(100);
   Box Box1(1,1,100);        // Declare Box1 of type Box
   Box Box2(3,3,3);        // Declare Box2 of type Box
   Box *boxPointer;

   boxPointer = &Box1;
   // box 1 specification
//      Box1.setLength(5.0);
//      Box1.setBreadth(5.0);
//      Box1.setHeight(7);

      // box 2 specification
//      Box2.setLength(10);
//      Box2.setBreadth(12);
//      Box2.setHeight(13);

   // volume of box 1
   cout << "Volume of Box1 : " << boxPointer->getVolume() <<endl;
   cout << "objectCount  : " << Box::getObjectCount() <<endl;


   // volume of box 2
   cout << "Volume of Box2 : " << Box2.getVolume() <<endl;
   return 0;
}
