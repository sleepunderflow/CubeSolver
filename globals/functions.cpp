#include "includes.h"
#include <iostream>
using namespace std;

void showErrorMessage(string message)
{
    cout << "[\x1b[1;31mError\x1b[0m] " << message << endl;
}