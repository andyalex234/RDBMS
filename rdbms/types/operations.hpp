#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "../util/tuples.hpp"
#include <iostream>
#include <set>

class operations{
    private:
        std::set<tuples> relation;
    public:
        std::set<tuples> union();

        std::set<tuples> intersection();

        std::set<tuples> difference();

        std::set<tuples> projection();

        std::set<tuples> selection();        

};
