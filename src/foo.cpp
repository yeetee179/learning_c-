#include <iostream>
#include "foo.h"
using namespace std;




      Box::Box(double l = 2, double b= 2, double h =2)
      {
    	  this->length = l;
    	  this->breadth = b;
    	  this->height = h;
    	  objectCount++;
    	  cout << "box is created"<< endl;
      }



      double Box::getVolume(void)
      {
		 return this->length * this->breadth * this->height;
      }
      void Box::setLength(double len)
      {
    	  this->length = len;
      }
      void Box::setBreadth( double bre )
      {
    	  this->breadth = bre;
      }
      void Box::setHeight( double hei )
      {
    	  this->height = hei;
      }

      void Box::counterAdd()
      {
    	  Box::objectCount++;
      }
      void Box::setObjectCounter(int v)
      {
    	  Box::objectCount = v;
      }
      int Box::getObjectCount()
      {
    	  return Box::objectCount;
      }
