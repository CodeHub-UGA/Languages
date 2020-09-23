# About
[C++][cpp-wiki] is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, and is currently maintained by the [ISO C++][isocpp] [Standards Committee][isocpp-committee] called WG21 (ISO/IEC JTC1/SC22 WG21). C++ is generally used when efficiency and speed is absolutely critical; for example, in financial applications and processing large amounts of data. Unlike languages like Java (managed/interpreted) and Python (dynamic/interpreted), C++ is a native language, and thus requires a separate compiler for every envorinment. A list of C++ compilers can be found [here][cpp-compilers].

Despite being hated by a large group of developers, C++ is still among the most popular languages to be used, rated as the 4th most popular by TIOBE (www.tiobe.com):


<br><br>![tiobepop]

As of September 2020, [C++ is the fastest growing language][growth], despite being one of the oldest (not to mention one of the most hated).

<br>

# C++ Tutorials, Resources, Refrences, etc.
- Tutorials
   - [How to Learn the C and C++ Languages: The Ultimate Guide](https://www.toptal.com/c/the-ultimate-list-of-resources-to-learn-c-and-c-plus-plus)
   - [C++ Programming All-in-One Tutorial Series (10 HOURS!) YouTube](https://www.youtube.com/watch?v=_bYFu9mBnr4)
   - http://www.cplusplus.com/doc/tutorial/
   - http://winprog.org/tutorial/ (Win32, not core C++)
   - https://github.com/jesyspa/linear-cpp
- Resources
   - [ISO C++](https://isocpp.org/)
   - [C++ Core Guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
   - [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
   - [CppCon YouTube](https://www.youtube.com/user/CppCon)
   - [Stack Overflow (without which no list is complete)](https://stackoverflow.com/questions/tagged/c%2b%2b)
   - [Basic Online C++ Compiler](http://cpp.sh/)
   
- References (bookmark these!~)
   - https://en.cppreference.com/w/
   - http://www.cplusplus.com/reference/

# IDEs
Disclaimer: This section only lists proper IDEs (integrated development environments). Popular text editors such as Visual Code has thus been excluded.
|     IDE     | Windows? | Linux/Unix? | OSX? | Free Edition? | Link |
|:-----------:|:--------:|:-----------:|:----:|:-------------:|:---------------------------------:|
|Visual Studio|  ![yes]  |    ![no]    |![yes]|    ![yes]     |https://visualstudio.microsoft.com/|
|Code::Blocks |  ![yes]  |   ![yes]    |![no] |    ![yes]     |http://www.codeblocks.org/downloads/26/|
|    Xcode    |  ![no]   |    ![no]    |![yes]|    ![yes]     |https://developer.apple.com/xcode/|
|    CLion    |  ![yes]  |   ![yes]    |![yes]|    ![yes]     |https://www.jetbrains.com/clion/download/|
| QT Creator  |  ![yes]  |   ![yes]    |![yes]|    ![yes]     |https://www.qt.io/product/development-tools|

##### Recommended (Windows, Mac OS X): #1. Visual Studio, #2. CLion, #3. Xcode. On Linux, use GCC/G++ with Visual Code
##### Note: Visual Studio is the most popular IDE among C++ developers. I highly recommend using it, despite the fact that it is extremely large. You may regret using other IDEs when you start getting into more advanced things.

<br>

# Popular C++ Compilers

| Compiler |  Developer  | Windows? | Linux/Unix? | OSX? | C++11? | C++14? |  C++17?  | C++20? |
|:--------:|:-----------:|:--------:|:-----------:|:----:|:------:|:------:|:--------:|:------:|
|  GCC/G++ | GNU Project |  ![yes]  |   ![yes]    |![yes]| ![yes] | ![yes] |  ![yes]  | *      |
|   MSVC   |  Microsoft  |  ![yes]  |   ![yes]    |![yes]| ![yes] | ![yes] |  ![yes]  | *      |
| Intel C++|    Intel    |  ![yes]  |   ![yes]    |![yes]| ![yes] | ![yes] |![partial]| *      |
|  Clang   |LLVM Project |  ![yes]  |   ![yes]    |![yes]| ![yes] | ![yes] |  ![yes]  | *      |
|  MinGW   |MinGW Project|  ![yes]  |   ![no]     |![no] | ![yes] | ![yes] |  ![yes]  | *      |

<br><sup>*Unreleased</sup>

<br>

# Examples of C++ uses:
C++ is an extremely fast language, and is often the best choice when peak efficiency is required. Do note that major projects/applications will use a number of different languages, and not one exclusively.

- Operating Systems (partially):
   - Most kernels are written in C (not C++)
   - Windows
   - Mac OS X
   - Solaris
   - Linux
   - Android
   - iOS
   - Symbian OS (entirely in C++, discontinued 2013)
- Browsers:
   - Microsoft Edge
   - Google Chrome
   - Mozilla Firefox
   - Safari
   - Opera
- Databases:
   - MySQL DB
   - MariaDB
   - MaxDB
   - Oracle Database
   - Microsoft SQL Server
- Backends:
   - Facebook.<span></span>com
   - Amazon.<span></span>com
   - YouTube.<span></span>com
   - Spotify
- Games:
   - Most game engines (Unity, Unreal, Source, EA, etc.)
   - Doom III
   - Minecraft: Bedrock Edition
   - StarCraft
   - World of Warcraft
- Miscellaneous Applications:
   - Adobe Photoshop & Illustrator
   - Microsoft Office Suite
   - Bloomberg
   - Medical devices
   - Stuff in space (Mars Rovers, ISS, James Webb Telescope)
- And many others

##### Source: https://www.stroustrup.com/applications.html, https://boosthigh.com/10-extremely-powerful-apps-written-in-cpp/, https://www.mentofacturing.com/vincent/implementations.html




[cpp-wiki]: https://en.wikipedia.org/wiki/C%2B%2B
[isocpp]: https://isocpp.org/
[isocpp-committee]: https://isocpp.org/std/the-committee
[cpp-compilers]: https://en.wikipedia.org/wiki/List_of_compilers#C++_compilers
[yes]: https://img.shields.io/badge/-yes-brightgreen
[partial]: https://img.shields.io/badge/-partial-yellow
[no]: https://img.shields.io/badge/-no-red
[growth]: https://www.techrepublic.com/article/c-is-now-the-fastest-growing-programming-language/
[tiobepop]: ./tiobepopular.png
