#include "string.h"
#include "stdio.h"
#include "hotelfunctions.c"


int main()
{
    int user;
    printf("Hotel_Booking\n");
    printf("1 - To Book Hotel\n 2 - To Add Hotel\n 3 - cancellation \n 4 - feedback\n");
    scanf("%d",&user);
      
    if(user=='1')
    {
      int hotel_id;
      hotel_id =  booking();
      if(hotel_id == '1')
      printf("Hotel Booked at Hotel Mariott Non-AC Succesfully completed\n booking ID : 557788\n");
      else if(hotel_id == '2')
      printf("Hotel Booked at Hotel Mariott AC Succesfully completed\n booking ID : 557788\n");
      else if(hotel_id == '3')
      printf("Hotel Booked at Taj palace  Non-AC Succesfully completed\n booking ID : 557788\n");
      else if(hotel_id == '5')
      printf("Hotel Booked at Taj palace  AC Succesfully completed\n booking ID : 557788\n");
      else if(hotel_id == '6')
      printf("Hotel Booked at ITC Kohinoor Non-AC Succesfully completed\n booking ID : 557788\n");
      else if(hotel_id == '8')
      printf("Hotel Booked at ITC Kohinoor AC Succesfully completed \n booking ID : 557788\n");
      else
      printf("Incorrect details booking unsuccesfull")
    }

    // S_OR_F for success or fail
     else if(user=='2')
     {
       int add_hotel_S_OR_F;
       add_hotel_S_OR_F = add_hotel();
       if(add_hotel_S_OR_F == '1')
       printf("Hotel added succesfully");
       else
       printf("Not added succesfully");
     }
     else if(user=='3')
     {
       int cancel_booking_S_OR_F;
       cancel_booking_S_OR_F = cancel_booking();
       if (cancel_booking_S_OR_F == '1')
       printf("% succesfully canceled\n",name);
       else
       printf("%s not canceled incorrect id\n",name);
     }
     else if(user=='4')
     {
      void feedback();
     }
     else
     printf("Incorrect entry please enter either 1 or 2 or 3 or 4");
}
