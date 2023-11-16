#include <sstream>
#include <string>
#include <climits>
#include <mutex>
#include <list>

#include <iostream>
#include <memory>
#include <thread>
#include <mutex>

 #include <vector>
 #include <iostream>
 using namespace std;
 
 template<typename T>
 struct SquareMatrix
 {
     int N;
     std::vector<T> data; // NxN elements of the matrix
    public:
     SquareMatrix(int n, vector<T>& d): N(n) ,data(d)
     {
            cout << "SquareMatrix::constructor" << endl;
     }
     T at(int row, int col)
     {
         if(row < 0 || row >= N || col < 0 || col >= N )
         {
             cout << "ERR: index out of range" << endl;
         }
         T val = data[row *N + col ];
         return val;
     }
     void print(std::ostream& o_stream) //print the matrix in square form
     {
         for(int i=0; i <N; ++i)
         {
             for(int j = 0; j < N; ++j)
             {
                 o_stream << at(i, j) << "  " ;
             }
             o_stream << '\n' ;
         }
     }
 };
 
 int main()
 {
     // int type vector
     vector<int> iv  = {2,3,4,5,5,6,7,8,9};
     SquareMatrix<int> sm2(3, iv);
     sm2.print(cout);
     
     vector<double> d = {2.2,3.3,65,89898,54,243132515,5,3,8,5,5,5, 45,645,5465,897};
     SquareMatrix<double> sm(4, d);
     sm.print(cout);
     
     vector<float> f = {2.2,3.3,5.5,6.6,4.4,8.8,9.9,7.9,1.2};
     SquareMatrix<float> sm1(3, f);
     sm1.print(cout);
     
     return 0;
 }
