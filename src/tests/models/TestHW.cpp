#include "../../main/models/HW.cpp"

string name1 = "Bhiya ko tang karna";
string name2 = "Bhiaya ko taang karna";
int num1 = 0;
int num2 = 200;
string date1 = "2015-10-10";
string date2 = "2015-01-01";

HW test1 = HW("Bhiya ko tang karna", 0, "2015-10-10");
HW test2 = HW("Bhiaya ko taang karna", 200, "2015-01-01");

if (test1.getNum() != num1){ cout << "test failed" << endl;}
if (test1.getName() != name1){cout << "test failed" << endl;}
if (test1.getDate_due() != date1){cout << "test failed" << endl;}
if (test2.getNum() != num2){cout << "test failed" << endl;}
if (test2.getName() != name2){cout << "test failed" << endl;}
if (test2.getDate_due() != date2){cout << "test failed" << endl;}