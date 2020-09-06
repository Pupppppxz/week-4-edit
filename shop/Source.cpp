#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
int main()
{
	float money = 0, change = 0, pay = 0, bill = 0, vat = 0.07;
	int qty = 0;
	int menu = 0;
	int a1 = 50, a2 = 65, a3 = 50, a4 = 35, b1 = 25, b2 = 30, b3 = 30;
	int d100, d500, d1000, d20, d50, d10, d5, d1, bank;
	printf("-------Menu list-------\n1.Hamburger 50baht\n2.Cheese burger 65baht\n3.Fish burger 50 baht\n4.French fried 35 baht\n5.Coke 25 baht\n6.Greentea 30 baht\n7.Coffee 30 baht\n8.Exit\n");
	while (1) {
		printf("\nEnter menu(number) : ");
		scanf("%d", &menu);
		if (menu == 8) {
			break;
		}
		printf("Enter quantity : ");
		scanf("%d", &qty);

		if (menu == 1) {
			menu = a1;
			pay += menu * qty;
		}
		else if (menu == 2) {
			menu = a2;
			pay += menu * qty;
		}
		else if (menu == 3) {
			menu = a3;
			pay += menu * qty;
		}
		else if (menu == 4) {
			menu = a4;
			pay += menu * qty;
		}
		else if (menu == 5) {
			menu = b1;
			pay += menu * qty;
		}
		else if (menu == 6) {
			menu = b2;
			pay += menu * qty;
		}
		else if (menu == 7) {
			menu = b3;
			pay += menu * qty;
		}
		printf("%.2f baht\n", pay);

	}

	vat = pay * vat;
	printf("\nVAT 7%% : %.2f baht\n", vat);
	bill = pay + vat;
	printf("Total cost : %.2f baht\n", bill);
	printf("\nReceived money : ");
	scanf("%f", &money);
	change = money - bill;
	printf("Change : %.2f baht", change);
	printf("\n------------------------------\n");
	bank = change;
	d1000 = (bank / 1000);
	d500 = (bank % 1000 / 500);
	d100 = (bank % 1000 % 500 / 100);
	d50 = (bank % 1000 % 500 % 100 / 50);
	d10 = (bank % 1000 % 500 % 100 % 50 / 10);
	d5 = (bank % 1000 % 500 % 100 % 50 % 10 / 5);
	d1 = (bank % 1000 % 500 % 100 % 50 % 10 % 5 / 1);
	printf("One thousand bank = %d\n", d1000);
	printf("Five hundred bank= %d\n", d500);
	printf("One hundred bank = %d\n", d100);
	printf("Fifty bank = %d\n", d50);
	printf("Ten coin = %d\n", d10);
	printf("Five coin = %d\n", d5);
	printf("One coin = %d\n", d1);

	return 0;
}