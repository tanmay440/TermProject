#include "../models/ListOfHW.cpp"
#include <iostream>
using namespace std;

print_ListOfHW(ListOfHW hw)
{
    for (HW homework : hw.GetList())
    {
        cout << homework.GetNum() << ". " << homework.GetName() << "Due On: " << homework.GetDate_due() << endl;
    }
}

int handle_choices()
{
    cout << "1. Add Assignment" << endl;
    cout << "2. Mark Assignment as done" << endl;
    cout << "3. Quit" << endl;
    cout << "Enter our Choice: " << endl;
    int choice;
    cin >> choice;
    return choice;
}

ListOfHW add_assignment(ListOfHW hw)
{
    string name;
    int num = hw.GetList().back().GetNum() + 1;
    if(num > 1000){
        num=1;
    }
    string date_due;
    cout << "Enter name of the assignment: ";
    cin >> name;
    cout << "Enter date Due: ";
    cin >> date_due;
    hw.add_HW(HW(num, name, date_due));
    return hw;
}

ListOfHW remove_assignment(ListOfHW hw)
{
    int index;
    cout << "Remove assignment no." << endl;
    cin >> index;
    hw.del_HW(index);
    return hw;
}

ListOfHW display_menu(ListOfHW hw)
{
    cout << "--------------------------------- " << endl;
    cout << "-------Homwwork Manager---------- " << endl;
    cout << "--------------------------------- " << endl;

    print_ListOfHW(hw);

    cout << endl << endl;

    int choice = handle_choices();

    if (choice == 1)
    {
        hw = add_assignment(hw);
    }
    else if (choice == 2)
    {
        hw = remove_assignment(hw);
    }
    else
    {
        return ListOfHW();
    }
    return hw;
}

mainloop()
{
    ListOfHW hw = ListOfHW();
    while (true)
    {
        ListOfHW x = display_menu(hw);
        if (x.isnull())
        {
            break;
        }
        hw = x;
    }
}

int main()
{
    mainloop();
    return 0;
}