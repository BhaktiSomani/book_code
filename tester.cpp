#include <iostream>
#include "book.h"
#include "book.cpp"
using namespace std;

int main(){
  book b1 = new book(500,"newbook",500);
  double bill = b1.calbill();
  cout<<"Bill: "<<bill;
  	
}
