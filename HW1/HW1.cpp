
#include <iostream>

using namespace std;

/*
 * 
 */

int a; //first integer input 
int b; //second integer input

char op; // operation char 



void getOperation(char* op);

void add(int* a, int*b);
void subtract(int* a, int*b);
void multiply(int* a, int*b);
void devide(int* a, int*b);

int main() {

    while (1) {

        cout << "Enter the first number:: ";
        cin >> a;
        cout << a << endl;


        getOperation(&op);

        cout << "Enter the second number:: ";
        cin >> b;
        cout << b << endl;


        if (op == '*') {
            multiply(&a, &b);

        } else if (op == '-') {
            subtract(&a, &b);

        } else if (op == '+') {
            add(&a, &b);

        } else if (op == '/') {
            devide(&a, &b);
        }





    }

    return 0;


}

void add(int* a, int*b) {
    cout << endl << *a + *b << endl;

}

void subtract(int* a, int*b) {
    cout << endl << *a - *b << endl;

}

void multiply(int* a, int*b) {
    cout << endl<< *a * *b << endl;

}

void devide(int* a, int*b) {
    cout << endl<< *a / *b;
    if (*a % *b != 0) {
        cout << '.'<<*b % *a;
    }
    cout<< endl;
}

void getOperation(char* op) {
    while (*op != '*' && *op != '+' && *op != '-' && *op != '/') {
        cout << endl << "Enter the operator (+,-,/,*) :: ";
        cin >> *op;
        cout << *op << endl;
        if (*op != '*' && *op != '+' && *op != '-' && *op != '/') {
            cout << endl << "Enter a valid operator (+,-,/,*)";
        }
    }
}






