#include <iostream>
using namespace std;
main(){
cout <<"---------------------------------------------------------------------"<<endl;

string name;
int matric;
float matriculation;
int inter; 
float intermediate ;
int ecat; 
float test;
float Aggregate;
cout <<"Enter your name : ";
cin  >> name;
cout <<"Enter matric marks : ";
cin >> matric;

cout  <<"Enter intermediate marks:";
cin  >>inter;

cout  <<"Enter Ecat marks:";
cin >>ecat;
matriculation=(matric*100)/1100;
matriculation=(10/100)*matriculation;

intermediate=(inter*100)/550;
intermediate=(40/100)*intermediate;

ecat=(ecat*100)/400;
//test=(50/100);

cout << ecat; 

 cout <<"---------------------------------------------------------------------"<<endl;









}