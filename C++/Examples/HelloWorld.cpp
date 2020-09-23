/**
 * HelloWorld.cpp
 * 
 * This software is dual-licensed to the public domain and under the following
 *    license:
 *
 * Copyright 2020 Andrew Woo
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * Restrictions:
 >  The Software may not be sold unless significant, mechanics changing modifications are made by the seller, or unless the buyer
 >  understands an unmodified version of the Software is available elsewhere free of charge, and agrees to buy the Software given
 >  this knowledge.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 * Compiles on all major compilers.
**/

#include <iostream>           // Import standard I/O

// using namespace std;       // using namespace std; is generally seen as bad practice. (std = standard)

/*
     > int main() is the entry point of your standard C++ program. In Windows programming 
     > and other specialized programming, the entry point may have a different type.
*/
int main() {

     // cout << "Hello, bad convention! Don't use namespace std!" << endl;      // When using namespace std; indicating namespace is not required. (no need for std::)
     std::cout << "Hello, CodeHub@UGA!" << std::endl;       // Output Hello, CodeHub@UGA!, insert newline (\n), then flush output stream.

     return 0;      // main() ran successfully without errors
}
