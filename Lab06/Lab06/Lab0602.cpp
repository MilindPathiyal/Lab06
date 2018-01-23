/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab: #6 Assignment: 006
 * Filename: Lab0602
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
#define PI 3.14159265

using namespace std;

int calculate(double x, double y , double z){
    
    double answer;
    answer = acos ((z*z - x*x -y*y)/(-2 * x * y)) * 180.0 / PI;
    cout << answer << endl;
    return 0;
}

bool verify(double x, double y, double z){
    
    if(x > 0 && y > 0 && z > 0){
        if(x < y + z && y < z + x && z < x + y){
            calculate(x, y, z);
            return true;
        }
    }
    cout << "Try Again" << endl;
        return false;
    
    
}
int ask(){
    double x;
    double y;
    double z;
    cout << "Enter 'a' value: ";
    cin >> x;
    cout << "Enter 'b' value: ";
    cin >> y;
    cout << "Enter 'c' value: ";
    cin >> z;
    verify(x, y, z);
    return 0;
}

int main(){
    ask();
}

