#include <iostream>

using std::cout;
using std::endl;

enum class Species {DOG, PIG, CAT, BUNNY, UNKNOWN};

// TODO: define a new data type for pets
struct Pet{
  Species animal_;
  unsigned age_;
};


void greet(Pet pet) // TODO: change the parameter; then change the function body accordingly
{
  if (pet.animal_ == Species::DOG)
  {
    cout << "[Dog] Woof woof" << endl;
  }
  else if (pet.animal_ == Species::PIG)
  {
    cout << "[Pig] Oink oink" << endl;
  }
  else if (pet.animal_ == Species::CAT)
  {
    cout << "[Cat] (silence)" << endl; // cats just ignore others...
  }
  else if (pet.animal_ == Species::BUNNY)
  {
    cout << "[Bunny] (silence)" << endl; // bunnies are not that talkative...
  }
  else if (pet.animal_ == Species::UNKNOWN)
  {
    cout << "Hmm, what kind of animal is that?" << endl;
  }
  else
  {
    // If we add new possible values to the species type, but forget to consider these values
    // in this function, we will get an error message (if the function is called with such a new value).
    cout << "ERROR: seems like we forgot to consider this species in this function" << endl;
  }
}

int main()
{
  // TODO: reduce the number of variables using the new data type
  
  Pet Bunny {Species::BUNNY, 3};
  Pet Dog {Species::DOG, 5};
  Pet Pig {Species::PIG, 0};
  Pet Cat {Species::CAT, 7};
  Pet Unknown {Species::UNKNOWN, 8};

  // TODO: update these function calls accordingly
  greet(Bunny);
  greet(Dog);
  greet(Pig);
  greet(Cat);
  greet(Unknown);
  
  return 0;
}
