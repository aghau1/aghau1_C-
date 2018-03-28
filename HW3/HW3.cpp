/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HW3.cpp
 * Author: usama
 *
 *
 */

#include <iostream>
#include <vector>
using namespace std;

/*
 * 
 */


void swap(int *a, int *b);

int main(int argc, char** argv) {



    // 4,9,2,1,3,4,7,8,5,0,6   is the input of the array 

    vector <int> input; // allocate space for 11 integers 
    input.reserve(11);
    int x = 492134; // the input array broken into two ints bc of size 
    int x2 = 78506;


    for (int i = x2; i > 0; i = i / 10) { // store the second part of the array 

        input.push_back(x2 % 10);
        x2 = x2 / 10;

    }
    for (int i = x; i > 0; i = i / 10) { // store the first part of the array into vector input 

        input.push_back(x % 10);
        x = x / 10;
    }

    cout << "INPUT ::: " << endl << "{";
    for (int i = 0; i < input.size(); i++) { // print the input array 
        if (i != 10) {
            cout << input[i] << " , ";
        } else {
            cout << input[i] << "} " << endl;
        }
    }


    bool inorder = false;

    while (inorder == false) {
        
        
        int check_for_order = 0; /// THis integer will be used to count how many elements are out of order 
        bool swapped = false; // used to print output only when there is a swap 

        for (int i = 0; i < input.size() - 1; i++) { // create i to cover range from first to before last element

            if (input[i] - input[i + 1] > 0) { // check if the next element is smaller than the current element 
                swap(&input[i], &input[i + 1]); //swap the two elements if not in order 
                swapped = true;
            }

            if (swapped == true) {
                cout << "OUTPUT " << endl; // print out the result after every swap 
                cout << "{";
                for (int i = 0; i < input.size(); i++) { // print the input array 
                    if (i != 10) {
                        cout << input[i] << " , ";
                    } else {
                        cout << input[i] << "} " << endl;
                    }
                }
                swapped = false;
            }

        }




        for (int i = 0; i < input.size() - 1; i++) { // count how many elements are not in order 
            if (input[i] - input[i + 1] > 0) {
                check_for_order++;
            }


        }
        cout << endl << endl << " # of elements out of order ::: " << check_for_order << endl << endl; // was used for analysis prints how many elements not in order 
        if (check_for_order == 0) { // if # of elements not in order is = 0 then all elements are arranged in order and goal is achieved 
            inorder = true;
        }

       
    }


    
    
    
    
    
// int c = 10;
//        int *a = &c;
//        int &b = c;
//        
//        cout <<*a << endl;
//        cout << b << endl;
//        cout << c << endl;


    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}