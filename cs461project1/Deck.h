#pragma once
#ifndef DECK_H
#define DECK_H
#include <vector>
#include <fstream>
#include <iostream>
/* a portion of this code was taken from user CroCo's prototype for a deck on
StackExchange: While the code itself was not copy-pasted, it was used as inspiration,
as was an additional source code on the same topic used by Jamal.
Link to CroCo's source below:
https://codereview.stackexchange.com/questions/41810/card-and-deck-classes
Link to Jamal's source below:
https://codereview.stackexchange.com/questions/36657/use-of-templates-with-templated-deck-class */

using namespace std;

//create a deck class. Essentially a vector of cards with the option to print the deck(testing) and get a single card.
//testing git hub fgfadgasdgasdgasdf
class Deck
{
public:
	explicit Deck();
	void print_deck() const;
	void get_card();
private:
	vector<Card> m_deck;
};
#endif
