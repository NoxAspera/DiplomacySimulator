#include <iostream>
using namespace std;

class provence
{
    private:
        string name;
        vector<string> adjacent_provences;
        bool supply_center;
        //l for land, c for coast, s for sea
        char type;
        //a for austria, e for england, f for france, g for germany, i for italy, r for russia, t for turkey, n for none
        char owner;
    
    public:
        provence(string name, vector<string> adjacent_provences, bool supply_center, char type, char owner) 
        {
            this->name = name;
            this->adjacent_provences = adjacent_provences;
            this->supply_center = supply_center;
            this->type = type;
            this->owner = owner;
        }
        void set_owner(char owner)
        {
            this->owner = owner;
        }
        char get_owner()
        {
            return this->owner;
        }
        vector<string> get_adjacent()
        {
            return this->adjacent_provences;
        }
        bool get_sc()
        {
            return this->supply_center;
        }
        char get_type()
        {
            return this->type;
        }
        string get_name()
        {
            return this->name;
        }
};

