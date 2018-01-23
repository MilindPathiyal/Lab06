/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab: #6 Assignment: 006
 * Filename: Lab0601
 * Date submitted: 10/23/17
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */

#include <iostream>
#include <cmath>
using namespace std;

int print(double i, double j, double k, double m, double n){

    if(k > 0 || k == 0){
        cout << "Roots:_______________________" << endl;
        cout << "x1 = " << i << endl;
        cout << "x2 = " << j << endl;
    }
    else{
        cout << "Roots:_______________________" << endl;
        cout << "x1 = " << m << "+" << n << "i" << endl;
        cout << "x2 = " << m << "-" << n << "i" << endl;
    }
    return 0;
}

int quad(double a, double b, double c){
    
    double firstRoot;
    double secondRoot;
    double discriminant;
    double imaginary;
    double real;
    
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0 || discriminant == 0) {
        firstRoot = (-b + sqrt(discriminant)) / (2*a);
        secondRoot = (-b - sqrt(discriminant)) / (2*a);
        print(firstRoot, secondRoot, discriminant, real, imaginary);
    }
    
    else {
        real = -b/(2*a);
        imaginary =sqrt(-discriminant)/(2*a);
        print(firstRoot, secondRoot, discriminant, real, imaginary);
    }
    return 0;
}


int main(){
    double x;
    double y;
    double z;
    cout << "Enter 'a' value: ";
    cin >> x;
    cout << "Enter 'b' value: ";
    cin >> y;
    cout << "Enter 'c' value: ";
    cin >> z;
    quad(x, y, z);
    
}


