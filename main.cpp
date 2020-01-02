/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
  ofstream file;
  file.open ("codebind.txt");
  file << " RESUME \n \n PERSONAL DETAIL \n \nName : Ankur Rajput \nFathers Name : Ashok Kumar Rajput\nMothers Name : Mithlesh  \nEMAIL ID : ankurcsc2804@gmail.com \nMobile no. : 8917877602 \nAddress : kamla sadan kannauj (u.p.) \n \nOBJECTIVE\nto  be the part of the company and to enhance my skills and knowledge\n \nEDUCATIONAL PROFILE :\nHIGH SCHOOL :\n St. xaviers high school \nHSC percent : 7.4 CGPA\nSSC percent : 86% \n \nSKILLS \n knowledge of C,C++ and java language \n begineer in machine learning \n \nACTIVITIES :\n interest in cricket  ";
  file.close();
  return 0;
}