/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bignumber_adder .cpp
 * Author: usama
 *
 * Created on February 14, 2018, 7:15 PM
 */

/// adds two big positive numberrs 


#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    string a = "";
    string b = "";
    

    bool remain = true;

    cin >> a;
    cout << a << endl;
    int x = a.size();


    cin >> b;
    cout << b << endl;
    
    if (x <= b.size()) {
        x = b.size();
    }
    char A_char[x + 1];
    char B_char[x + 1];

    int A_int[x + 1];
    int B_int[x + 1];

    int carry [x + 1];
    int res[x + 1];

    for (int i = 0; i < x + 1; i++) {
        A_int[i] = 0;
        B_int[i] = 0;
        res[i] = 0;
        carry[i] = 0;
    }



    cout << "A_INT" << endl;
    int c = x;

    for (int i = a.size() - 1; i >= 0; i--) {

        A_char[c] = a.at(i);
        A_int[c] = A_char[c] - '0';
        c--;
    }

    for (int i = 0; i < x + 1; i++) {
        cout << A_int[i] << endl;
    }
    
    cout << endl << "B_INT" << endl;
    c = x;
    for (int i = b.size() - 1; i >= 0; i--) {
        
        B_char[c] = b.at(i);
        B_int[c] = B_char[c] - '0';
        c--;
    }
    for (int i = 0; i < x + 1; i++) {
        cout << B_int[i] << endl;
    }
    
    
    cout << endl << " INP DONE " << endl;
    
    for (int i = 0; i < x + 1; i++) {
        res[i] = A_int[i] + B_int[i];
    }


    cout << endl << "RESULTS ADDED " << endl;
    for (int i = 0; i < x + 1; i++) {
        cout << res[i] << endl;
    }



    for (int i = 0; i < x + 1; i++) {

        carry[i] = res[i] / 10;
        res[i] = res[i] % 10;


    }

    cout << endl << "RESULTS " << endl;
    for (int i = 0; i < x + 1; i++) {
        cout << res[i] << endl;
    }
    cout << endl << "RESULTS " << endl;
    cout << endl << "RESULTS " << endl;




    cout << endl << "CARRY ::  " << endl;




    for (int i = 0; i < x + 1; i++) {
        cout << carry[i] << endl;
        if (carry[i] == 1) {

            remain = true;
        }
    }

    while (remain == true) {
        int Shifted_carry [x + 2];
        for (int i = 0; i < x + 2; i++) {
            Shifted_carry[i] = 0;

        }
        for (int i = 0; i < x + 1; i++) {
            Shifted_carry[i] = carry[i];

        }


        for (int i = 0; i < x + 1; i++) {
            res[i] = Shifted_carry[i + 1] + res[i];
        }

        for (int i = 0; i < x + 1; i++) {

            carry[i] = res[i] / 10;
            res[i] = res[i] % 10;
            if (carry[i] == 1) {
                remain = true;
            } else {
                remain = false;
            }
        }


    }
    if (res[0] == 0) {
        for (int i = 1; i < x + 1; i++) {
            cout << res[i];

        }
    } else {
        for (int i = 0; i < x + 1; i++) {
            cout << res[i];

        }
    }



}
