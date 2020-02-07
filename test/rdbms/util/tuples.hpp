#include "cell.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>

using namespace std;

class tuples {
    private:
        int num_of_elements;
        set<set<cell>> elements;

    public:
        static bool isEqual(tuples tup1, tuples tup2);
        tuples();
        tuples(cell elm1, cell elm2);
        set<set<cell>> get_elements();
        cell get(int index);
};