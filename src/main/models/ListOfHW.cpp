#include "HW.cpp"
#include <list>
using namespace std;

class ListOfHW
{
private:
    list<HW> List = list<HW>;
    HW get_at_position(int i)
    {
        list<HW>::iterator it = this->List.begin();
        advance(it, i - 1);
        return *it;
    }
    list<HW>::iterator get_at_position(int i, bool x)
    {
        list<HW>::iterator it = this->List.begin();
        advance(it, i - 1);
        return it;
    }

public:
    list<HW> GetList()
    {
        list<HW> temp(this->List);
        return temp;
    }
    add_HW(HW h)
    {
        this->List.push_back(h);
    }
    del_HW(int del)
    {
        list<HW>::iterator tempvar = get_at_position(del, false);
        this->List.erase(tempvar, tempvar);
    }
    bool isnull()
    {
        return this->List.size() == 0;
    }
};
