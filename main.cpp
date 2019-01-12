#include <iostream>
#include <string>

enum class Animal {
  ANIMAL_PIG,
  ANIMAL_CHICKEN,
  ANIMAL_GOAT,
  ANIMAL_CAT,
  ANIMAL_DOG,
  ANIMAL_OSTRICH
};

std::string getAnimalName(Animal animal) {
  switch(animal) {
    case Animal::ANIMAL_PIG:
      return "pig";
      break;
    case Animal::ANIMAL_CHICKEN:
      return "chicken";
      break;
    case Animal::ANIMAL_GOAT:
      return "goat";
      break;
    case Animal::ANIMAL_CAT:
      return "cat";
      break;
    case Animal::ANIMAL_DOG:
      return "dog";
      break;
    case Animal::ANIMAL_OSTRICH:
      return "ostrich";
      break;
    default:
      return "Animal not found";
  }
}

void printNumberOfLegs(Animal animal) {
  std::cout << getAnimalName(animal) << " has ";
  switch(animal) {
    case Animal::ANIMAL_PIG:
    case Animal::ANIMAL_GOAT:
    case Animal::ANIMAL_CAT:
    case Animal::ANIMAL_DOG:
      std::cout << "4";
      break;
    case Animal::ANIMAL_CHICKEN:
    case Animal::ANIMAL_OSTRICH:
      std::cout << "2";
      break;
    default:
      std::cout << "???";
      break;
  }
  std::cout << " legs\n";
}

int main() {
  std::cout << "Choose a number to pick an animal:\n0: pig\n1: chicken\n2: goat\n3: cat\n4: dog\n5: ostrich" << std::endl;
  int userInput;
  std::cin >> userInput;
  Animal animal = static_cast<Animal>(userInput);

  printNumberOfLegs(animal);

  return 0;
}