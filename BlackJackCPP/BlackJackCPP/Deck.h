#pragma once
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include "Card.h"

class Deck
{
public:
	Deck();
	~Deck();

	std::vector<Card> decklist;

	int size() const;
	void reset();
	void shuffle();

};
std::string& toString(std::string&,const Deck&);
std::string& toString(std::string&, const std::vector<Card>&);