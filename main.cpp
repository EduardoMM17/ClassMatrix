#include <iostream>
#include <cassert>
#include "Matrix.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    srand(time(NULL));
    /* For the asserts
     * m1 = [1 2;3 4] ; means change of row
     * m2 = [1 2; 3 4]
     * Choose fill option 1 in both matrix*/
    int rows, columns, fillOption;
    cout <<"Choose fill option, press 0 if you want random numbers in the matrix or 1 to input: \n";
    cin >> fillOption;

    cout <<"Enter data for the first Matrix: " << endl;
    cout <<"Number of rows: "; cin >> rows;
    cout <<"Number of columns: "; cin >> columns;
    Matrix m1(rows,columns);
    m1.fillMatrix(fillOption);

    cout <<"Enter data for a second Matrix: " << endl;
    cout <<"Number of rows: "; cin >> rows;
    cout <<"Number of columns "; cin >> columns;
    Matrix m2(rows,columns);
    m2.fillMatrix(fillOption);

    //Matrix sum assert
    Matrix m3 = m1+m2;
    assert(m3[1][0]==6);
    //

    //Matrix scalar multiplication
    Matrix m4 = m3*2;
    assert(m4[0][1] == 8);
    //

    //Matrix multiplication
    Matrix m5 = m1*m2;
    assert(m5[0][0] == 7);
    //

    //Matrix transpose
    m5.transpose();
    assert(m5[1][1] == 22);
    //

    cout <<"Printing all the matrixes: \n";
    cout <<"Matrix 1: \n";
    m1.showMatrix();
    cout <<"Matrix 2: \n";
    m2.showMatrix();
    cout <<"Matrix 3: \n";
    m3.showMatrix();
    cout <<"Matrix 4: \n";
    m4.showMatrix();
    cout <<"Matrix 5: \n";
    m5.showMatrix();

    return 0;
}