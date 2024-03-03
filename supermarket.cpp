#include <iostream>
using namespace std;

class Market
{

public:
	int choice;

	Market() {}

	void displayPurchase()
	{

		cout << "\n\nEnter the item you want to purchase : ";
		cin >> choice;
	}

	void displayItems()
	{
		cout << endl;
		cout << "Press 1 to purchase vegetable" << endl;
		cout << "Press 2 to purchase fruits" << endl;
		cout << "Press 3 to purchase biscuits" << endl;
	}

	int customerVegetableChoice()
	{
		if (choice == 1)
		{
			cout << endl;
			cout << "Press P to purchase Potato" << endl;
			cout << "Press T to purchase Tomato" << endl;
			cout << "Press C to purchase Carrot" << endl;

			char vegetableChoice;
			int vegChoice = 1;
			int initialPrice = 0;
			int potatoPrice, tomatoPrice, carrotPrice;

			while (vegChoice != 0)
			{
				cout << "\n\nDo you want to purchase vegetables (1/0) : ";
				cin >> vegChoice;

				if (vegChoice == 1)
				{
					cout << "\n\nEnter your choice to purchase vegetable : ";
					cin >> vegetableChoice;

					if (vegetableChoice == 'P')
					{
						cout << "\n\nPotato 1 kg --> 35 RS" << endl;

						int potatoQuantity;
						cout << "Enter quantity of potato to be purchased (in Kg) : ";
						cin >> potatoQuantity;

						potatoPrice = 35 * potatoQuantity;
						cout << "\n\nTotal Price of potatoes : " << potatoPrice;
						initialPrice = initialPrice + potatoPrice;
					}

					else if (vegetableChoice == 'T')
					{
						cout << "\n\nTomato 1 kg --> 50 RS" << endl;

						int tomatoQuantity;
						cout << "Enter quantity of tomato to be purchased (in Kg) : ";
						cin >> tomatoQuantity;

						tomatoPrice = 50 * tomatoQuantity;
						cout << "\n\nTotal Price of tomatoes : " << tomatoPrice;
						initialPrice = initialPrice + tomatoPrice;
					}

					else if (vegetableChoice == 'C')
					{
						cout << "\n\nCarrot 1 kg --> 15 RS" << endl;

						int carrotQuantity;
						cout << "Enter quantity of carrot to be purchased (in Kg) : ";
						cin >> carrotQuantity;

						carrotPrice = 15 * carrotQuantity;
						cout << "\n\nTotal Price of Carrot : " << carrotPrice;
						initialPrice = initialPrice + carrotPrice;
					}

					else
					{
						cout << "\n\nInvalid Choice ";
						exit(0);
					}
				}
			}
			return initialPrice;
		}

		return 0;
	}

	int customerFruitChoice()
	{
		if (choice == 2)
		{
			cout << endl;
			cout << "Press A to purchase Apple" << endl;
			cout << "Press B to purchase Banana" << endl;
			cout << "Press K to purchase Kiwi" << endl;

			char fruitChoice;
			int fChoice = 1;
			int initialPrice = 0;
			int applePrice, bananaPrice, kiwiPrice;

			while (fChoice != 0)
			{
				cout << "\n\nDo you want to purchase fruits (1/0) : ";
				cin >> fChoice;

				if (fChoice == 1)
				{
					cout << "\n\nEnter your choice to purchase fruits : ";
					cin >> fruitChoice;

					if (fruitChoice == 'A')
					{
						cout << "\n\nApple 1 kg --> 65 RS" << endl;

						int appleQuantity;
						cout << "Enter quantity of apple to be purchased (in Kg) : ";
						cin >> appleQuantity;

						applePrice = 65 * appleQuantity;
						cout << "\n\nTotal Price of apples : " << applePrice;
						initialPrice = initialPrice + applePrice;
					}

					else if (fruitChoice == 'B')
					{
						cout << "\n\nBanana 1 kg --> 100 RS" << endl;

						int bananaQuantity;
						cout << "Enter quantity of banana to be purchased (in Kg) : ";
						cin >> bananaQuantity;

						bananaPrice = 100 * bananaQuantity;
						cout << "\n\nTotal Price of bananas : " << bananaPrice;
						initialPrice = initialPrice + bananaPrice;
					}

					else if (fruitChoice == 'K')
					{
						cout << "\n\nKiwi 1 kg --> 125 RS" << endl;

						int kiwiQuantity;
						cout << "Enter quantity of kiwi to be purchased (in Kg) : ";
						cin >> kiwiQuantity;

						kiwiPrice = 125 * kiwiQuantity;
						cout << "\n\nTotal Price of Kiwis : " << kiwiPrice;
						initialPrice = initialPrice + kiwiPrice;
					}

					else
					{
						cout << "\n\nInvalid Choice ";
						exit(0);
					}
				}
			}

			return initialPrice;
		}

		return 0;
	}

	int customerBiscuitChoice()
	{
		if (choice == 3)
		{
			cout << endl;
			cout << "Press P to purchase Parle-G" << endl;
			cout << "Press M to purchase Monaco" << endl;
			cout << "Press J to purchase Jim-Jam" << endl;

			char biscuitChoice;
			int bChoice = 1;
			int initialPrice = 0;
			int parlegPrice, monacoPrice, jimjamPrice;

			while (bChoice != 0)
			{
				cout << "\n\nDo you want to purchase biscuits (1/0) : ";
				cin >> bChoice;

				if (bChoice == 1)
				{
					cout << "\n\nEnter your choice to purchase biscuits : ";
					cin >> biscuitChoice;

					if (biscuitChoice == 'P')
					{
						cout << "\n\nParleG 1 packet --> 10 RS" << endl;

						int parlegQuantity;
						cout << "Enter quantity of Parle-G to be purchased (in packets) : ";
						cin >> parlegQuantity;

						parlegPrice = 10 * parlegQuantity;
						cout << "\n\nTotal Price of parle-G : " << parlegPrice;
						initialPrice = initialPrice + parlegPrice;
					}

					else if (biscuitChoice == 'M')
					{
						cout << "\n\nMonaco 1 packet --> 20 RS" << endl;

						int monacoQuantity;
						cout << "Enter quantity of monaco to be purchased (in packets) : ";
						cin >> monacoQuantity;

						monacoPrice = 20 * monacoQuantity;
						cout << "\n\nTotal Price of monaco : " << monacoPrice;
						initialPrice = initialPrice + monacoPrice;
					}

					else if (biscuitChoice == 'J')
					{
						cout << "\n\nJim-Jam 1 packet --> 20 RS" << endl;

						int jimjamQuantity;
						cout << "Enter quantity of Jim-Jam to be purchased (in packets) : ";
						cin >> jimjamQuantity;

						jimjamPrice = 20 * jimjamQuantity;
						cout << "\n\nTotal Price of Jim-Jam : " << jimjamPrice;
						initialPrice = initialPrice + jimjamPrice;
					}

					else
					{
						cout << "\n\nInvalid Choice ";
						exit(0);
					}
				}
			}

			return initialPrice;
		}

		return 0;
	}
};

int main()
{
	Market item1;
	item1.displayItems();
	item1.displayPurchase();

	int vegetablePrice = item1.customerVegetableChoice();
	int fruitPrice = item1.customerFruitChoice();
	int biscuitPrice = item1.customerBiscuitChoice();

	int choice = 1;
	int totalCost = vegetablePrice + fruitPrice + biscuitPrice;
	cout << "Total Cost of all items is : " << totalCost;

	while (choice != 0)
	{
		cout << "\n\nDo you want to continue shopping? (1/0) : ";
		cin >> choice;

		if (choice == 1)
		{
			item1.displayItems();
			item1.displayPurchase();
			vegetablePrice = item1.customerVegetableChoice();
			fruitPrice = item1.customerFruitChoice();
			biscuitPrice = item1.customerBiscuitChoice();
			totalCost += vegetablePrice + fruitPrice + biscuitPrice;
		}
	}

	cout << "Total Cost of all Purchased Items : " << totalCost;
	return 0;
}