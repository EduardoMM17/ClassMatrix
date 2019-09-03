#ifndef P1_MATRIX_H
#define P1_MATRIX_H

#include <vector>
#include <ctime>

using std::vector;

class Matrix {
private:
    int rows, columns;
    vector<vector<int> > mMatrix;
public:
    Matrix(int, int);
    class Proxy{
    public:
        Proxy(vector<int> array) : array(array){};
        int operator[](int);
    private:
        vector<int> array;
    };
    void fillMatrix(int);
    void showMatrix();
    Matrix operator+(const Matrix&);
    Matrix operator*(const Matrix&);
    Matrix operator*(int);
    Proxy operator[](int);
    void transpose();
};


#endif //P1_MATRIX_H
