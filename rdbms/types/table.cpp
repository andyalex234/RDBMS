#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "../util/tuples.hpp"
#include <iostream>
#include <set>
// using namespace std;

// constructor
table::table() {
}

table::table(rSchema spec) {
    this->tableSpec = spec;
};

// getter methods
std::string table::get_table_name() {
    return this->tableSpec.get_name();
}

tuples table::get_attributes() {
    return this->tableSpec.get_attributes();
}

std::set<cell> table::get_column(std::string attribName) {
    //TODO;
}

std::set<tuples> table::get_rows() {
    return this->rows;
}

void table::add_row(tuples rowTuple) {
    this->rows.insert(rowTuple);
}

void table::remove_row(tuples rowTuple) {
    this->rows.erase(rowTuple);
}
