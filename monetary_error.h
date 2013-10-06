#ifndef MONETARY_ERROR_H
#define MONETARY_ERROR_H
#include <stdexcept>
#include <string>
using namespace std;

class monetary_error : public std::logic_error {

   // Constructor
   monetary_error(const string& msg) :public std::logic_error(msg) {};
};
 
#endif

