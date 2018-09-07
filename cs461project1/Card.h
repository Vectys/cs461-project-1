#pragma once
#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

class Card {
	friend class Deck;
public:
	explicit Card();
	explicit Card(const int& suit, const int& rank);
	string Card25tr() const;
private:
	int generate_suit();
	int generate_rank();
	int get_suit() const;
	int get_rank() const;
	string suit;
	int rank;
};
#endif