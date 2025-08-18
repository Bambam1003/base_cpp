#include <iostream>

using namespace std;

int dataTypeInt(){

    cout << "Base Data Type Part1: int"<< endl;

    cout << "short size" << sizeof(short) << endl;
    cout << "short max value" << SHRT_MAX << endl;
    cout << "short min value" << SHRT_MIN << endl;

    cout << "int size" << sizeof(int) << endl;
    cout << "int max value" << INT_MAX << endl; 
    cout << "int min value" << INT_MIN << endl;
    
    cout << "long size" << sizeof(long) << endl;
    cout << "long max value" << LONG_MAX << endl;
    cout << "long min value" << LONG_MIN << endl;

    cout << "long long size" << sizeof(long long) << endl;
    cout << "long long max value" << LLONG_MAX << endl;
    cout << "long long min value" << LLONG_MIN << endl;

    return 0;
}

int main(){
    dataTypeInt();
    return 0;
}
