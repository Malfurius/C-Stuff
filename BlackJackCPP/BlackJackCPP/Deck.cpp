#include "Deck.h"

Deck::Deck()
{
	reset();
	shuffle();
}

Deck::~Deck()
{

}

int  Deck::size() const
{
	return decklist.size();
}

void Deck::reset()
{
	decklist.clear();
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			decklist.push_back(Card(static_cast<CardValueType> (j),static_cast<CardSuitType> (i)));
		}
	}
}

void Deck::shuffle()
{
	std::random_shuffle(decklist.begin(), decklist.end());
}

std::string& toString(std::string& s, const Deck& d)
{
	std::vector<Card>::const_iterator curCardIT =d.decklist.begin();
	std::vector<Card>::const_iterator endIT = d.decklist.end();

	for (; curCardIT != endIT; curCardIT++)
	{
		toString(s, *curCardIT);
		s.append("\n");
	}
	return s;
}

std::string& toString(std::string& s, const std::vector<Card>& c)
{
	for (int i = 0; i < c.size(); i++)
	{
		s.append(toString(std::string(), c[i]));
		s.append("\n");
	}
	return s;
}
