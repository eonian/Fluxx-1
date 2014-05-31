#include "cardLib.h"

CardLib::CardLib()  //�ݹ涨����Ϊ63�����������޸�
{
	_cardNum = 63;
	_cards.push_back(new RuleCard); //��������������
	for (int i = 1; i <= 21;i++)	//�����¹�����
		_cards.push_back(new RuleCard(i));
	for (int i = 1; i <= 18;i++)//������������
		_cards.push_back(new KeeperCard(i));
	for (int i = 1; i <= 23; i++)//������������
		_cards.push_back(new GoalCard(i));
}

CardLib::~CardLib()
{
	for (int i = 0; i < _cardNum; i++)
		delete _cards[i];
	_cards.clear();
}