int add_hotel();
int cancel_booking();
int booking();
void feedback();

// reference numberes 1,2,3 for hotel names AC=9 non ac=8
int booking()
    {
      int select_hotel;
      printf("select your hotel");
      printf("1 - Hotel Mariott \n Price : \t NON-AC : 1100 \n AC : 2000 \n 1-Non-AC \n 2-AC\n");
      printf("2 - Taj Palace \n Price : \t NON-AC : 1400 \n AC : 2500 \n 1-Non-AC \n 2-AC\n");
      printf("3 - ITC Kohinoor \n Price : \t NON-AC : 2100 \n AC : 3000 \n 1-Non-AC \n 2-AC\n");
      scanf("%d",&select_hotel);
      if(select_hotel < 1 || select_hotel > 3)
      {
        int another;
        printf("incorrect selection please select correct hotel\n");
        scanf("%d",&another);
        select_hotel=another;
      }
      int ac_or_non_ac;
      if(select_hotel == '1')
      {
      printf("1 - NON-AC = 1100\n 2 - AC = 2000\n ");
      scanf("%d",&ac_or_non_ac);
      return select_hotel*ac_or_non_ac;
      }
      else if(select_hotel == '2')
      {
      printf("1 - NON-AC = 1400 \n 2 - AC = 2500 \n");
      scanf("%d",&ac_or_non_ac);
      return select_hotel*ac_or_non_ac+1;
      }
      else if(select_hotel == '3')
      {
      printf("1 - NON-AC = 2100 \n 2 - AC = 3000 \n");
      scanf("%d",&ac_or_non_ac);
      return select_hotel*ac_or_non_ac+3;
      }
      return select_hotel;
    }

    struct hotel_details{
  char hotel_name[30];
  char location[25];
  int NON_AC_price;
  int AC_price;
};

    int add_hotel()
    {
    struct hotel_details *ptr_details,details;
    ptr_details = details;

    printf("Enter Hotel Name");
    scanf("%s",&ptr_details->hotel_name);
    
    printf("Enter location");
    scanf("%s",&ptr_details->location);
    
    printf("Enter Hotel Name");
    scanf("%d",&ptr_details->NON_AC_price);

    printf("Enter AC_price");
    scanf("%s",&ptr_details->AC_price);

       return 1;
    }


    int cancel_booking()
    {
    int id_for_can;
    char name[20];
    scanf("%s",name);
    printf("please enter booking id %s",name);
    scanf("%d",&id_for_can);
    if(id_for_can == '557788')
    return 1;
    else
    return 0;
    }

    void feedback()
    {
        char hotel_namee[50];
        printf("enter hotel name\n");
        scanf("%s",hotel_namee);
        printf("write review");
        scanf("%s",review);
        printf("thanks for feedback")
    }