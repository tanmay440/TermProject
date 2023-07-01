#include "../../main/models/ListOfHW.cpp"

HW test1 = HW("Bhiya ko tang karna", 0, "2015-10-10");
HW test2 = HW("Bhiaya ko taang karna", 200, "2015-01-01");

HW test3 = HW("Bhiya ko tanggg karna", 20, "2021-11-11");
HW test4 = HW("Bhiaaaya ko taang karna", 20, "2115-01-01");

ListOfHW testst1 = ListOfHW();
testst1.add_HW(test1);
testst1.add_HW(test2);

ListOfHW testst2 = ListOfHW();
testst2.add_HW(test1);
testst2.add_HW(test2);
testst2.add_HW(test3);
testst2.add_HW(test4);

list<HW> tester1 = list<HW>;
tester1.push_back(test1);
tester1.push_back(test2);

list<HW> tester2 = list<HW>;
tester2.push_back(test1);
tester2.push_back(test2);
tester2.push_back(test3);
tester2.push_back(test4);

if (testst1.GetList() != tester1)
{
    cout << "Test Falied";
}

if (testst2.GetList() != tester2)
{
    cout << "Test Falied";
}
