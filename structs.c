// Create a struct that has at least 2 data members, one must be a string.
// You can provide struct prototypes outside of functions.
// Don't just combine random things, make it meaningful (like food and price, athlete and associated statistic, Pokemon and something about Pokemon ..)

// This should not return the same values every time.


// Write a main function that tests all these things.
// Have meaningful output.
// DONT FORGET A MAKEFILE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "structs.h"
struct villager {
  char* name; int id;
};


// srand( time(NULL) );
// srand(<SEED>) seeds the random number generator with the provided argument.
// If you use the same argument to srand() multiple times, you will get the exact same sequence of random numbers.
// time(NULL) will return the current EPOCH time, it is commonly used with srand() to get new random sequences.
// Getting a random number
// int x = rand();
// Returns the next random number in the sequence seeded by srand().
// Returns an int.
// srand() and rand() are both in <stdlib.h>
// time() is in <time.h>

// Write a function that returns an example of your struct when run.
struct villager examplevillager(){
  srand(time(NULL));
  char* names[] = {"Al", "Bert", "Carrie", "Dorothy", "Ellie", "Felix", "Zoe", "Yi", "Xin"};
  int x = rand() * 1000 + 1;
  printf("Ex: \n name: %s | id: %d\n\n", names[x % 10], x);
  struct villager v;
  v.name = names[x % 10];
  v.id = x;
  return v;
}

// Write a function that prints out variables of your structs type in a reasonable way.
struct villager printvillager(struct villager v){
  printf("name: %s \t| id: %d\n", v.name, v.id);
  return v;
}
//
// // Write a function that modifies values of your struct's type.
// struct villager changevillager(struct villager v; char* str; int i){
//   struct villager *p = &a;
//   printf("Old name: %s\n", v.name);
//   (*p).name = str;
//   printf("New name: %s\n", v.name);
//
//   printf("Old id: %d\n", v.id);
//   (*p).id = w;
//   printf("New id: %d\n", v.id);
//   return a;
// }
