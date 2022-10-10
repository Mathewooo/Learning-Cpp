#include <iostream>
#include "../fmt/core.h"

using namespace std;
using namespace fmt;

namespace code {
    void foo() {
        cout << "foo() called from the 'code' namespace" << endl;
    }
}

namespace Libs::Networking::FTP { //Nested namespace
    void FTP() {
        cout << "FTP!" << endl;
    }
}

namespace FTP = Libs::Networking::FTP; //Namespace alias
//Can be used to give a new and possibly shorter name to another namespace

int main() {
    int age;
    cin >> age; // 'cin' Used to get input from user
    cout << format("I'm {} years old.", age) << endl; // 'cout' Used to print messages, 'endl' used to end line
    // Don't use 'endl' in loop! As it can harm performance because it automatically flushes the buffers every time
    // (rather use '\n' in loops)
    code::foo(); // '::' - this operator is called: scope resolution operator
    //You can also avoid prepending of namespaces with a 'using' directive (example at top of the program)
    FTP::FTP();
    return 0;
}