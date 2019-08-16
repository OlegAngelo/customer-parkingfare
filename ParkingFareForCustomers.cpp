//VEHICLE               FIRST RATE                     SECOND RATE
//car -           $0.00/hr first 3 hr             $1.50/hr after 3 hr
//truck -         $1.00/hr first 2 hr             $2.30/hr after 2 hr       
//bus -           $2.00/hr for first hr           $3.70/hr after first hr  

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char vehicleSelector;
    int vehicleEnteredInHour, vehicleEnteredInMinutes, vehicleLeftInHour, vehicleLeftInMinutes, finalVehicleLeftInMinutes, finalVehicleLeftInHour, initialVehicleLeftInMinutes, initialVehicleLeftInHour, totalChargePerHourForCar;
    float totalChargePerHourForBus, totalChargePerHourForTruck, initialChargePerHourForBus;

    printf("Type of vehicle [B/b for Bus], [C/c for Car], [T/t for Truck]?  ");
    scanf("%c", &vehicleSelector);
    
    switch (vehicleSelector)
    {
    case 'c': //small 'c' for car input by user
        printf("\n Hour vehicle entered lot (0 - 24)?   ");                        
        scanf("%d", &vehicleEnteredInHour);                                    
            if(vehicleEnteredInHour < 0 || vehicleEnteredInHour > 24){
                printf("Invalid input! \n");
                
            }else{
                printf("Minute vehicle entered lot (0 - 60)?  ");                     
                scanf("%d", &vehicleEnteredInMinutes);
                    if(vehicleEnteredInMinutes < 0 || vehicleEnteredInMinutes > 60){
                        printf("Invalid input! \n");
                        
                    }else{
                        printf("Hour vehicle left lot (0 - 24)?       ");
                        scanf("%d", &vehicleLeftInHour);
                            if(vehicleLeftInHour < 0 || vehicleLeftInHour > 24){
                                printf("Invalid input! \n");
                                
                            }else{
                                printf("Minute vehicle left lot (0 - 60)?     ");
                                scanf("%d", &vehicleLeftInMinutes);
                                    if(vehicleLeftInMinutes < 0 || vehicleLeftInMinutes > 60){
                                        printf("\n Invalid input! \n");
                                        
                                    }else{
                                		printf("------------------------------------------------------------------ \n");
                                        if(vehicleEnteredInMinutes <= vehicleLeftInMinutes){
                                            initialVehicleLeftInMinutes = (vehicleLeftInMinutes + 60) / 60;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = (initialVehicleLeftInMinutes - vehicleEnteredInMinutes) / 60;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Car \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else if(vehicleEnteredInMinutes > vehicleLeftInMinutes){
                                       		initialVehicleLeftInMinutes = vehicleEnteredInMinutes - vehicleLeftInMinutes;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = vehicleEnteredInMinutes - initialVehicleLeftInMinutes;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Car \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else{
                                        	printf("Invalid input. Take note: military time!");
										}
                                            if(finalVehicleLeftInHour > 3){
                                                totalChargePerHourForCar = finalVehicleLeftInHour + 1.50;
                                                printf("TOTAL CHARGE        $%.02d \n", totalChargePerHourForCar);

                                            }else{
                                                printf("TOTAL CHARGE     $0.00 \n");
                                            }
                                    } 
                            }      
                    }    
            }    
        break;

    case 'C': //big 'C' for Car input by user
        printf("\n Hour vehicle entered lot (0 - 24)?   ");                        
        scanf("%d", &vehicleEnteredInHour);                                    
            if(vehicleEnteredInHour < 0 || vehicleEnteredInHour > 24){
                printf("Invalid input! \n");
                
            }else{
                printf("Minute vehicle entered lot (0 - 60)?  ");                     
                scanf("%d", &vehicleEnteredInMinutes);
                    if(vehicleEnteredInMinutes < 0 || vehicleEnteredInMinutes > 60){
                        printf("Invalid input! \n");
                        
                    }else{
                        printf("Hour vehicle left lot (0 - 24)?       ");
                        scanf("%d", &vehicleLeftInHour);
                            if(vehicleLeftInHour < 0 || vehicleLeftInHour > 24){
                                printf("Invalid input! \n");
                                
                            }else{
                                printf("Minute vehicle left lot (0 - 60)?     ");
                                scanf("%d", &vehicleLeftInMinutes);
                                    if(vehicleLeftInMinutes < 0 || vehicleLeftInMinutes > 60){
                                        printf("\n Invalid input! \n");
                                        
                                    }else{
                                		printf("------------------------------------------------------------------ \n");
                                        if(vehicleEnteredInMinutes <= vehicleLeftInMinutes){
                                            initialVehicleLeftInMinutes = (vehicleLeftInMinutes + 60) / 60;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = (initialVehicleLeftInMinutes - vehicleEnteredInMinutes) / 60;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Car \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else if(vehicleEnteredInMinutes > vehicleLeftInMinutes){
                                       		initialVehicleLeftInMinutes = vehicleEnteredInMinutes - vehicleLeftInMinutes;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = vehicleEnteredInMinutes - initialVehicleLeftInMinutes;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Car \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else{
                                        	printf("Invalid input. Take note: military time!");
										}
                                            if(finalVehicleLeftInHour > 3){
                                                totalChargePerHourForCar = finalVehicleLeftInHour + 1.50;
                                                printf("TOTAL CHARGE        $%.02d \n", totalChargePerHourForCar);

                                            }else{
                                                printf("TOTAL CHARGE     $0.00 \n");
                                            }
                                    } 
                            }      
                    }    
            }    
        break;
    
    case 'b': //small 'b' for Bus input by user
        printf("\n Hour vehicle entered lot (0 - 24)?   ");                        
        scanf("%d", &vehicleEnteredInHour);                                    
            if(vehicleEnteredInHour < 0 || vehicleEnteredInHour > 24){
                printf("Invalid input! \n");
                
            }else{
                printf("Minute vehicle entered lot (0 - 60)?  ");                     
                scanf("%d", &vehicleEnteredInMinutes);
                    if(vehicleEnteredInMinutes < 0 || vehicleEnteredInMinutes > 60){
                        printf("Invalid input! \n");
                        
                    }else{
                        printf("Hour vehicle left lot (0 - 24)?       ");
                        scanf("%d", &vehicleLeftInHour);
                            if(vehicleLeftInHour < 0 || vehicleLeftInHour > 24){
                                printf("Invalid input! \n");
                                
                            }else{
                                printf("Minute vehicle left lot (0 - 60)?     ");
                                scanf("%d", &vehicleLeftInMinutes);
                                    if(vehicleLeftInMinutes < 0 || vehicleLeftInMinutes > 60){
                                        printf("\n Invalid input! \n");
                                        
                                    }else{
                                		printf("------------------------------------------------------------------ \n");
                                        if(vehicleEnteredInMinutes <= vehicleLeftInMinutes){
                                            initialVehicleLeftInMinutes = (vehicleLeftInMinutes + 60) / 60;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = (initialVehicleLeftInMinutes - vehicleEnteredInMinutes) / 60;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Bus \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else if(vehicleEnteredInMinutes > vehicleLeftInMinutes){
                                       		initialVehicleLeftInMinutes = vehicleEnteredInMinutes - vehicleLeftInMinutes;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = vehicleEnteredInMinutes - initialVehicleLeftInMinutes;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Car \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else{
                                        	printf("Invalid input. Take note: military time!");
										}
                                            if(finalVehicleLeftInHour >= 1){
                                                initialChargePerHourForBus = finalVehicleLeftInHour - 1;
                                                totalChargePerHourForBus = (totalChargePerHourForBus * 3.70) + 2;
                                                printf("TOTAL CHARGE        $%.2f \n", totalChargePerHourForBus);

                                            }else{
                                                printf("TOTAL CHARGE     $0.00 \n");
                                            }
                                    } 
                            }      
                    }    
            }    
        break;

    case 'B': //big 'b' for Bus input by user
        printf("\n Hour vehicle entered lot (0 - 24)?   ");                        
        scanf("%d", &vehicleEnteredInHour);                                    
            if(vehicleEnteredInHour < 0 || vehicleEnteredInHour > 24){
                printf("Invalid input! \n");
                
            }else{
                printf("Minute vehicle entered lot (0 - 60)?  ");                     
                scanf("%d", &vehicleEnteredInMinutes);
                    if(vehicleEnteredInMinutes < 0 || vehicleEnteredInMinutes > 60){
                        printf("Invalid input! \n");
                        
                    }else{
                        printf("Hour vehicle left lot (0 - 24)?       ");
                        scanf("%d", &vehicleLeftInHour);
                            if(vehicleLeftInHour < 0 || vehicleLeftInHour > 24){
                                printf("Invalid input! \n");
                                
                            }else{
                                printf("Minute vehicle left lot (0 - 60)?     ");
                                scanf("%d", &vehicleLeftInMinutes);
                                    if(vehicleLeftInMinutes < 0 || vehicleLeftInMinutes > 60){
                                        printf("\n Invalid input! \n");
                                        
                                    }else{
                                		printf("------------------------------------------------------------------ \n");
                                        if(vehicleEnteredInMinutes <= vehicleLeftInMinutes){
                                            initialVehicleLeftInMinutes = (vehicleLeftInMinutes + 60) / 60;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = (initialVehicleLeftInMinutes - vehicleEnteredInMinutes) / 60;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Car \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else if(vehicleEnteredInMinutes > vehicleLeftInMinutes){
                                       		initialVehicleLeftInMinutes = vehicleEnteredInMinutes - vehicleLeftInMinutes;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = vehicleEnteredInMinutes - initialVehicleLeftInMinutes;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Bus \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else{
                                        	printf("Invalid input. Take note: military time!");
										}
                                            if(finalVehicleLeftInHour >= 1){
                                                initialChargePerHourForBus = finalVehicleLeftInHour - 1;
                                                totalChargePerHourForBus = (totalChargePerHourForBus * 3.70) + 2;
                                                printf("TOTAL CHARGE        $%.2f \n", totalChargePerHourForBus);

                                            }else{
                                                printf("TOTAL CHARGE     $0.00 \n");
                                            }
                                    } 
                            }      
                    }    
            }    
        break;

    case 't': //small 't' for Truck input by user
        printf("\n Hour vehicle entered lot (0 - 24)?   ");                        
        scanf("%d", &vehicleEnteredInHour);                                    
            if(vehicleEnteredInHour < 0 || vehicleEnteredInHour > 24){
                printf("Invalid input! \n");
                
            }else{
                printf("Minute vehicle entered lot (0 - 60)?  ");                     
                scanf("%d", &vehicleEnteredInMinutes);
                    if(vehicleEnteredInMinutes < 0 || vehicleEnteredInMinutes > 60){
                        printf("Invalid input! \n");
                        
                    }else{
                        printf("Hour vehicle left lot (0 - 24)?       ");
                        scanf("%d", &vehicleLeftInHour);
                            if(vehicleLeftInHour < 0 || vehicleLeftInHour > 24){
                                printf("Invalid input! \n");
                                
                            }else{
                                printf("Minute vehicle left lot (0 - 60)?     ");
                                scanf("%d", &vehicleLeftInMinutes);
                                    if(vehicleLeftInMinutes < 0 || vehicleLeftInMinutes > 60){
                                        printf("\n Invalid input! \n");
                                        
                                    }else{
                                		printf("------------------------------------------------------------------ \n");
                                        if(vehicleEnteredInMinutes <= vehicleLeftInMinutes){
                                            initialVehicleLeftInMinutes = (vehicleLeftInMinutes + 60) / 60;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = (initialVehicleLeftInMinutes - vehicleEnteredInMinutes) / 60;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Truck \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else if(vehicleEnteredInMinutes > vehicleLeftInMinutes){
                                       		initialVehicleLeftInMinutes = vehicleEnteredInMinutes - vehicleLeftInMinutes;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = vehicleEnteredInMinutes - initialVehicleLeftInMinutes;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Truck \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else{
                                        	printf("Invalid input. Take note: military time!");
										}
                                            if(finalVehicleLeftInHour > 2){
                                                totalChargePerHourForTruck = finalVehicleLeftInHour - 2;
                                                totalChargePerHourForTruck = (totalChargePerHourForTruck * 2.30) + 2;
                                                printf("TOTAL CHARGE        $%.2f \n", totalChargePerHourForTruck);

                                            }else{
                                                printf("TOTAL CHARGE     $0.00 \n");
                                            }
                                    } 
                            }      
                    }    
            }    
        break;

    case 'T': //big 'T' for Truck input by user
        printf("\n Hour vehicle entered lot (0 - 24)?   ");                        
        scanf("%d", &vehicleEnteredInHour);                                    
            if(vehicleEnteredInHour < 0 || vehicleEnteredInHour > 24){
                printf("Invalid input! \n");
                
            }else{
                printf("Minute vehicle entered lot (0 - 60)?  ");                     
                scanf("%d", &vehicleEnteredInMinutes);
                    if(vehicleEnteredInMinutes < 0 || vehicleEnteredInMinutes > 60){
                        printf("Invalid input! \n");
                        
                    }else{
                        printf("Hour vehicle left lot (0 - 24)?       ");
                        scanf("%d", &vehicleLeftInHour);
                            if(vehicleLeftInHour < 0 || vehicleLeftInHour > 24){
                                printf("Invalid input! \n");
                                
                            }else{
                                printf("Minute vehicle left lot (0 - 60)?     ");
                                scanf("%d", &vehicleLeftInMinutes);
                                    if(vehicleLeftInMinutes < 0 || vehicleLeftInMinutes > 60){
                                        printf("\n Invalid input! \n");
                                        
                                    }else{
                                		printf("------------------------------------------------------------------ \n");
                                        if(vehicleEnteredInMinutes <= vehicleLeftInMinutes){
                                            initialVehicleLeftInMinutes = (vehicleLeftInMinutes + 60) / 60;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = (initialVehicleLeftInMinutes - vehicleEnteredInMinutes) / 60;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Truck \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else if(vehicleEnteredInMinutes > vehicleLeftInMinutes){
                                       		initialVehicleLeftInMinutes = vehicleEnteredInMinutes - vehicleLeftInMinutes;
                                            initialVehicleLeftInHour = vehicleLeftInHour - 1;

                                            finalVehicleLeftInMinutes = vehicleEnteredInMinutes - initialVehicleLeftInMinutes;
                                            finalVehicleLeftInHour = (initialVehicleLeftInHour - vehicleEnteredInHour) + 1;
                                    
                                           
                                            printf("PARKING LOT CHARGE \n \n");
                                            printf("Type of vehicle: Truck \n" );
                                            printf("TIME IN           %02d:%02d \n", vehicleEnteredInHour, vehicleEnteredInMinutes);
                                            printf("TIME OUT          %02d:%02d \n", vehicleLeftInHour, vehicleLeftInMinutes);
                                            printf("                --------- \n");
                                            printf("PARKING TIME      %02d:%02d \n", finalVehicleLeftInHour, finalVehicleLeftInMinutes);
                                            printf("ROUNDED TOTAL        %02d \n", finalVehicleLeftInHour);
                                            printf("                --------- \n");
                                        }else{
                                        	printf("Invalid input. Take note: military time!");
										}
                                            if(finalVehicleLeftInHour > 2){
                                                totalChargePerHourForTruck = finalVehicleLeftInHour - 2;
                                                totalChargePerHourForTruck = (totalChargePerHourForTruck * 2.30) + 2;
                                                printf("TOTAL CHARGE        $%.2f \n", totalChargePerHourForTruck);

                                            }else{
                                                printf("TOTAL CHARGE     $0.00 \n");
                                            }
                                    } 
                            }      
                    }    
            }    
        break;

    default:
        printf("Invalid Input! Please try again. \n");

    }
    return 0;
}
    

