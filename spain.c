#include<stdio.h>

int main(){
    //AN ATM MACHINE
    
     printf("Welcome to benzema bank of spain!!\n");

    int password = 9999;
    int choice, airtimeoption,airtimeoption2,airtimeoption3,airtimeoption4;
    int balance = 20000;
    int withdrawal,billspayment,Gotvpayment,Dstvpayment,startimespayment,cashtransfer,accountnumber,amounttobetransferred,specificamount,confirmtransfer;
    int airtime;
    int transaction,banktype;
    int deposition;
    int k;
    int anothertransaction=1;//do another transaction 2.not another action
    printf("Enter password:");
    scanf("%d",&password);
    if (password!=9999){ 
        printf("Enter a valid password!\n");
        return 0;}


while (anothertransaction==1)
{

    printf("Welcome Mr chris\n");
       printf("Select the transaction you are here for:\n1.Check balance\n2.Cash Withdrawal\n3.Cash deposition\n4.Airtime Purchase\n5.Bills Payment\n6.Cash transfer\n7.Exit\n");

    printf("Proceed with your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Your current account balance is N%d", balance);
        break;
        
        case 2:
            printf("Enter specific amount to be withdrawn:");
            scanf("%d", &withdrawal);
            if (withdrawal%100!=0)
            {
                printf("Hey!!Enter the amount in multiples of 100");
            }
           else if (withdrawal>(balance-500))//A minimum of 500 must be left
          {
              printf("Sapa Season\n");
            }
           else{
              balance= balance- withdrawal;
              printf("Take your cash!\n");
             }
          printf("Your current balance is N%d",balance);

          break;
          case 3:
         printf("Insert the specific amount to be deposited:");
        scanf("%d",&deposition);

            balance = balance + deposition;//current balance plus the amount deposited
            printf("Your current balance is N%d", balance);
            break;
    
 case 4:
    printf("1.MTN\n2.GLO\n3.AIRTEL\n4.ETISALAT\n");
    printf("Enter your network provider:\n");
    scanf("%d",&airtime);
if(airtime==1){
     printf("You've selected MTN\n1.N100\n2.N200\n3.N500\n4.N1000\n");
     
printf("Select the amount you are purchasing:\n");
scanf("%d", &airtimeoption);
printf("You have successfully purchased airtime bundle");
}

else if (airtime==2)
{
    printf("You've selected GLO\n1.100\n2.200\n3.500\n4.1000\n");

printf("Select the amount you are purchasing:\n");
scanf("%d", &airtimeoption2);
printf("You have successfully purchased airtime bundle");
}

else if (airtime==3)
{
    printf("You've selected AIRTEL\n1.100\n2.200\n3.500\n4.1000\n");

printf("Select the amount you are purchasing:\n");
scanf("%d", &airtimeoption2);
printf("You have successfully purchased airtime bundle");
}

else if (airtime==4)
{
    printf("You've selected ETISALAT\n1.100\n2.200\n3.500\n4.1000\n");

printf("Select the amount you are purchasing:\n");
scanf("%d", &airtimeoption4);
printf("You have successfully purchased airtime bundle");
}
else{
    printf("Error!!");
}
    break;

    case 5:
    printf("What bills are you paying:\n");
    printf("1.Gotv\n2.Dstv\n3.Startimes\n");
    scanf("%d", &billspayment);
    if (billspayment==1)
    {
        printf("You've selected GOTV\n");
        printf("Here is our packages\n");
        printf("1.GOTV supa=5500\n2.GOTV max=4150\n3.GOTV jolli=2800\n4.GOTV jinja=1900\n5.GOTV smallie=900\n");
        printf("Enter your choice:\n");
        scanf("%d", &Gotvpayment);
        if (Gotvpayment==1)
        {
            printf("Sucessful!You've subscribed for GOTV supa!!");
        }
    else if (Gotvpayment==2)
        {
            printf("Sucessful!You've subscribed for GOTV max!!");
        }
      else if (Gotvpayment==3)
        {
            printf("Sucessful!You've subscribed for GOTV jolli!!");
        }
       else if (Gotvpayment==4)
        {
            printf("Sucessful!You've subscribed for GOTV jinja!!");
        }
        else if (Gotvpayment==5)
        {
            printf("Sucessful!You've subscribed for GOTV smallie!!");
        }
        else{
            printf("Error");
        }

    }
else if (billspayment==2)
{
    printf("You've selected DSTV\n");
    printf("Here's our packages:\n");
    printf("1.DSTV premium=21'000\n2.DSTV compact plus=14'250\n3.DSTV compact=9'000\n4.DSTV confam=5'300\n5.DSTV yanga=2'950\n6.DSTV padi=2'150\n");
    printf("Enter your choice:\n");
    scanf("%d",&Dstvpayment);
    if (Dstvpayment==1)
    {
        printf("Sucessful!You've sucessfully subscribed for DSTV premium!!");
    }
    else if (Dstvpayment==2)
    {
        printf("Sucessful!You've sucessfullly subscribed for DSTV compact plus!!");
    }
    else if (Dstvpayment==2)
    {
        printf("Sucessful!You've sucessfullly subscribed for DSTV compact plus!!");
    }
    else if (Dstvpayment==3)
    {
        printf("Sucessful!You've sucessfullly subscribed for DSTV compact!!");
    }
    else if (Dstvpayment==4)
    {
        printf("Sucessful!You've sucessfullly subscribed for DSTV confam!!");
    }
    else if (Dstvpayment==5)
    {
        printf("Sucessful!You've sucessfullly subscribed for DSTV yanga!!");
    }
    else if (Dstvpayment==6)
    {
        printf("Sucessful!You've sucessfullly subscribed for DSTV padi!!");
    }
    else{
        printf("Error!!");
    }

}
else if (billspayment==3)
{
    printf("You've selected STARTIMES\n");
    printf("Here's our packages:\n");
    printf("1.STARTIMES classic=2'500\n2.STARTIMES basic 1'700\n3.STARTIMES nova=900\n4.STARTIMES chinese=6'600\n5.STARTIMES super=4'200\n6.STARTIMES smart=2'200\n7.STARTIMES sport=1'200\n");
    printf("Proceed with your choice:\n");
    scanf("%d", &startimespayment);
    if (startimespayment==1)
    {
        printf("Sucessful!You've sucessfully subscribed for startimes classic");
    }
    
   else if (startimespayment==2)
    {
        printf("Sucessful!You've sucessfully subscribed for startimes basic");
    }
   else if (startimespayment==3)
    {
        printf("Sucessful!You've sucessfully subscribed for startimes nova");
    }
    else if (startimespayment==4)
    {
        printf("Sucessful!You've sucessfully subscribed for startimes chinese");
    }
   else if (startimespayment==5)
    {
        printf("Sucessful!You've sucessfully subscribed for startimes super");
    }
  else  if (startimespayment==6)
    {
        printf("Sucessful!You've sucessfully subscribed for startimes smart");
    }
   else if (startimespayment==7)
    {
        printf("Sucessful!You've sucessfully subscribed for startimes sport");
    }
    else
    {
        printf("Error!!check the option entered");
    }
}
    break;

    case 6:
     printf("Select the bank you are transferring to:\n");
     printf("1.Wema bank plc\n2.First bank\n3.Unity bank\n4.UBA plc\n5.GT bank plc\n6.Zenith bank plc\n7.Keystone bank plc\n8.Stanbic IBTC plc\n9.Sterling bank plc\n");
      printf("10.Fidelity bank plc\n11.Polaris bank plc\n12.Access bank plc\n13.Diamond bank plc\n14.Standard chartard bank plc\n15.Ecobank nigeria\n");
      printf("Enter your bank:\n ");
      scanf("%d",&banktype);
      if (banktype==1)
      {
          printf("You selected Wema bank plc\n");
      }
      else if (banktype==2)
      {
          printf("You selected First bank plc\n");
      }
      else if (banktype==3)
      {
          printf("You selected Unity bank plc\n");
      }
     else if (banktype==4)
      {
          printf("You selected UBA bank plc\n");
      }
    else if (banktype==5)
      {
          printf("You selected GT bank plc\n");
      }
      else if (banktype==6)
      {
          printf("You selected Zenith bank plc\n");
      }
     else if (banktype==7)
      {
          printf("You selected Keystone bank plc\n");
      }
      else if (banktype==8)
      {
          printf("You selected Stanbic IBTC plc\n");
      }
    else if (banktype==9)
      {
          printf("You selected Sterling bank plc\n");
      }
     else if (banktype==10)
      {
          printf("You selected Fidelity bank plc\n");
      }
     else if (banktype==11)
      {
          printf("You selected Polaris bank plc\n");
      }
     else if (banktype==12)
      {
          printf("You selected Access bank plc\n");
      }
     else if (banktype==13)
      {
          printf("You selected Diamond bank plc\n");
      }
    else if (banktype==14)
      {
          printf("You selected Standard chartard bank plc\n");
      }
    else  if (banktype==15)
      {
          printf("You selected Ecobank plc\n");
      }
     else
      {
          printf("Error!!check the option you selected!!");
          return 0;
      }

      printf("Enter the receiver's account number:\n");
      scanf("%d",&accountnumber);
      printf("Enter amount to be transferred:\n");
      scanf("%d",&amounttobetransferred);
      if (amounttobetransferred%100==0)
      {
          printf("You are transferring the sum of %d\n",amounttobetransferred);
      }
      else{
          printf("Enter the amount in multiples of 100\n");
          return 0;
      }
      
      printf("1.confirm\n2.Exit\n");
      scanf("%d", &confirmtransfer);
      if (confirmtransfer==1)
      {
          printf("You've sucessfully transferred the sum of %d\n",amounttobetransferred);
      }
      else{
          printf("So you just wasted my time(sighs!!) ");
      }
      
             case 7:
          printf("Thanks for using our ATM service");//Users that doesn't select any of the listed choices above...
    break;
}
anothertransaction = 0;
while (anothertransaction!=1 && anothertransaction!=2){  
printf("\n\n\nWould you like to perform another ATM transaction?\n1.proceed\n2.Exit\n");
scanf("%d", &anothertransaction);

}
return 0;
}
return 0;
}    