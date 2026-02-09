#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

// TODO write your enum class here

enum class Species {DOG, PIG, CAT, BUNNY, UNKNOWN};

void greet(Species species)
{
  if (species == Species::DOG)
  {
    cout << "[Dog] Woof woof" << endl;
  }
  else if (species == Species::PIG)
  {
    cout << "[Pig] Oink oink" << endl;
  }
  else if (species == Species::CAT)
  {
    cout << "[Cat] (silence)" << endl;
  }
  else if (species == Species::BUNNY)
  {
    cout << "[Bunny] (silence)" << endl;
  }
  else
  {
    cout << "Hmm, what kind of animal is that?" << endl;
  }
}


// TODO: change the main function, such that it uses the enum class
int main()
{
  Species first_pet_species{ Species::BUNNY };
  Species second_pet_species{ Species::DOG };
  Species third_pet_species{ Species::PIG };
  Species fourth_pet_species{ Species::CAT };
  Species fifth_pet_species{ Species::UNKNOWN }; // a sheep shall be an unknown species in this example
  
  greet(first_pet_species);
  greet(second_pet_species);
  greet(third_pet_species);
  greet(fourth_pet_species);
  greet(fifth_pet_species);
  
  return 0;
}
