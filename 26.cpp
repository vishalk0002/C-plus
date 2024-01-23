// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//      int a, b;

// public:
//      void setData(int real, int imag)
//      {
//           a = real;
//           b = imag;
//      }

//      void showData()
//      {
//           cout << a << " + " << b << "i" << endl;
//      }

//      Complex add(Complex c)
//      {
//           Complex result;
//           result.a = a + c.a;
//           result.b = b + c.b;
//           return result;
//      }
// };

// int main()
// {
//      // create two complex numbers
//      Complex c1, c2;  //object

//      // set their values
//      c1.setData(2, 3);
//      c2.setData(4, -5);

//      // display their values
//      c1.showData(); // prints "2 + 3i"
//      c2.showData(); // prints "4 - 5i"

//      // add them together and display the result
//      Complex result = c1.add(c2);
//      result.showData(); // prints "6 - 2i"

//      return 0;
// }

// /*Define a class Time to represent a time with instance variables h, m and s to store hour,
//     minute and second.Also define following member functions
//         a.void
//          void setTime(int, int, int)
//             b.void showTime()
//                 c.void normalize()
//                     d.Time add(Time)  */

// #include <iostream>
// using namespace std;

// class Time
// {
// private:
//      int h, m, s;

// public:
//      Time()
//      {
//           // h = 0;
//           // m = 0;
//           // s = 0;
//      }

//      void setTime(int hour, int minute, int second)
//      {
//           h = hour;
//           m = minute;
//           s = second;
//      }

//      void showTime()
//      {
//           cout << h << ":" << m << ":" << s << endl;
//      }

//      void normalize()
//      {
//           int extra_mins = s / 60;
//           s = s % 60;
//           m = m + extra_mins;
//           int extra_hours = m / 60;
//           m = m % 60;
//           h = (h + extra_hours) % 24;
//      }

//      Time add(Time other)
//      {
//           Time result;
//           result.s = s + other.s;
//           result.m = m + other.m;
//           result.h = h + other.h;
//           result.normalize();
//           return result;
//      }
// };

// int main()
// {
//      Time t1, t2, t3;

//      t1.setTime(9, 30, 45);

//      t1.showTime();
//      t1.normalize();

//      t2.setTime(1, 15, 0);
//      t2.showTime();

//      t3 = t1.add(t2);
//      t3.showTime();
//      return 0;
// }

// class Cube and calculate Volume of Cube and initialise using constructor
// voiume of cube =  l * b * h

// #include<iostream>
// using namespace std;
// class Cube
// {
//         int  l;
//         int b;
//         int h;
//         int re;
//         public:

//         Cube(int length , int breadth , int height)
//         {
//           l = length;
//           b = breadth;
//           h = height;

//         }

//          void volume()

//         {

//          re = l * b * h;
//          cout << " the volume of cube of length = " << l << " breadth = " <<b << " and height = " <<h << " is : " << re <<endl;

//         }
//         ~Cube()
//         {
//            cout << " the constructor is called " << endl;
//         }
// };

// int main()
// {
//    Cube c( 65,75,88);
//    c.volume();
//    return 0;
// }

// 04.Define a class Counter and Write a program to Show Counter using Constructor

    // #include<iostream>
    // using namespace std;
    // class Counter
    // {
    //      static  int count;

    //     public:
    //     Counter()
    //     {
    //       count++;
    //     }
    //     int get_count()
    //     {
    //       return count;
    //     }
    // };

    // int Counter::count;
    // int main()
    // {
    //   Counter c1,c2,c3 ,c4;   /*here jitna bar object bnega utna bar constructor
    //                            call hoga and utna bar count print hoga */
    //   cout << c1.get_count();
    //   cout << " \n ";
    //   return 0;
    // }

// 05. a class Date and write a program to Display Date and initialise date object using Constructors

// #include <iostream>
// using namespace std;
// class Date
// {
//      int yy;
//      int mm;
//      int dd;

// public:
//      Date(int x, int y, int z) // constructor
//      {
//           yy = x;
//           mm = y;
//           dd = z;
//      }

//      void get_date()
//      {

//           cout << " date is = " << endl
//                << yy << ":" << mm << ":" << dd;
//      }
// };

// int main()
// {

//      Date d(2002, 8, 24);

//      d.get_date();
//      return 0;
// }

/* 06 .Define a class student and write a program to enter student details using constructor and
    define member function to display all the details */

// #include<iostream>
// using namespace std;
// class Student
// {
//     int marks;
//     char grade;

//     public:

//     Student( int x , char y)
//     {

//      marks = x;
//      grade = y;

//     }

//     void show()
//     {

//      cout << "\n the marks = " << marks << endl;
//      cout << " the grade is = " << grade << endl;

//     }
// };

// int main()
// {
//  Student s1( 305,'B'), s2( 320,'A');
//  cout <<" student record  s1 = "<< endl;
//  s1.show();

//  cout << " \n student record  s2 = "<< endl;
//  s2.show();
//  return 0;

// }

/* 07. Define a class Box and write a program to enter length, breadth and height and initialise
 objects using constructor also define member functions to calculate volume of the box. */

// #include <iostream>
// using namespace std;
// class Box
// {
//      int length;
//      int breadth;
//      int height;
//      int volume;

// public:
//      Box(int x, int y, int z) // constructor
//      {
//           length = x;
//           breadth = y;
//           height = z;
//      }

//      int calculatevo() // member function
//      {
//           volume = length * breadth * height;
//           return volume;
//      }
// };

// int main()
// {

//      Box b1(4, 5, 6);
//      Box b2(5, 7, 9);
//      cout << " the dimension of box b1 = " << b1.calculatevo() << endl;

//      cout << " the dimension of box2 = " << b2.calculatevo() << endl;

//      return 0;
// }

/*08. Define a class Bank and define member functions to read principal, rate of interest and
 year.Another member functions to calculate simple interest and display it.Initialise all details using constructor.*/

// #include <iostream>
// using namespace std;
// class Bank
// {

//      float p;
//      float r;
//      float t;
//      float si;
//      float amount;

// public:
//      void get_details()
//      {
//           cout << " \n enter the principle : ";
//           cin >> p;
//           cout << " \n enter  the rate of interest : ";
//           cin >> r;
//           cout << " \n enter the years : ";
//           cin >> t;
//      }

//      void calculate_data()
//      {
//           si = (p * r * t) / 100;
//           amount = si + p;
//      }

//      void show_data()
//      {

//           cout << " \n  the simple interest is = " << si << endl;
//           cout << "\n  the total amounr after adding interst = " << amount << endl;
//      }
// };

// int main()
// {

//      Bank bank;
//      bank.get_details();
//      bank.calculate_data();
//      bank.show_data();
//      return 0;
// }

/* 09 .Define a class Bill and define its member function get() to take detail of customer,
    calculateBill() function to calculate electricity bill using below tariff : Upto 100 unit RS .1.20 per unit
                                                                                From 100 to 200 unit RS .2 per unit
                                                                                Above 200 units RS .3 per unit */

// #include <iostream>
// using namespace std;                                                                             
// class Bill
// {
// private:
//     char customerName;
//     int unitsConsumed;

// public:
//     void get()
//     {
//         cout << "Enter customer name: ";
//         cin>>customerName;
//         cout << "Enter units consumed: ";
//         cin >> unitsConsumed;
//     }

//     double calculateBill()
//     {
//         double billAmount;
//         if (unitsConsumed <= 100)
//         {
//             billAmount = unitsConsumed * 1.20;
//         }
//         else if (unitsConsumed <= 200)
//         {
//             billAmount = 100 * 1.20 + (unitsConsumed - 100) * 2;
//         }
//         else
//         {
//             billAmount = 100 * 1.20 + 100 * 2 + (unitsConsumed - 200) * 3;
//         }
//         return billAmount;
//     }

//     void displayBill()
//     {
//         cout << "Customer name: " << customerName << std::endl;
//         cout << "Units consumed: " << unitsConsumed << std::endl;
//         cout << "Bill amount: " << calculateBill() << std::endl;
//     }
// };

// int main()
// {
//     Bill b;
//     b.get();
//     b.displayBill();
//     return 0;
// }

/* 10 .Define a class StaticCount and create a static variable.Increment this variable in a
    function and call this 3 times and display the result*/

// #include <iostream>
//     using namespace std;

// class StaticCount
// {
// public:
//     static int count;
//     static void increment()
//     {
//         count++;
//     }
// };

// int StaticCount::count = 0;

// int main()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         StaticCount::increment();
//     }
//     cout << "Static count is: " << StaticCount::count << endl;
//     return 0;
// }


//  The end;