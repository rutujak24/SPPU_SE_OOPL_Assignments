/*
NAME : RUTUJA KAWADE
 ROLL NO : 21230
ASSIGNMENT 9

Write a C++ program using command line arguments to search for a word 
in a file and replace it with the specified word. The usage of the program is 
shown below.
$ change <old word> <new word> <file name>
*/

#include <iostream>
#include <fstream>
#include <string>

using namesapce std;

int main(){
    istream readFile("test.txt");
    string readout,
           search,
           firstname,
           lastname;

    cout << "Enter the id which you want to modify";
    cin >> search;

    while(getline(readFile,readout)){
        if(readout == search){
            /*
                id remains the same
                But the First name and Last name are replaced with
                the user `firstname` and `lastname` input
            */
            cout << "Enter new First name";
            cin >> firstname;

            cout << "Enter Last name";
            cin >> lastname;  
        }
    }
}  