#include <string>
#include <ctime>
using namespace std;

// The HW class is the class used to represeent a seperate singular HW.
class HW
{
private:
    string name; // The name of the assignment

    int num; // The id of the saaignment. (UNIQUE)

    string date_due;// The date on which the assignment is due

public:
    HW(int num, string name, string date_due);
    string GetName() const
    {
        return name;
    };
    int GetNum() const
    {
        return num;
    };
    string GetDate_due() const
    {
        return date_due;
    }
};

// REQUIRES: a unique identifier (num)
// EFFECTS:  the valuse for num, name, date_due & date_assigned are assigned.
HW::HW(int num, string name, string date_due)
{
    this->num = num;
    this->name = name;
    this->date_due = date_due;
}
