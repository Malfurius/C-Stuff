#include "Card.h"

std::vector<CardSuitType> Card::types;
std::vector<CardValueType> Card::values;



Card::Card() :
	suit(suit),
	value(value) {
}

Card::Card(CardValueType value, CardSuitType suit) :
	suit(suit),
	value(value) {
}
void Card::initTypes()
{
	types.clear();
	values.clear();
	types = { kHearts,kDiamonds,kClubs,kSpades };
	for (int i = 1; i < 14; i++)
		values.push_back(static_cast<CardValueType>(i));
}

std::ostream & operator<<(std::ostream & s, const Card& card) {
	s <<(std::int32_t) card.suit << "|" << (std::int32_t) card.value;
	return s;
}

std::string & toString(std::string & s, const Card & card) {
	toString(s, card.value);
	s.append(" of ");
	toString(s, card.suit);

	return s;
}

std::string & toString(std::string & s, const CardSuitType suit) {
	switch (suit) {
	case CardSuitType::kHearts:
		s.append("Hearts");
		break;
	case CardSuitType::kDiamonds:
		s.append("Diamonds");
		break;
	case CardSuitType::kClubs:
		s.append("Clubs");
		break;
	case CardSuitType::kSpades:
		s.append("Spades");
		break;
	default:
		break;
	}
	return s;
}

std::string & toString(std::string & s, const CardValueType value) {
	switch (value)
	{
	case CardValueType::kAce:
		s.append("Ace");
		break;
	case CardValueType::kTwo:
		s.append("2");
		break;
	case CardValueType::kThree:
		s.append("3");
		break;
	case CardValueType::kFour:
		s.append("4");
		break;
	case CardValueType::kFive:
		s.append("5");
		break;
	case CardValueType::kSix:
		s.append("6");
		break;
	case CardValueType::kSeven:
		s.append("7");
		break;
	case CardValueType::kEight:
		s.append("8");
		break;
	case CardValueType::kNine:
		s.append("9");
		break;
	case CardValueType::kTen:
		s.append("10");
		break;
	case CardValueType::kJack:
		s.append("Jack");
		break;
	case CardValueType::kQueen:
		s.append("Queen");
		break;
	case CardValueType::kKing:
		s.append("King");
		break;
	default:
		break;
	}
	return s;
}
