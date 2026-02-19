#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream file("data.csv");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string num1Str;
        string num2Str;
        string word;

        getline(ss, num1Str, ',');
        getline(ss, num2Str, ',');
        getline(ss, word);
        stringstream num1Stream(num1Str);
        int num1;
        num1Stream >> num1;
        stringstream num2Stream(num2Str);
        int num2;
        num2Stream >> num2;

        int total = num1 + num2;

        for (int i = 0; i < total; i++) {
            cout << word << " ";
        }
        cout << "---- File Output ----" << endl;
}

    file.close();
    return 0;
}   

///To run this use the command g++ lab.cpp -o lab.exe
///lab.exe