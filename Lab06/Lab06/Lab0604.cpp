/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab: #6 Assignment: 006
 * Filename: Lab0604
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


int iterative(double n){
    int x = 0;
    int y = 1;
    int nextTerm = 0;
    for (int i = 1; i < n; i++)
    {
        if(i == 1)
        {
            cout << y << " ";
            
        }
        nextTerm = x + y;
        x = y;
        y = nextTerm;
        
        cout << nextTerm << " ";
    }
    return 0;
}

int recursive(double n){
    
    if (n ==0.0){
        return 0;
    }
     if(n == 1){
            return 1;
    }
    else{
        return recursive(n - 1) + recursive(n-2);
    }
    
}

int main(){
    double n;
    cout << "Enter a number: ";
    cin >> n;
    iterative(n);
    cout << endl;
    cout<< "using rec: " << recursive(n) << endl;
}
