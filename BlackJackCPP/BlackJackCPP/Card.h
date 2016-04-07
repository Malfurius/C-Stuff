#pragma once

#include <iostream>
#include <string>
#include <vector>

enum CardSuitType {
	kHearts,
	kDiamonds,
	kClubs,
	kSpades
};

enum CardValueType {
	kAce = 1,
	kTwo,
	kThree,
	kFour,
	kFive,
	kSix,
	kSeven,
	kEight,
	kNine,
	kTen,
	kJack,
	kQueen,
	kKing,
};

class Card {
public:
	Card();
	Card(CardValueType value, CardSuitType suit);

	static void initTypes();

	static std::vector<CardSuitType> types;
	static std::vector<CardValueType> values;

	CardSuitType suit;
	CardValueType value;
};

std::ostream& operator<< (std::ostream&, const Card&);
std::string& toString(std::string&, const Card&);
std::string& toString(std::string&, const CardSuitType);
std::string& toString(std::string&, const CardValueType);