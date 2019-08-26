#include<stdio.h>
#include<stdlib.h>
#include "libary/pokemonchar.h"
struct user{
 char name[20];
 int money;
};
struct user player;
void gameplay(char name[20],int paesa){
bulbasaur_pokemon();

oppbulbasaur_pokemon();




}
/* Project done by Peter Karki */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////``
 int main(){
 int i,ia,ib,menu,pokedesk,game,music;

 char reload = 'y',musicloop = 'y',pokedeskloop = 'y';

// system("gnome-terminal -x bash -c 'play music/ok.mp3; exec bash'");
 while(reload == 'y'){
 system("clear");
 printf("===================================================================\n");
 printf("||                                                               ||\n");
 printf("|| ||;;;;    ::     ||  || ||//// ||    ||     ::      ||    ||  ||\n");
 printf("|| ||  ||  ::   ::  || ||  ||     |||  |||   ::   ::   |||   ||  ||\n");
 printf("|| ||  || ::     :: |||    ||     || || ||  ::     ::  || || ||  ||\n");
 printf("|| ||;;;;  ::   ::  |||    ||//// ||    ||   ::   ::   ||  ||||  ||\n");
 printf("|| ||       :: ::   || ||  ||     ||    ||    :: ::    ||   |||  ||\n");
 printf("|| ||        ::     ||  || ||//// ||    ||      ::     ||    ||  ||\n");
 printf("||                                                               ||\n");
 printf("===================================================================\n");
 printf("||*******************PoKeMoN Battle Simulator********************||\n");
 printf("=========================By=Peter=Karki============================\n");
 printf("+++++++++++++++++++++++++  MAin Menu  +++++++++++++++++++++++++++++\n");
 printf("+ 1 :: Play                                                       +\n");
 printf("+ 2 :: Pokedesk (Pokemon Info list)                               +\n");
 printf("+ 3 :: Shop (Buy Pokemon)                                         +\n");
 printf("+ 4 :: Profile                                                    +\n");
 printf("+ 5 :: Background music                                           +\n");
 printf("+ 6 :: Exit                                                       +\n");
 printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
 printf("Enter a menu no :");
 scanf("%d",&menu);
 printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
 switch (menu){
  case 1 : system("clear");
           printf("======================================================\n");
           printf("||        Wellcome to Pokemon Battel simulator      ||\n");
           printf("======================================================\n");
           printf("||        1 :: New game                             ||\n");
           printf("||        2 :: Load from last game                  ||\n");
           printf("======================================================\n");
           printf("Enter your option :");
           getchar();
           scanf("%d",&game);
           if(game == 1){
             printf("Enter your name :");
             scanf("%s",&player.name);
             player.money = 500;
             FILE *ptr;
             ptr = fopen("user.txt","w");
             fprintf(ptr,"%s \t",player.name);
             fprintf(ptr,"%d",player.money);
             fclose(ptr);
             gameplay(player.name,player.money);
           }
           else if (game == 2){
             FILE *ptr;
             if ((ptr = fopen("user.txt","r")) == NULL){
               printf("No data :: Go to Newgame");
               }
             else {
                ptr = fopen("user.txt","r");
                fscanf(ptr,"%s \t",&player.name);
                fscanf(ptr,"%d",&player.money);
                fclose(ptr);
                gameplay(player.name,player.money);


             }

           }





            printf("go to main menu [y/n] :");
            getchar();
            scanf("%c",&reload);

           break ;
  case 2 : while(pokedeskloop == 'y'){
           system("clear");
           printf("======================================================\n");
           printf("|           Hello Wellcome to Pokedesk               |\n");
           printf("| In this world of Pokemon There are 3 Type of them: |\n");
           printf("======================================================\n");
           printf("|  1 ::Fire type Pokemon -Good against grass type    |\n");
           printf("|  2 ::Water type Pokemon -Good against fire types   |\n");
           printf("|  3 ::Grass type Pokemon -Good against water types  |\n");
           printf("======================================================\n");
           getchar();
           printf("Enter the Pokedesk no : ");
           scanf("%d",&pokedesk);
           system("clear");
           if(pokedesk == 1){
            printf("==========================================================\n");
            printf("||                     Fire Type Pokemon                ||\n");
            printf("==========================================================\n");
            charchar_pokemon();
            printf("==========================================================\n");
            printf("||         Name       : Charchar                        ||\n");
            printf("||         Height     : 2ft                             ||\n");
            printf("||         Species    : Lizard                          ||\n");
            printf("||         Weight     : 8.5kg                           ||\n");
            printf("||         Found area : Hot place and Jungle            ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&i);
            if (i == 1){
            printf("==========================================================\n");
            printf("||                     Fire Type Pokemon                ||\n");
            printf("==========================================================\n");
            charchar_pokemon();
            printf("==========================================================\n");
            printf("||         Name       : Charchar                        ||\n");
            printf("||         Height     : 2ft                             ||\n");
            printf("||         Species    : Lizard                          ||\n");
            printf("||         Weight     : 8.5kg                           ||\n");
            printf("||         Found area : Hot place and Jungle            ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&i);
            }
            else if (i == 2){
            system("clear");
            printf("==========================================================\n");
            printf("||                     Fire Type Pokemon                ||\n");
            printf("==========================================================\n");
            talonflame_pokemon();
            printf("==========================================================\n");
            printf("||         Name       : talonflame                      ||\n");
            printf("||         Height     : 1.04ft                          ||\n");
            printf("||         Species    : Bird                            ||\n");
            printf("||         Weight     : 2.5kg                           ||\n");
            printf("||         Found area : Jungle                          ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&i);
            }
            getchar();
            printf("Do you want to got to pokedesk [y/n] : ");
            scanf("%c",&pokedeskloop);
            }
            //else {
            //printf("Enter a vailed number \n");
            //getchar();
            //printf("Enter [1-2] go to that page :");
            //scanf("%d",&i);
            //}
            if (pokedesk == 2){
            printf("==========================================================\n");
            printf("||                   Water Type Pokemon                 ||\n");
            printf("==========================================================\n");
            Squirtle();
            printf("==========================================================\n");
            printf("||         Name       : Squirtle                        ||\n");
            printf("||         Height     : 1.8ft                           ||\n");
            printf("||         Species    : Turtle                          ||\n");
            printf("||         Weight     : 9kg                             ||\n");
            printf("||         Found area : Sea and lake                    ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&ia);
            if(ia == 1){

            printf("==========================================================\n");
            printf("||                   Water Type Pokemon                 ||\n");
            printf("==========================================================\n");
            Squirtle();
            printf("==========================================================\n");
            printf("||         Name       : Squirtle                        ||\n");
            printf("||         Height     : 1.8ft                           ||\n");
            printf("||         Species    : Turtle                          ||\n");
            printf("||         Weight     : 9kg                             ||\n");
            printf("||         Found area : Sea and lake                    ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&ia);
            }
            else if (ia == 2){
            system("clear");
            printf("==========================================================\n");
            printf("||                   Water Type Pokemon                 ||\n");
            printf("==========================================================\n");
            ekans_pokemon();
            printf("==========================================================\n");
            printf("||         Name       : Ekans                           ||\n");
            printf("||         Height     : 6ft                             ||\n");
            printf("||         Species    : Snake                           ||\n");
            printf("||         Weight     : 6kg                             ||\n");
            printf("||         Found area : Fresh water and swamp           ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&ia);
            }
            getchar();
            printf("Do you want to got to pokedesk [y/n] : ");
            scanf("%c",&pokedeskloop);
            }
            if (pokedesk == 3){
            printf("==========================================================\n");
            printf("||                   Grass Type Pokemon                 ||\n");
            printf("==========================================================\n");
            bulbasaur_pokemon();
            printf("==========================================================\n");
            printf("||         Name       : Balbasaur                        ||\n");
            printf("||         Height     : 2.4ft                            ||\n");
            printf("||         Species    : Seed                             ||\n");
            printf("||         Weight     : 9.6kg                            ||\n");
            printf("||         Found area : Grassland and jungle             ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&ib);
            if(ib == 1){

            printf("==========================================================\n");
            printf("||                   Grass Type Pokemon                 ||\n");
            printf("==========================================================\n");
            bulbasaur_pokemon();
            printf("==========================================================\n");
            printf("||         Name       : Balbasaur                        ||\n");
            printf("||         Height     : 2.4ft                            ||\n");
            printf("||         Species    : Seed                             ||\n");
            printf("||         Weight     : 9.6kg                            ||\n");
            printf("||         Found area : Grassland and jungle             ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&ib);
            }
            else if (ib == 2){
            system("clear");
            printf("==========================================================\n");
            printf("||                   Grass Type Pokemon                 ||\n");
            printf("==========================================================\n");
            beautifly_pokemon();
            printf("==========================================================\n");
            printf("||         Name       : Beautifly                        ||\n");
            printf("||         Height     : 3.03ft                           ||\n");
            printf("||         Species    : Butterfly                        ||\n");
            printf("||         Weight     : 28kg                             ||\n");
            printf("||         Found area : Grassland and Jungle             ||\n");
            printf("==========================================================\n");
            getchar();
            printf("Enter [1-2] go to that page :");
            scanf("%d",&ib);
            }
            getchar();
            printf("Do you want to got to pokedesk [y/n] : ");
            scanf("%c",&pokedeskloop);
            }
            else{
            printf("Enter a vailed number \n");
            pokedeskloop = 'n';
            }
            }
            printf("go to main menu [y/n] :");
            getchar();
            scanf("%c",&reload);

           break ;

  case 4 :     system("clear");
               FILE *ptr;
             if ((ptr = fopen("user.txt","r")) == NULL){
               printf("No data :: Go to Newgame");
               }
             else {
             ptr = fopen("user.txt","r");
                fscanf(ptr,"%s \t",&player.name);
                fscanf(ptr,"%d",&player.money);
                fclose(ptr);
 printf("         Your Profil mr : %s    \n",player.name);
 printf(" ( , | ,        .--.            \n");
 printf("(   =|= >      /.--.            \n");
 printf(" ( ` |         |====|           \n");
 printf("  `  |         |`::`|           \n");
 printf("     |     .-;`(..../`;_.-^-._  \n");
 printf("     / /  /  |...::..|`   :   `|\n");
 printf("     |:' |   /'''::''|   .:.   |\n");
 printf("      ( (;-,/    ::  |..:::::..|\n");
 printf("      |( <` > >._::_.| ':::::' |\n");
 printf("      | `""` /   ^^  |   ':'   |\n");

                printf("Name : %s \n",player.name);
                printf("Money : %d \n",player.money);


             }

            printf("go to main menu [y/n] :");
            getchar();
            scanf("%c",&reload);

           break ;
  case 5 : system("clear");
            while(musicloop == 'y'){
            system("clear");
            printf("======================================================\n");
            printf("||                  Select Music                    ||\n");
            printf("======================================================\n");
            printf("||   1 :: Track 1                                   ||\n");
            printf("||   2 :: Track 2                                   ||\n");
            printf("||   3 :: Track 3                                   ||\n");
            printf("||   4 :: Track 4                                   ||\n");
            printf("======================================================\n");
            printf("Enter the no :");
            scanf("%d",&music);
            if(music == 1){
               system("pkill 'gnome-terminal'");
               system("gnome-terminal -x bash -c 'play music/ok1.mp3; exec bash'");
               getchar();
               printf("Do you want to reselect the music [y/n]:");
               scanf("%c",&musicloop);

            }
           else if(music == 2){
               system("pkill 'gnome-terminal'");
               system("gnome-terminal -x bash -c 'play music/ok2.mp3; exec bash'");
               getchar();
               printf("Do you want to reselect the music [y/n]:");
               scanf("%c",&musicloop);

            }
           else if(music == 3){
               system("pkill 'gnome-terminal'");
               system("gnome-terminal -x bash -c 'play music/ok3.mp3; exec bash'");
               getchar();
               printf("Do you want to reselect the music [y/n]:");
               scanf("%c",&musicloop);

            }
           else if(music == 4){
               system("gnome-terminal -x bash -c 'play music/ok.mp3; exec bash'");
               getchar();
               printf("Do you want to reselect the music [y/n]:");
               scanf("%c",&musicloop);

            }
            else {
             printf("Enter vailed number \n");
              getchar();
               printf("Do you want to reselect the music [y/n]:");
               scanf("%c",&musicloop);


            }
            }

            printf("go to main menu [y/n] :");
				getchar();
				scanf("%c",&reload);

            break;


  case 6 : system("clear");
            printf("Have a great day bye bye ");
            reload = 'n';
            getchar();
            system("exit");
            break ;



  default : printf("Enter a vailed number \n");
				printf("go to main menu [y/n] :");
				getchar();
				scanf("%c",&reload);
}
 }




 return 0;
}
