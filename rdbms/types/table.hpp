#include "rSchema.hpp"
#include "../util/tuples.hpp"
#include <iostream>
#include <set>

class table
{
    private:
        /* data */
        rSchema tableSpec;  // relational schema specifications of a table
        std::set<tuples> rows;    // container for the tuples of a table

    public:
        table();

        table(rSchema spec);

        std::string get_table_name();

        tuples get_attributes();

        std::set<cell> get_column(std::string attribName);

        std::set<tuples> get_rows();

        void add_row(tuples rowTuple);

        void remove_row(tuples rowTuple);
};
