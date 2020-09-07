// C Project: BANKING SYSTEM
//
// First Year, Section: C
// UEM Kolkata
//
// Group No.: 2
// Members:
//  Shruti Harrison (Roll No: 3)
//  Subhronil Saha (Roll No.: 4)

#include <stdio.h>
#include <stdlib.h>

int a=0,b=0,c,d,main_choice,back_choice,t_choice,u_i_choice,user_pin_no,e,f,g,h,t,k,l,x;
long long unsigned int user_ac_no;

struct{
    int acc_type,pin,fund,password;
    int d,m,y;
    char f_name[20],l_name[20],nation[20],address[150],city[20],state[20],mobile[10],pan[10];
    long long unsigned int acc_no,aadhar;
}s[10];

int create_account(){
    int i;

    for(i=1;i<=10;i++){
        //Printing headings
        printf("\n");
        a = 0;
        while(a<27){
            printf(" ");
            a++;}
        printf("CREATE A NEW ACCOUNT \n \n");

        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Personal Details: \n");
        //Personal Details
        for(c=1;c<7;c++)
        {
            d = 0;
            while(d<30)
            {
                printf(" ");
                d++;
            }
            switch(c)
            {
                case 1: printf("First Name: ");
                        scanf("%s",s[i].f_name);
                        break;
                case 2: printf("Last name: ");
                        scanf("%s",s[i].l_name);
                        break;
                case 3: printf("Date of Birth (dd mm yyyy): ");
                        scanf("%d %d %d",&s[i].d,&s[i].m,&s[i].y);
                        break;
                case 4: printf("Nationality: ");
                        scanf("%s",s[i].nation);
                        break;
                case 5: printf("Aadhar Number: ");
                        scanf("%lld",&s[i].aadhar);
                        break;
                case 6: printf("PAN Number: ");
                        scanf("%s",s[i].pan);
                        break;

            }
        }
        printf("\n");
        //Address
        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Contact Details: \n");

        for(c=1;c<=7;c++)
        {
            d = 0;
            while(d<30)
            {
                printf(" ");
                d++;
            }
            switch(c)
            {
                case 1: printf("Permanent Address: ");
                        scanf("%s",s[i].address);
                        break;
                case 2: printf("City: ");
                        scanf("%s",s[i].city);
                        break;
                case 3: printf("State: ");
                        scanf("%s",s[i].state);
                        break;
                case 4: printf("Pin Code: ");
                        scanf("%d",&s[i].pin);
                        break;
                case 5: printf("Mobile number: ");
                        scanf("%s",s[i].mobile);
                        break;

            }
        }

        //Printing Account types
        printf("\n");
        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Select account type: \n");
        for(c=1;c<4;c++)
        {
            d = 0;
            while(d<30)
            {
                printf(" ");
                d++;
            }
            printf("[%d] ",c);
            switch(c)
            {
                case 1: printf("Salary Account \n");
                        break;
                case 2: printf("Savings Account \n");
                        break;
                case 3: printf("Current Account \n");
                        break;
            }
        }

        d = 0;
        while(d<30)
        {
            printf(" ");
            d++;
        }
        printf("Enter your Choice: ");
        scanf("%d",&s[i].acc_type);

        printf("\n");
        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }

        switch(s[i].acc_type){
            case 1: printf("Salary account successfully created!");
                    break;
            case 2: printf("Savings account successfully created!");
                    break;
            case 3: printf("Current account successfully created!");
                    break;
        }

        s[i].acc_no = 1234567890 + i;
        printf("\n");
        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Your bank account number is: %lld",s[i].acc_no);
        printf("\n \n");

        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Set a 4-digit PIN: ");
        scanf("%d",&s[i].password);

        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("PIN set successfully! \n \n");

        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Enter the amount you'd like to deposit: Rs ");
        scanf("%d",&s[i].fund);
        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Rs %d has been successfully deposited in %s %s's account! \n",s[i].fund,s[i].f_name,s[i].l_name);
        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Thank you for choosing our bank...");
        printf("\n \n");

        //Option to move to main menu
        d = 0;
        while(d<25)
        {
            printf(" ");
            d++;
        }
        printf("Press 0 to head back to the main menu. Press 1 to Create another account: ");
        scanf("%d",&back_choice);
        printf("\n");
        if(back_choice==0)
            main();
        else if(back_choice==1)
            continue;
    }
}

int update_info(){
    for(f=1;f<=10;f++){
      //Printing headings
        printf("\n");
        a = 0;
        while(a<30){
            printf(" ");
            a++;}
        printf("UPDATE INFO \n \n");

        printf("Enter account number: ");
        scanf("%lld",&user_ac_no);
        printf("Enter 4-digit PIN: ");
        scanf("%d",&user_pin_no);

        //Code for checking if account exists in database
        for(e=1;e<=10;e++){
            if(user_ac_no==s[e].acc_no)
                break;
        }
        if(e>10)
            printf("Record not found");
        else{
            if(user_pin_no!=s[e].password)
                printf("Access Denied");
            else{
                printf("Which information would you like to change? \n [1] Address \n [2] Mobile Number \nPress 1 for Address, 2 for Mobile number: ");
                scanf("%d",&u_i_choice);
                if(u_i_choice==1){
                   printf("\nEnter your address: ");
                   scanf("%s",s[e].address);
                   printf("Address updated successfully");
                }
                else if(u_i_choice==2){
                    printf("\nEnter mobile number: ");
                    scanf("%s",s[e].mobile);
                    printf("Mobile number updated successfully");

                }
            }
        }

        //Option to move to main menu
            d = 0;
            while(d<25)
            {
                printf(" ");
                d++;
            }
            printf("\nPress 0 to head back to the main menu. Press 1 to Update another account: ");
            scanf("%d",&back_choice);
            printf("\n");
            if(back_choice==0)
                main();
            else if(back_choice==1)
                f++;
    }
}

int transactions(){
    for(k=1;k<=10;k++){
        //Printing headings
        printf("\n \n");
        a = 0;
        while(a<30){
            printf(" ");
            a++;}
        printf("TRANSACTIONS \n \n");

        printf("Enter account number: ");
        scanf("%lld",&user_ac_no);
        printf("Enter 4-digit PIN: ");
        scanf("%d",&user_pin_no);

        //Code for checking if account exists in database
            for(e=1;e<=10;e++){
                if(user_ac_no==s[e].acc_no)
                    break;
            }
            if(e>10){

                printf("Record not found \n");
            }
            else{
                if(user_pin_no!=s[e].password){

                    printf("Access Denied");
                }
                else{
                    printf("\nPress 1 to Deposit, 2 to Withdraw: ");
                    scanf("%d",&t_choice);
                    if(t_choice==1){
                        printf("\nEnter amount to deposit: Rs ");
                        scanf("%d",&t);
                        s[e].fund = s[e].fund + t;
                        printf("Updated Balance: Rs %d \n",s[e].fund);
                    }
                    else if(t_choice==2){
                        printf("Enter amount to withdraw: Rs ");
                        scanf("%d",&t);
                        if(t<=s[e].fund){
                            s[e].fund = s[e].fund - t;
                            printf("Remaining Balance: Rs %d \n",s[e].fund);
                        }
                        else
                            printf("Insufficient Balance \n");
                    }
                }
            }
        //Option to move to main menu
                d = 0;
                while(d<25)
                {
                    printf(" ");
                    d++;
                }
                printf("\nPress 0 to head back to the main menu. Press 1 to make another transaction: ");
                scanf("%d",&back_choice);
                printf("\n");
                if(back_choice==0)
                    main();
                else if(back_choice==1)
                    continue;
    }
}

int remove_acc(){
    for(l=1;l<=10;l++){
   //Printing headings
        printf("\n");
        a = 0;
        while(a<30){
            printf(" ");
            a++;}
        printf("REMOVE ACCOUNT \n \n");

        printf("Enter account number: ");
        scanf("%lld",&user_ac_no);
        printf("Enter 4-digit PIN: ");
        scanf("%d",&user_pin_no);

        //Code for checking if account exists in database
            for(e=1;e<=10;e++){
                if(user_ac_no==s[e].acc_no)
                    break;
            }
            if(e>10){
                printf("\n");
                printf("Record not found \n");
            }
            else{
                if(user_pin_no!=s[e].password){

                    printf("\nAccess Denied \n");
                }
                else{
                    s[e].acc_no = 0;

                    printf("\nAccount Deleted Successfully \n");
                }
            }

        //Option to move to main menu

            printf("Press 0 to head back to the main menu. Press 1 to remove another account: ");
            scanf("%d",&back_choice);
            printf("\n");
            if(back_choice==0)
                main();
            else if(back_choice==1)
                continue;
    }
}

int view_account(){
    for(g=1;g<=10;g++){
   //Printing headings
        printf("\n");
        a = 0;
        while(a<30){
            printf(" ");
            a++;}
        printf("VIEW ACCOUNT \n \n");

        d = 0;
            while(d<25)
            {
                printf(" ");
                d++;
            }
        printf("Enter your account number: ");
        scanf("%lld",&user_ac_no);

        d = 0;
            while(d<25)
            {
                printf(" ");
                d++;
            }
        printf("Enter 4-digit PIN: ");
        scanf("%d",&user_pin_no);

        //Code for checking if account exists in database
        for(e=1;e<=10;e++){
            if(user_ac_no==s[e].acc_no)
                break;
        }
        if(e>10){
            d = 0;
            while(d<25)
            {
                printf(" ");
                d++;
            }
            printf("Record not found \n");
        }
        else{
            if(user_pin_no!=s[e].password){
                    d = 0;
                    while(d<25)
                    {
                        printf(" ");
                        d++;
                    }
                printf("Access Denied \n \n");
            }
            else{
                    d = 0;
                    while(d<25)
                    {
                        printf(" ");
                        d++;
                    }
                printf("Account Details: \n");
                for(h=1;h<8;h++){
                    d = 0;
                    while(d<25)
                    {
                        printf(" ");
                        d++;
                    }
                    switch(h){
                        case 1: printf(" Account Holder: %s %s \n",s[e].f_name,s[e].l_name);
                                break;
                        case 2: printf(" Account Number: %lld \n",s[e].acc_no);
                                break;
                        case 3: printf(" Account type: ");
                                if(s[e].acc_type==1)
                                    printf("Salary Account \n");
                                else if(s[e].acc_type==2)
                                    printf("Savings account \n");
                                else if(s[e].acc_type==3)
                                    printf("Current Account \n");
                                break;
                        case 4: printf(" Aadhar Number: %lld \n",s[e].aadhar);
                                break;
                        case 5: printf(" Account Balance: Rs %d \n",s[e].fund);
                                break;
                        case 6: printf(" Address: %s \n",s[e].address);
                                break;
                        case 7: printf(" Mobile number: %s \n",s[e].mobile);
                                break;

                    }
                }
            }
        }

        //Option to move to main menu
            d = 0;
            while(d<25)
            {
                printf(" ");
                d++;
            }
            printf("Press 0 to head back to the main menu. Press 1 to view another account: ");
            scanf("%d",&back_choice);
            printf("\n");
            if(back_choice==0)
                main();
            else if(back_choice==1)
                continue;
    }
}

int main(){
    //Printing headings
    printf("\n \n");
    a = 0;
    while(a<30){
        printf(" ");
        a++;}
    printf("BANKING SYSTEM \n \n");
    b = 0;
    while(b<25){
        printf(" ");
        b++;}
    printf("WELCOME TO THE MAIN MENU \n \n");
    //Printing choices
    for(c=1;c<7;c++){
        d = 0;
        while(d<23){
            printf(" ");
            d++;
        }
        printf("[%d] ",c);
        switch(c){
            case 1: printf("Create New Account \n");
                    break;
            case 2: printf("Update info on existing account \n");
                    break;
            case 3: printf("Transactions \n");
                    break;
            case 4: printf("Check Details of Existing Account \n");
                    break;
            case 5: printf("Remove Existing Account \n");
                    break;
            case 6: printf("Exit \n \n \n");
                    break;
        }
    }

    d = 0;
        while(d<23){
            printf(" ");
            d++;
        }
    printf("Enter your choice: ");
    scanf("%d",&main_choice);

    //For multiple new lines after inputting choice
    printf("\n \n");

    switch(main_choice){
        case 1: create_account();
                break;
        case 2: update_info();
                break;
        case 3: transactions();
                break;
        case 4: view_account();
                break;
        case 5: remove_acc();
                break;
        case 6: break;
    }

    if(main_choice==6){
        d = 0;
            while(d<21){
                printf(" ");
                d++;
            }
        printf("THANK YOU FOR BANKING WITH US! \n \n");
        return 0;
        exit (0);
    }
}
