/*
 * foo.h
 *
 *  Created on: 10 Aug 2018
 *      Author: user-pc
 */

#ifndef FOO_H_
#define FOO_H_
#define MAX_ARRAY_LENGTH 20

int foo(int x);


class Box {
    static int objectCount;

   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box

      Box(double, double, double);

      double getVolume(void);

      void setLength(double len);
      void setBreadth( double bre );
      void setHeight( double hei );

      static void counterAdd();
      static void setObjectCounter(int v);
      static int getObjectCount();
};





#endif /* FOO_H_ */

