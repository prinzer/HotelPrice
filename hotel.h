#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED

#define HOTEL1  900.00
#define HOTEL2  800.00
#define HOTEL3  700.00
#define HOTEL4  600.00
#define DISCOUNT  0.95
#define USERNAME "admin"
#define PASSWORD "ADMIN"


int Menu(void);

int HotelChoice(void);

int ChoiceNights(void);

double GetPrice(int nights,double price);

int Login(char[],char[]);

#endif // HOTEL_H_INCLUDED
