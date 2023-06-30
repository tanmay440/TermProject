#include "HW.cpp"
#include <list>
using namespace std;

class ListOfHW
{
private:
    list<HW> List;
    HW get_at_position(int i)
    {
        list<HW>::iterator it = this->List.begin();
        advance(it, i - 1);
        return *it;
    }

public:
    list<HW> GetList()
    {
        list<HW> temp(this->List);
        return temp;
    }
    add_HW(HW)
    {
        this->List.push_back(HW);
    }
    del_HW(int del)
    {
        this->List.remove(get_at_position(del))
    }
};
