#include "Card.h"

#include <iostream>
#include <vector>
#include "Deck.h"

int main() {
	Deck d;

	std::cout << toString(std::string(), d);

	return 0;
}