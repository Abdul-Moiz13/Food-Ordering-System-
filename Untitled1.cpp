#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void table(){
        printf("\n\t\t\t------------------------------------------------------------------------------------");
        printf("\n\t\t\t|    Set(code)     |     Size(code)   |      Drink (code)   |      Order Type      |");
        printf("\n\t\t\t------------------------------------------------------------------------------------");
        printf("\n\t\t\t|        (A)       |  large Rs. 1000  |       Mirinda(M)    | Delivery(D) : Rs. 200 |");
        printf("\n\t\t\t|  Tikka Pizza     |                  |        7up(7)       |-----------------------|");
        printf("\n\t\t\t|  Garlic Bread    |                  |        sprite(S)    | Takeaway(T) : Rs. 000 |");
        printf("\n\t\t\t|  1 ltr. drink    |----------------------------------------------------------------|");
        printf("\n\t\t\t|  4 pcs chicken   |  Small Rs. 500   |       Mirinda(M)    | Delivery(D) : Rs. 200 |");
        printf("\n\t\t\t|     wings        |                  |         7up(7)      |-----------------------|");
        printf("\n\t\t\t|                  |                  |        Sprite       | Takeaway(T) : Rs. 000 |");
        printf("\n\t\t\t------------------------------------------------------------------------------------");
        printf("\n\t\t\t|        (B)       |  large Rs. 1500  |       Mirinda(M)    | Delivery(D) : Rs. 200 |");
        printf("\n\t\t\t|  Tikka Pizza     |                  |         7up(7)      |-----------------------|");
        printf("\n\t\t\t|  Garlic Bread    |                  |        Sprite(S)    | Takeaway(T) : Rs. 000 |");
        printf("\n\t\t\t|  1.5 ltr. drink  |----------------------------------------------------------------|");
        printf("\n\t\t\t|  6 pcs chicken   |  Small Rs. 1000  |       Mirinda(M)    | Delivery(D) : Rs. 200 |");
        printf("\n\t\t\t|     wings        |                  |         7up(7)      |-----------------------|");
        printf("\n\t\t\t|                  |                  |        Sprite(S)    | Takeaway(T) : Rs. 000 |");
        printf("\n\t\t\t------------------------------------------------------------------------------------");
        printf("\n\t\t\t|        (C)       |  large Rs. 2000  |       Mirinda(M)    | Delivery(D) : Rs. 200 |");
        printf("\n\t\t\t|  Tikka Pizza     |                  |         7up(7)      |-----------------------|");
        printf("\n\t\t\t|  Garlic Bread    |                  |        Sprite(S)    | Takeaway(T) : Rs. 000 |");
        printf("\n\t\t\t|  2.5 ltr. drink  |----------------------------------------------------------------|");
        printf("\n\t\t\t|  8 pcs chicken   |  Small Rs. 1500  |       Mirinda(M)    | Delivery(D) : Rs. 200 |");
        printf("\n\t\t\t|     wings        |                  |         7up(7)      |-----------------------|");
        printf("\n\t\t\t|                  |                  |        sprite(S)    | Takeaway(T) : Rs. 000 |");
        printf("\n\t\t\t------------------------------------------------------------------------------------");
        printf("\nAll services not include tax :)");
        puts("\nAll products contain 10% discount.");
}
int menu(int *price,int *deliverycharges){
        system("cls");
        table();
        *deliverycharges = 0;
        *price = 0;
  char pick, size, order ,drink;
  int  loop = 1, sizeloop = 1, orderloop = 1,drinkloop =1;
  while (loop == 1) {
    printf("\n\t\t\t---------------------------------------------------------------------------------");
    printf("\n\t\t\t|                             Welcome to Pizza Dream                            |");
    printf("\n\t\t\t---------------------------------------------------------------------------------");
    printf("\n\t\t Set A : Tikka pizza, Garlic bread, 1 ltr. drink and 4 pcs chicken wings");
    printf("\n\t\t Set B : Tikka pizza, Garlic bread, 1.5 ltr. drink and 6 pcs chicken wings");
    printf("\n\t\t Set C : Tikka pizza, Garlic bread, 2.5 ltr. drink and 8 pcs chicken wings");
    printf("\n\t\t set opt. A,B or C:\t");
    scanf("%c", & pick);
    if (pick == 'A' || pick == 'B' || pick == 'C' || pick == 'a' || pick == 'b' || pick == 'c') {
      loop = 0;
    } else {
      printf("Something went wrong! please Try again");
      loop=1;
    }
    switch (pick){
      case 'A':
      case 'a':
      printf(" You have select set A");
    printf("\n Set A : Tikka pizza, Garlic bread, 1 ltr. drink and 4 pcs chicken wings\n");
    while (sizeloop == 1) {
      printf("\n\t\tLarge= Rs. 1000");
      printf("\n\t\tSmall= Rs. 500");
      printf("\nEnter your preferred size(L/S)\n");
      scanf(" %c", & size);

    if (size == 'L' || size == 'l') {
        *price = 1000;
        sizeloop = 0;
    } else if (size == 'S' || size == 's') {
        *price = 500;
        sizeloop = 0;
        }
}
while (drinkloop==1){
                                                        {       printf("\n\t\t select your drink:");
                                                                printf("\n\t\t Mirinda (M)");
                                                                printf("\n\t\t 7up (7)");
                                                                printf("\n\t\t Sprite(S)\n");
                                                                scanf(" %c",&drink);
                if(drink=='M'||drink=='m'||drink=='7'||drink=='S'||drink=='s'){
                    drinkloop=0;   
                }                       

                        }}
while(orderloop==1){
        printf("\n\t\t Select your order method");
        printf("\n\t\t HomeDelivery(D) or Takeaway(T)");
        printf("\n\t\t Delivery charges= Rs. 200\n");
        scanf(" %c",& order);   
        if(order=='T'||order=='t'){
                orderloop=0;
        }
        if(order=='D'||order=='d'){
                *deliverycharges=200;
        orderloop=0;
        }
        }
          break ;
      case 'B':
      case 'b':
      printf(" You have select set B");
    printf("\n Set B : Tikka pizza, Garlic bread, 1.5 ltr. drink and 6 pcs chicken wings\n");
    while (sizeloop == 1) {
      printf("\n\t\tLarge= Rs. 1500");
      printf("\n\t\tSmall= Rs. 1000");
      printf("\nEnter your preferred size(L/S)\n");
      scanf(" %c", & size);

      if (size == 'L' || size == 'l') {
        *price = 1500;
        sizeloop = 0;
        printf("large price : %d", price);
      } else if (size == 'S' || size == 's') {
        *price = 1000;
        sizeloop = 0;
        printf("small price : %d", price);
      } else
        printf("Something went wrong! please Try again");
    }
    while (drinkloop==1){
                                                        {       printf("\n\t\t select your drink:");
                                                                printf("\n\t\t Mirinda (M)");
                                                                printf("\n\t\t 7up (7)");
                                                                printf("\n\t\t Sprite(S)\n");
                                                                scanf(" %c",&drink);
                if(drink=='M'||drink=='m'||drink=='7'||drink=='S'||drink=='s'){
                    drinkloop=0;

                }

                }
            }
            while(orderloop==1){
        printf("\n\t\t Select your order method");
        printf("\n\t\t HomeDelivery(D) or Takeaway(T)");
        printf("\n\t\t Delivery charges= Rs. 200\n");
        scanf(" %c",&order);   
        if(order=='T'||order=='t'){
                orderloop=0;
        }
        if(order=='D'||order=='d'){
                *deliverycharges=200;
        orderloop=0;
        }
        }
        break;
case 'C':
      case 'c':
      printf(" You have select set C");
    printf("\n Set C : Tikka pizza, Garlic bread, 2.5 ltr. drink and 8 pcs chicken wings\n");
    while (sizeloop == 1) {
      printf("\n\t\tLarge= Rs. 2000");
      printf("\n\t\tSmall= Rs. 1500");
      printf("\nEnter your preferred size(L/S)\n");
      scanf(" %c", & size);

      if (size == 'L' || size == 'l') {
        *price = 2000;
        sizeloop = 0;
      } else if (size == 'S' || size == 's') {
        *price = 1500;
        sizeloop = 0;
      } else
        printf("Something went wrong! please Try again");
    }                                   
while (drinkloop==1){
                                                        {       printf("\n\t\t select your drink:");
                                                                printf("\n\t\t Mirinda (M)");
                                                                printf("\n\t\t 7up (7)");
                                                                printf("\n\t\t Sprite(S)\n");
                                                                scanf(" %c",&drink);
                if(drink=='M'||drink=='m'||drink=='7'||drink=='S'||drink=='s'){
                    drinkloop=0;     
                }

                }
            }
while(orderloop==1){
        printf("\n\t\t Select your order method");
        printf("\n\t\t HomeDelivery(D) or Takeaway(T)");
        printf("\n\t\t Delivery charges= Rs. 200\n");
        scanf(" %c",&order);   
        if(order=='T'||order=='t'){
                orderloop=0;
        }
        if(order=='D'||order=='d'){
                *deliverycharges=200;
        orderloop=0;
        }
        }
        }
}
}
int reciept(){
        char name[50],phone_no[13];
        int total=0,discount=0,tprice=0,p,dc;
        printf("\nEnter your Name\t:\t");
        fgets(name,50,stdin);
        printf("\nEnter your phone no.\t:\t");
        fgets(phone_no,13,stdin);
        menu(&p,&dc);
        system("cls");
printf("\n\t\t*******************************************************************************************************\n");
printf("\t\t$$$$$$$$$$$$$$$$ $$      $$       $$$$       $$$$      $$ $$    $$   $$      $$ $$$$$$$$$$$$ $$      $$   \n");
printf("\t\t       $$        $$      $$      $$  $$      $$ $$     $$ $$   $$     $$    $$  $$        $$ $$      $$    \n");   
printf("\t\t       $$        $$      $$     $$    $$     $$  $$    $$ $$  $$       $$  $$   $$        $$ $$      $$    \n");     
printf("\t\t       $$        $$$$$$$$$$    $$      $$    $$   $$   $$ $$$$          $$$$    $$        $$ $$      $$    \n");
printf("\t\t       $$        $$      $$   $$$$$$$$$$$$   $$    $$  $$ $$  $$         $$     $$        $$ $$      $$    \n");       
printf("\t\t       $$        $$      $$  $$          $$  $$     $$ $$ $$   $$        $$     $$        $$ $$      $$     \n");       
printf("\t\t       $$        $$      $$ $$            $$ $$      $$$$ $$    $$       $$     $$$$$$$$$$$$ $$$$$$$$$$   \n");
printf("\t\t*********************************************************************************************************\n");
printf("Name     :   %s",name);
printf("Phone No :      %s",phone_no);
total=p+dc;
discount=total * 0.1;
tprice=total-discount;
printf("\n\t\tPrice: %d",total);
printf("\n\t\tDiscount: %d",discount);
printf("\n\t\tTotal Price: %d",tprice);
printf("\n\t\tYour Order will be ready in 40 minutes!!");
printf("\n\t\tTHANK YOU FOR ORDERING! COME AGAIN");
}
int main(){
        system("COLOR F1");
        printf("\n\t[ HOTEL TRIVAGO. ]");
        printf("\n\t------------------");
        printf("\n\n");

        reciept();
}

