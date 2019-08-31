#include<stdio.h>
#include<stdlib.h>
#include "libary/pokemonchar.h"
struct user{
 char name[20];
 int money;
};
struct pokemon{
int power1,power2,power3,power4,health,health1;
};
struct user player;
/////////////////////////////////////////////////////////s//////////////////////////////////////////////////////////////////
void gameplay(char name[20],int paesa){
getchar();
int pokemonchoos,ga,i=0,b = 1,oppo;
char ok = 'n';
struct pokemon bul;
bul.power1 = 30;
bul.power2 = 60;
bul.power3 = 70;
bul.power4 = 40;
bul.health = 250;
bul.health1 = 250;
struct pokemon charc;
charc.power1 = 40;
charc.power2 = 70;
charc.power3 = 80;
charc.power4 = 50;
charc.health = 165;
charc.health1 = 165;
struct pokemon sq;
sq.power1 = 40;
sq.power2 = 70;
sq.power3 = 80;
sq.power4 = 50;
sq.health = 165;
sq.health1 = 165;
struct pokemon be;
be.power1 = 40;
be.power2 = 70;
be.power3 = 80;
be.power4 = 50;
be.health = 165;
be.health1 = 165;
struct pokemon ta;
ta.power1 = 30;
ta.power2 = 60;
ta.power3 = 70;
ta.power4 = 40;
ta.health = 250;
ta.health1 = 250;
struct pokemon ek;
ek.power1 = 30;
ek.power2 = 60;
ek.power3 = 70;
ek.power4 = 40;
ek.health = 250;
ek.health1 = 250;
while( ok == 'n'){
printf("========================================================\n");
printf("||              Choose your pokemon                   ||\n");
printf("========================================================\n");
printf("||  1:: bulbasaur(defence)      2:: charchar(attack)  ||\n");
printf("||  3:: Squirtle(attack)        4:: beautifly(attack) ||\n");
printf("||  5:: talonflame(defence)     6:: ekans(defence)    ||\n");
printf("========================================================\n");
printf("Choose your pokemon : ");
scanf("%d",&pokemonchoos);
printf("Choose your opponent : ");
scanf("%d",&oppo);
system("clear");
////////////////////////////////////////////
if(pokemonchoos == 1 && oppo == 6){
printf("You choose : Bulbasaur \n");
bulbasaur_pokemon();
printf("==========================================================\n");
printf("||                 (Bulbasaur vs Ekans)                 ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppekans_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("======================================================\n");
printf("|| 1 :: GrassBlade               2 :: Leaf attack   ||\n");
printf("|| 3 :: Blow                     4 :: Sharp vine    ||\n");
printf("======================================================\n");
printf("|| Health :: Bulbasur = %d || ekans = %d ||\n",bul.health,ek.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with GrassBlade \n");
 printf("////// %d - %d \n",ek.health,bul.power1);
 ek.health = ek.health - bul.power1;
 printf("EKans attack with Warp Gas \n");
 printf("::::::: %d - %d \n",bul.health,ek.power4);
 bul.health = bul.health - ek.power4;
}
if(ga == 2){

 printf("You attack with leaf attack \n");
 printf("////// %d - %d \n",ek.health,bul.power2);
 ek.health = ek.health - bul.power2;

 printf("EKans attack with Acid glare \n");
 printf("::::::: %d - %d \n",bul.health,ek.power1);
 bul.health = bul.health - ek.power1;
}
if(ga == 3){

 printf("You attack with blow \n");
 printf("////// %d - %d \n",ek.health,bul.power3);
 ek.health = ek.health - bul.power3;

 printf("EKans attack with Poison Stings \n");
 printf("::::::: %d - %d \n",bul.health,ek.power3);
 bul.health = bul.health - ek.power3;
}
if(ga == 4){

 printf("You attack with sharp vine \n");
 printf("////// %d - %d \n",ek.health,bul.power4);
 ek.health = ek.health - bul.power4;

 printf("EKans attack with Slam leer \n");
 printf("::::::: %d - %d \n",bul.health,ek.power2);
 bul.health = bul.health - ek.power2;
}
if(ek.health <= 0 || bul.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (ek.health < bul.health){
  printf("===========================\n");
  printf("||  Winner is Bulbasaur  ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||    Winner is Ekans    ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
if(pokemonchoos == 1 && oppo == 5){
printf("You choose : Bulbasaur \n");
bulbasaur_pokemon();
printf("==========================================================\n");
printf("||                 (Bulbasaur vs Talonflame)            ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
opptalonflame_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("======================================================\n");
printf("|| 1 :: GrassBlade               2 :: Leaf attack   ||\n");
printf("|| 3 :: Blow                     4 :: Sharp vine    ||\n");
printf("======================================================\n");
printf("|| Health :: Bulbasur = %d || Talonflame = %d ||\n",bul.health,ta.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with GrassBlade \n");
 printf("////// %d - %d \n",ta.health,bul.power1);
 ta.health -= bul.power1;
 printf("talonflame attack with Steel Wings \n");
 printf("::::::: %d - %d \n",bul.health,ta.power4);
 bul.health -= ta.power4;
}
if(ga == 2){

 printf("You attack with leaf attack \n");
 printf("////// %d - %d \n",ta.health,bul.power2);
 ta.health -=  bul.power2;

 printf("talonflame attack with Razor Wind \n");
 printf("::::::: %d - %d \n",bul.health,ta.power1);
 bul.health -= ta.power1;
}
if(ga == 3){

 printf("You attack with blow \n");
 printf("////// %d - %d \n",ta.health,bul.power3);
 ta.health -= bul.power3;

 printf("talonflame attack with TailWind \n");
 printf("::::::: %d - %d \n",bul.health,ta.power3);
 bul.health -= ta.power3;
}
if(ga == 4){

 printf("You attack with sharp vine \n");
 printf("////// %d - %d \n",ta.health,bul.power4);
 ta.health -= bul.power4;

 printf("talonflame attack with Flame Charge \n");
 printf("::::::: %d - %d \n",bul.health,ta.power2);
 bul.health = bul.health - ta.power2;
}
if(ta.health <= 0 || bul.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (ta.health < bul.health){
  printf("===========================\n");
  printf("||  Winner is Bulbasaur  ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Talonflame ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
/////////////////////////////////////////////////////////////////////////////////////////////
if(pokemonchoos == 1 && oppo == 4){
printf("You choose : Bulbasaur \n");
bulbasaur_pokemon();
printf("==========================================================\n");
printf("||                 (Bulbasaur vs Beautilfly)            ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppbeautifly_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("======================================================\n");
printf("|| 1 :: GrassBlade               2 :: Leaf attack   ||\n");
printf("|| 3 :: Blow                     4 :: Sharp vine    ||\n");
printf("======================================================\n");
printf("|| Health :: Bulbasur = %d || Beautilfly = %d ||\n",bul.health,be.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with GrassBlade \n");
 printf("////// %d - %d \n",be.health,bul.power1);
 be.health -= bul.power1;
 printf("Beautilfly attack with Whirlwind \n");
 printf("::::::: %d - %d \n",bul.health,be.power4);
 bul.health -= be.power4;
}
if(ga == 2){

 printf("You attack with leaf attack \n");
 printf("////// %d - %d \n",be.health,bul.power2);
 be.health -=  bul.power2;

 printf("Beautilfly attack with Morning Sun \n");
 printf("::::::: %d - %d \n",bul.health,be.power1);
 bul.health -= be.power1;
}
if(ga == 3){

 printf("You attack with blow \n");
 printf("////// %d - %d \n",be.health,bul.power3);
 be.health -= bul.power3;

 printf("Beautilfly attack with Silver wind \n");
 printf("::::::: %d - %d \n",bul.health,be.power3);
 bul.health -= be.power3;
}
if(ga == 4){

 printf("You attack with sharp vine \n");
 printf("////// %d - %d \n",be.health,bul.power4);
 be.health -= bul.power4;

 printf("Beautilfly attack with Air cutter \n");
 printf("::::::: %d - %d \n",bul.health,be.power2);
 bul.health = bul.health - be.power2;
}
if(be.health <= 0 || bul.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (be.health < bul.health){
  printf("===========================\n");
  printf("||  Winner is Bulbasaur  ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Beautilfly ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
///////////////////////////////
/////////////////////////////////////////////////////////////////
if(pokemonchoos == 1 && oppo == 3){
printf("You choose : Bulbasaur \n");
bulbasaur_pokemon();
printf("==========================================================\n");
printf("||                 (Bulbasaur vs Squirtle)              ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppSquirtle();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("======================================================\n");
printf("|| 1 :: GrassBlade               2 :: Leaf attack   ||\n");
printf("|| 3 :: Blow                     4 :: Sharp vine    ||\n");
printf("======================================================\n");
printf("|| Health :: Bulbasur = %d || Squirtle = %d ||\n",bul.health,sq.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with GrassBlade \n");
 printf("////// %d - %d \n",sq.health,bul.power1);
 sq.health -= bul.power1;
 printf("Squirtle attack with Water blade \n");
 printf("::::::: %d - %d \n",bul.health,sq.power4);
 bul.health -= sq.power4;
}
if(ga == 2){

 printf("You attack with leaf attack \n");
 printf("////// %d - %d \n",sq.health,bul.power2);
 sq.health -=  bul.power2;

 printf("Squirtle attack with Water Gun \n");
 printf("::::::: %d - %d \n",bul.health,sq.power1);
 bul.health -= sq.power1;
}
if(ga == 3){

 printf("You attack with blow \n");
 printf("////// %d - %d \n",sq.health,bul.power3);
 sq.health -= bul.power3;

 printf("Squirtle attack with Bubble gun \n");
 printf("::::::: %d - %d \n",bul.health,sq.power3);
 bul.health -= sq.power3;
}
if(ga == 4){

 printf("You attack with sharp vine \n");
 printf("////// %d - %d \n",sq.health,bul.power4);
 sq.health -= bul.power4;

 printf("Squirtle attack with Tail whip \n");
 printf("::::::: %d - %d \n",bul.health,sq.power2);
 bul.health = bul.health - sq.power2;
}
if(sq.health <= 0 || bul.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (sq.health < bul.health){
  printf("===========================\n");
  printf("||  Winner is Bulbasaur  ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Squirtle   ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
//////////////////////////////////////////////
if(pokemonchoos == 1 && oppo == 1){
printf("You choose : Bulbasaur \n");
bulbasaur_pokemon();
printf("==========================================================\n");
printf("||                 (Bulbasaur vs Bulbasaur)             ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppbulbasaur_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("======================================================\n");
printf("|| 1 :: GrassBlade               2 :: Leaf attack   ||\n");
printf("|| 3 :: Blow                     4 :: Sharp vine    ||\n");
printf("======================================================\n");
printf("|| Health :: Bulbasur = %d || Bulbasur = %d ||\n",bul.health,bul.health1);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with GrassBlade \n");
 printf("////// %d - %d \n",bul.health1,bul.power1);
 bul.health1 -= bul.power1;
 printf("Bulbasur attack with Sharp Vine \n");
 printf("::::::: %d - %d \n",bul.health,bul.power4);
 bul.health -= bul.power4;
}
if(ga == 2){

 printf("You attack with leaf attack \n");
 printf("////// %d - %d \n",bul.health1,bul.power2);
 bul.health1 -=  bul.power2;

 printf("Bulbasur attack with Grass Blade \n");
 printf("::::::: %d - %d \n",bul.health,bul.power1);
 bul.health -= bul.power1;
}
if(ga == 3){

 printf("You attack with blow \n");
 printf("////// %d - %d \n",bul.health1,bul.power3);
 bul.health1 -= bul.power3;

 printf("Bulbasur attack with Blow \n");
 printf("::::::: %d - %d \n",bul.health,bul.power3);
 bul.health -= bul.power3;
}
if(ga == 4){

 printf("You attack with sharp vine \n");
 printf("////// %d - %d \n",bul.health1,bul.power4);
 bul.health1 -= bul.power4;

 printf("Bulbasur attack with Leaf Attack \n");
 printf("::::::: %d - %d \n",bul.health,bul.power2);
 bul.health = bul.health - bul.power2;
}
if(bul.health1 <= 0 || bul.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (bul.health1 < bul.health){
  printf("================================\n");
  printf("||  Winner is Bulbasaur(You)  ||\n");
  printf("================================\n");
}
else {
printf("======================================\n");
printf("||   Winner is Bulbasaur(Opponent)  ||\n");
printf("======================================\n");

}
}

else{
 printf("OK thats rude bye bye then \n");
 system("exit");

}

}
//////////////////////////////
if(pokemonchoos == 1 && oppo == 2){
printf("You choose : Bulbasaur \n");
bulbasaur_pokemon();
printf("==========================================================\n");
printf("||                 (Bulbasaur vs Charchar)              ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppcharchar_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("======================================================\n");
printf("|| 1 :: GrassBlade               2 :: Leaf attack   ||\n");
printf("|| 3 :: Blow                     4 :: Sharp vine    ||\n");
printf("======================================================\n");
printf("|| Health :: Bulbasur = %d || Charchar = %d ||\n",bul.health,charc.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with GrassBlade \n");
 printf("////// %d - %d \n",charc.health,bul.power1);
 charc.health -= bul.power1;
 printf("Charchar attack with Dragon Roar \n");
 printf("::::::: %d - %d \n",bul.health,charc.power4);
 bul.health -= charc.power4;
}
if(ga == 2){

 printf("You attack with leaf attack \n");
 printf("////// %d - %d \n",charc.health,bul.power2);
 charc.health -=  bul.power2;

 printf("Charchar attack with Wings Attack \n");
 printf("::::::: %d - %d \n",bul.health,charc.power1);
 bul.health -= charc.power1;
}
if(ga == 3){

 printf("You attack with blow \n");
 printf("////// %d - %d \n",charc.health,bul.power3);
 charc.health -= bul.power3;

 printf("Charchar attack with Overhead Fire \n");
 printf("::::::: %d - %d \n",bul.health,charc.power3);
 bul.health -= charc.power3;
}
if(ga == 4){

 printf("You attack with sharp vine \n");
 printf("////// %d - %d \n",charc.health,bul.power4);
 charc.health -= bul.power4;

 printf("Charchar attack with Fire Blast \n");
 printf("::::::: %d - %d \n",bul.health,charc.power2);
 bul.health = bul.health - charc.power2;
}
if(charc.health <= 0 || bul.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (charc.health < bul.health){
  printf("===========================\n");
  printf("||  Winner is Bulbasaur  ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Charchar   ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
////////////////////////////////////////////////////////Charchar////////////////////////////////////////////////////////////////
if(pokemonchoos == 2 && oppo == 6){
printf("You choose : Charchar \n");
charchar_pokemon();
printf("==========================================================\n");
printf("||                 (Charchar vs Ekans)                 ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppekans_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Winds attack               2 :: Fireblast      ||\n");
printf("|| 3 :: Overheat fire              4 :: Dragon Roar    ||\n");
printf("=========================================================\n");
printf("|| Health :: charchar = %d || ekans = %d ||\n",charc.health,ek.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Winds attack \n");
 printf("////// %d - %d \n",ek.health,charc.power1);
 ek.health = ek.health - charc.power1;
 printf("EKans attack with Warp Gas \n");
 printf("::::::: %d - %d \n",charc.health,ek.power4);
 charc.health -= ek.power4;
}
if(ga == 2){

 printf("You attack with Fire blast\n");
 printf("////// %d - %d \n",ek.health,charc.power2);
 ek.health = ek.health - charc.power2;

 printf("EKans attack with Acid glare \n");
 printf("::::::: %d - %d \n",charc.health,ek.power1);
 charc.health -= ek.power1;
}
if(ga == 3){

 printf("You attack with Overhead fire (Blue flame) \n");
 printf("////// %d - %d \n",ek.health,charc.power3);
 ek.health = ek.health - charc.power3;

 printf("EKans attack with Poison Stings \n");
 printf("::::::: %d - %d \n",charc.health,ek.power3);
 charc.health -= ek.power3;
}
if(ga == 4){

 printf("You attack with Dragon Roar \n");
 printf("////// %d - %d \n",ek.health,charc.power4);
 ek.health = ek.health - charc.power4;

 printf("EKans attack with Slam leer \n");
 printf("::::::: %d - %d \n",charc.health,ek.power2);
 charc.health -= ek.power2;
}
if(ek.health <= 0 || charc.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (ek.health < charc.health){
  printf("===========================\n");
  printf("||  Winner is Charchar   ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||    Winner is Ekans    ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
if(pokemonchoos == 2 && oppo == 5){
printf("You choose : Charchar \n");
charchar_pokemon();
printf("==========================================================\n");
printf("||                 (Charchar vs Talonflame)            ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
opptalonflame_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Winds attack               2 :: Fireblast      ||\n");
printf("|| 3 :: Overheat fire              4 :: Dragon Roar    ||\n");
printf("=========================================================\n");
printf("|| Health :: charchar = %d || Talonflame = %d ||\n",charc.health,ta.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);
if(ga == 1){
 printf("You attack with Wings attack \n");
 printf("////// %d - %d \n",ta.health,charc.power1);
 ta.health -= charc.power1;
 printf("talonflame attack with Steel Wings \n");
 printf("::::::: %d - %d \n",charc.health,ta.power4);
 charc.health -= ta.power4;
}
if(ga == 2){

 printf("You attack with Fireblast \n");
 printf("////// %d - %d \n",ta.health,charc.power2);
 ta.health -=  charc.power2;

 printf("talonflame attack with Razor Wind \n");
 printf("::::::: %d - %d \n",charc.health,ta.power1);
 charc.health -= ta.power1;
}
if(ga == 3){

 printf("You attack with Overheat fire \n");
 printf("////// %d - %d \n",ta.health,charc.power3);
 ta.health -= charc.power3;

 printf("talonflame attack with TailWind \n");
 printf("::::::: %d - %d \n",charc.health,ta.power3);
 charc.health -= ta.power3;
}
if(ga == 4){

 printf("You attack with Dragon Roar \n");
 printf("////// %d - %d \n",ta.health,charc.power4);
 ta.health -= charc.power4;

 printf("talonflame attack with Flame Charge \n");
 printf("::::::: %d - %d \n",charc.health,ta.power2);
 charc.health = charc.health - ta.power2;
}
if(ta.health <= 0 || charc.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (ta.health < charc.health){
  printf("===========================\n");
  printf("||  Winner is Charchar   ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Talonflame ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
/////////////////////////////////////////////////////////////////////////////////////////////
if(pokemonchoos == 2 && oppo == 4){
printf("You choose : Charchar \n");
charchar_pokemon();
printf("==========================================================\n");
printf("||                 (charchar vs Beautilfly)             ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppbeautifly_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Winds attack               2 :: Fireblast      ||\n");
printf("|| 3 :: Overheat fire              4 :: Dragon Roar    ||\n");
printf("=========================================================\n");
printf("|| Health :: Charchar = %d || Beautilfly = %d ||\n",charc.health,be.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Wings attack \n");
 printf("////// %d - %d \n",be.health,charc.power1);
 be.health -= charc.power1;
 printf("Beautilfly attack with Whirlwind \n");
 printf("::::::: %d - %d \n",charc.health,be.power4);
 charc.health -= be.power4;
}
if(ga == 2){

 printf("You attack with Fireblast \n");
 printf("////// %d - %d \n",be.health,charc.power2);
 be.health -=  charc.power2;

 printf("Beautilfly attack with Morning Sun \n");
 printf("::::::: %d - %d \n",charc.health,be.power1);
 charc.health -= be.power1;
}
if(ga == 3){

 printf("You attack with Overheat fire \n");
 printf("////// %d - %d \n",be.health,charc.power3);
 be.health -= charc.power3;

 printf("Beautilfly attack with Silver wind \n");
 printf("::::::: %d - %d \n",charc.health,be.power3);
 charc.health -= be.power3;
}
if(ga == 4){

 printf("You attack with Dragon Roar \n");
 printf("////// %d - %d \n",be.health,charc.power4);
 be.health -= charc.power4;

 printf("Beautilfly attack with Air cutter \n");
 printf("::::::: %d - %d \n",charc.health,be.power2);
 charc.health = charc.health - be.power2;
}
if(be.health <= 0 || bul.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (be.health < charc.health){
  printf("===========================\n");
  printf("||  Winner is Charchar   ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Beautilfly ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
///////////////////////////////
/////////////////////////////////////////////////////////////////
if(pokemonchoos == 2 && oppo == 3){
printf("You choose : Charchar \n");
charchar_pokemon();
printf("==========================================================\n");
printf("||                 (Charchar vs Squirtle)               ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppSquirtle();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Winds attack               2 :: Fireblast      ||\n");
printf("|| 3 :: Overheat fire              4 :: Dragon Roar    ||\n");
printf("=========================================================\n");
printf("|| Health :: Charchar = %d || Squirtle = %d ||\n",charc.health,sq.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Wings attack \n");
 printf("////// %d - %d \n",sq.health,charc.power1);
 sq.health -= charc.power1;
 printf("Squirtle attack with Water blade \n");
 printf("::::::: %d - %d \n",charc.health,sq.power4);
 charc.health -= sq.power4;
}
if(ga == 2){

 printf("You attack with Fireblast \n");
 printf("////// %d - %d \n",sq.health,charc.power2);
 sq.health -=  charc.power2;

 printf("Squirtle attack with Water Gun \n");
 printf("::::::: %d - %d \n",charc.health,sq.power1);
 charc.health -= sq.power1;
}
if(ga == 3){

 printf("You attack with Overheat fire \n");
 printf("////// %d - %d \n",sq.health,charc.power3);
 sq.health -= charc.power3;

 printf("Squirtle attack with Bubble gun \n");
 printf("::::::: %d - %d \n",charc.health,sq.power3);
 charc.health -= sq.power3;
}
if(ga == 4){

 printf("You attack with Dragon Roar\n");
 printf("////// %d - %d \n",sq.health,charc.power4);
 sq.health -= charc.power4;

 printf("Squirtle attack with Tail whip \n");
 printf("::::::: %d - %d \n",charc.health,sq.power2);
 charc.health -= sq.power2;
}
if(sq.health <= 0 || charc.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (sq.health < charc.health){
  printf("===========================\n");
  printf("||  Winner is Charchar   ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Squirtle   ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
//////////////////////////////////////////////
if(pokemonchoos == 2 && oppo == 1){
printf("You choose : Charchar \n");
charchar_pokemon();
printf("==========================================================\n");
printf("||                 (Charchar vs Bulbasaur)              ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppbulbasaur_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Winds attack               2 :: Fireblast      ||\n");
printf("|| 3 :: Overheat fire              4 :: Dragon Roar    ||\n");
printf("=========================================================\n");
printf("|| Health :: Charchar = %d || Bulbasur = %d ||\n",charc.health,bul.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Wings attack \n");
 printf("////// %d - %d \n",bul.health,charc.power1);
 bul.health -= charc.power1;
 printf("Bulbasur attack with Sharp Vine \n");
 printf("::::::: %d - %d \n",charc.health,bul.power4);
 charc.health -= bul.power4;
}
if(ga == 2){

 printf("You attack with FireBlast \n");
 printf("////// %d - %d \n",bul.health,charc.power2);
 bul.health -=  charc.power2;

 printf("Bulbasur attack with Grass Blade \n");
 printf("::::::: %d - %d \n",charc.health,bul.power1);
 charc.health -= bul.power1;
}
if(ga == 3){

 printf("You attack with Overheat fire \n");
 printf("////// %d - %d \n",bul.health,charc.power3);
 bul.health -= charc.power3;

 printf("Bulbasur attack with Blow \n");
 printf("::::::: %d - %d \n",charc.health,bul.power3);
 charc.health -= bul.power3;
}
if(ga == 4){

 printf("You attack with Dragon Roar \n");
 printf("////// %d - %d \n",bul.health,charc.power4);
 bul.health -= charc.power4;

 printf("Bulbasur attack with Leaf Attack \n");
 printf("::::::: %d - %d \n",charc.health,bul.power2);
 charc.health -= bul.power2;
}
if(bul.health <= 0 || charc.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (bul.health < charc.health){
  printf("================================\n");
  printf("||     Winner is Charchar     ||\n");
  printf("================================\n");
}
else {
printf("======================================\n");
printf("||        Winner is Bulbasaur       ||\n");
printf("======================================\n");

}
}

else{
 printf("OK thats rude bye bye then \n");
 system("exit");

}

}
//////////////////////////////
if(pokemonchoos == 2 && oppo == 2){
printf("You choose : charchar \n");
charchar_pokemon();
printf("==========================================================\n");
printf("||                 (Charchar vs Charchar)               ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppcharchar_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Winds attack               2 :: Fireblast      ||\n");
printf("|| 3 :: Overheat fire              4 :: Dragon Roar    ||\n");
printf("=========================================================\n");
printf("|| Health :: Charchar(You) = %d || Charchar = %d ||\n",charc.health1,charc.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Winds attack \n");
 printf("////// %d - %d \n",charc.health1,charc.power1);
 charc.health1 -= charc.power1;
 printf("Charchar attack with Dragon Roar \n");
 printf("::::::: %d - %d \n",charc.health,charc.power4);
 charc.health -= charc.power4;
}
if(ga == 2){

 printf("You attack with FireBlast \n");
 printf("////// %d - %d \n",charc.health1,charc.power2);
 charc.health1-=  charc.power2;

 printf("Charchar attack with Wings Attack \n");
 printf("::::::: %d - %d \n",charc.health,charc.power1);
 charc.health -= charc.power1;
}
if(ga == 3){

 printf("You attack with Overheat Fire \n");
 printf("////// %d - %d \n",charc.health1,charc.power3);
 charc.health1 -= charc.power3;

 printf("Charchar attack with Overhead Fire \n");
 printf("::::::: %d - %d \n",charc.health,charc.power3);
 charc.health -= charc.power3;
}
if(ga == 4){

 printf("You attack with Dragon Roar \n");
 printf("////// %d - %d \n",charc.health1,charc.power4);
 charc.health1 -= charc.power4;

 printf("Charchar attack with Fire Blast \n");
 printf("::::::: %d - %d \n",charc.health,charc.power2);
 charc.health -= charc.power2;
}
if(charc.health1 <= 0 || charc.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (charc.health1 < charc.health){
  printf("===============================\n");
  printf("||  Winner is Charchar(you)  ||\n");
  printf("===============================\n");
}
else {
printf("=====================================\n");
printf("||  Winner is Charchar(opponent)   ||\n");
printf("=====================================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
////////////////////////Squirtle//////////////////////////////////////////////////////////////
if(pokemonchoos == 3 && oppo == 6){
printf("You choose : Squirtle \n");
Squirtle();
printf("==========================================================\n");
printf("||                 (Squirtle vs Ekans)                  ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppekans_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Water Gun               2 :: Tail Whip         ||\n");
printf("|| 3 :: Bubble Gun              4 :: Water Blade       ||\n");
printf("=========================================================\n");
printf("|| Health :: Squirtle = %d || ekans = %d ||\n",sq.health,ek.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Water Gun \n");
 printf("////// %d - %d \n",ek.health,sq.power1);
 ek.health = ek.health - sq.power1;
 printf("EKans attack with Warp Gas \n");
 printf("::::::: %d - %d \n",sq.health,ek.power4);
 sq.health -= ek.power4;
}
if(ga == 2){

 printf("You attack with Tail Whip\n");
 printf("////// %d - %d \n",ek.health,sq.power2);
 ek.health = ek.health - sq.power2;

 printf("EKans attack with Acid glare \n");
 printf("::::::: %d - %d \n",sq.health,ek.power1);
 sq.health -= ek.power1;
}
if(ga == 3){

 printf("You attack with Bubble gun\n");
 printf("////// %d - %d \n",ek.health,sq.power3);
 ek.health = ek.health - sq.power3;

 printf("EKans attack with Poison Stings \n");
 printf("::::::: %d - %d \n",sq.health,ek.power3);
 sq.health -= ek.power3;
}
if(ga == 4){

 printf("You attack with Water Blade \n");
 printf("////// %d - %d \n",ek.health,sq.power4);
 ek.health = ek.health - sq.power4;

 printf("EKans attack with Slam leer \n");
 printf("::::::: %d - %d \n",sq.health,ek.power2);
 sq.health -= ek.power2;
}
if(ek.health <= 0 || sq.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (ek.health < sq.health){
  printf("===========================\n");
  printf("||  Winner is Squirtle   ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||    Winner is Ekans    ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
if(pokemonchoos == 3 && oppo == 5){
printf("You choose : Squirtle \n");
Squirtle();
printf("==========================================================\n");
printf("||                 (Squirtle vs Talonflame)             ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
opptalonflame_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Water Gun               2 :: Tail Whip         ||\n");
printf("|| 3 :: Bubble Gun              4 :: Water Blade       ||\n");
printf("=========================================================\n");
printf("|| Health :: Squirtle = %d || Talonflame = %d ||\n",sq.health,ta.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);
if(ga == 1){
 printf("You attack with Water Gun \n");
 printf("////// %d - %d \n",ta.health,sq.power1);
 ta.health -= sq.power1;
 printf("talonflame attack with Steel Wings \n");
 printf("::::::: %d - %d \n",sq.health,ta.power4);
 sq.health -= ta.power4;
}
if(ga == 2){

 printf("You attack with Tail Whip \n");
 printf("////// %d - %d \n",ta.health,sq.power2);
 ta.health -=  sq.power2;

 printf("talonflame attack with Razor Wind \n");
 printf("::::::: %d - %d \n",sq.health,ta.power1);
 sq.health -= ta.power1;
}
if(ga == 3){

 printf("You attack with Bubble gun \n");
 printf("////// %d - %d \n",ta.health,sq.power3);
 ta.health -= sq.power3;

 printf("talonflame attack with TailWind \n");
 printf("::::::: %d - %d \n",sq.health,ta.power3);
 sq.health -= ta.power3;
}
if(ga == 4){

 printf("You attack with Water Blade \n");
 printf("////// %d - %d \n",ta.health,sq.power4);
 ta.health -= sq.power4;

 printf("talonflame attack with Flame Charge \n");
 printf("::::::: %d - %d \n",sq.health,ta.power2);
 sq.health = sq.health - ta.power2;
}
if(ta.health <= 0 || sq.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (ta.health < sq.health){
  printf("===========================\n");
  printf("||  Winner is Squirtle   ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Talonflame ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
/////////////////////////////////////////////////////////////////////////////////////////////
if(pokemonchoos == 3 && oppo == 4){
printf("You choose : Charchar \n");
Squirtle();
printf("==========================================================\n");
printf("||                 (Squirtle vs Beautilfly)             ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppbeautifly_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Water Gun               2 :: Tail Whip         ||\n");
printf("|| 3 :: Bubble Gun              4 :: Water Blade       ||\n");
printf("=========================================================\n");
printf("|| Health :: Charchar = %d || Beautilfly = %d ||\n",sq.health,be.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Water Gun \n");
 printf("////// %d - %d \n",be.health,sq.power1);
 be.health -= sq.power1;
 printf("Beautilfly attack with Whirlwind \n");
 printf("::::::: %d - %d \n",sq.health,be.power4);
 sq.health -= be.power4;
}
if(ga == 2){

 printf("You attack with Tail Whip \n");
 printf("////// %d - %d \n",be.health,sq.power2);
 be.health -=  sq.power2;

 printf("Beautilfly attack with Morning Sun \n");
 printf("::::::: %d - %d \n",sq.health,be.power1);
 sq.health -= be.power1;
}
if(ga == 3){

 printf("You attack with Bubble Blade \n");
 printf("////// %d - %d \n",be.health,sq.power3);
 be.health -= sq.power3;

 printf("Beautilfly attack with Silver wind \n");
 printf("::::::: %d - %d \n",sq.health,be.power3);
 sq.health -= be.power3;
}
if(ga == 4){

 printf("You attack with Water Blade \n");
 printf("////// %d - %d \n",be.health,sq.power4);
 be.health -= sq.power4;

 printf("Beautilfly attack with Air cutter \n");
 printf("::::::: %d - %d \n",sq.health,be.power2);
 sq.health = sq.health - be.power2;
}
if(be.health <= 0 || sq.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (be.health < sq.health){
  printf("===========================\n");
  printf("||  Winner is Squirtle   ||\n");
  printf("===========================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Beautilfly ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
///////////////////////////////
/////////////////////////////////////////////////////////////////
if(pokemonchoos == 3 && oppo == 3){
printf("You choose : squirtle \n");
Squirtle();
printf("==========================================================\n");
printf("||                 (Squirtle vs Squirtle)               ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppSquirtle();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Water Gun               2 :: Tail Whip         ||\n");
printf("|| 3 :: Bubble Gun              4 :: Water Blade       ||\n");
printf("=========================================================\n");
printf("|| Health :: Squirtle(you) = %d || Squirtle = %d ||\n",sq.health,sq.health1);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Water Gun \n");
 printf("////// %d - %d \n",sq.health1,sq.power1);
 sq.health1 -= sq.power1;
 printf("Squirtle attack with Water blade \n");
 printf("::::::: %d - %d \n",sq.health,sq.power4);
 sq.health -= sq.power4;
}
if(ga == 2){

 printf("You attack with Tail Whip \n");
 printf("////// %d - %d \n",sq.health1,sq.power2);
 sq.health1 -=  sq.power2;

 printf("Squirtle attack with Water Gun \n");
 printf("::::::: %d - %d \n",sq.health,sq.power1);
 sq.health -= sq.power1;
}
if(ga == 3){

 printf("You attack with Bubble Gun \n");
 printf("////// %d - %d \n",sq.health1,sq.power3);
 sq.health1 -= sq.power3;

 printf("Squirtle attack with Bubble gun \n");
 printf("::::::: %d - %d \n",sq.health,sq.power3);
 sq.health -= sq.power3;
}
if(ga == 4){

 printf("You attack with Water Blade\n");
 printf("////// %d - %d \n",sq.health1,sq.power4);
 sq.health1 -= sq.power4;

 printf("Squirtle attack with Tail whip \n");
 printf("::::::: %d - %d \n",sq.health,sq.power2);
 sq.health -= sq.power2;
}
if(sq.health1 <= 0 || sq.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (sq.health1 < sq.health){
  printf("================================\n");
  printf("||  Winner is Squirtle(You)   ||\n");
  printf("================================\n");
}
else {
printf("==================================\n");
printf("||  Winner is Squirtle(other)   ||\n");
printf("==================================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
//////////////////////////////////////////////
if(pokemonchoos == 3 && oppo == 1){
printf("You choose : Squirtle \n");
charchar_pokemon();
printf("==========================================================\n");
printf("||                 (Squirtle vs Bulbasaur)              ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppbulbasaur_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Water Gun               2 :: Tail Whip         ||\n");
printf("|| 3 :: Bubble Gun              4 :: Water Blade       ||\n");
printf("=========================================================\n");
printf("|| Health :: Squirtle = %d || Bulbasur = %d ||\n",sq.health,bul.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Water Gun \n");
 printf("////// %d - %d \n",bul.health,sq.power1);
 bul.health -= sq.power1;
 printf("Bulbasur attack with Sharp Vine \n");
 printf("::::::: %d - %d \n",sq.health,bul.power4);
 sq.health -= bul.power4;
}
if(ga == 2){

 printf("You attack with Tail Whip \n");
 printf("////// %d - %d \n",bul.health,sq.power2);
 bul.health -=  sq.power2;

 printf("Bulbasur attack with Grass Blade \n");
 printf("::::::: %d - %d \n",sq.health,bul.power1);
 sq.health -= bul.power1;
}
if(ga == 3){

 printf("You attack with Bubble Gun \n");
 printf("////// %d - %d \n",bul.health,sq.power3);
 bul.health -= sq.power3;

 printf("Bulbasur attack with Blow \n");
 printf("::::::: %d - %d \n",sq.health,bul.power3);
 sq.health -= bul.power3;
}
if(ga == 4){

 printf("You attack with Water Blade \n");
 printf("////// %d - %d \n",bul.health,sq.power4);
 bul.health -= sq.power4;

 printf("Bulbasur attack with Leaf Attack \n");
 printf("::::::: %d - %d \n",sq.health,bul.power2);
 sq.health -= bul.power2;
}
if(bul.health <= 0 || sq.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (bul.health < sq.health){
  printf("================================\n");
  printf("||     Winner is Squirtle     ||\n");
  printf("================================\n");
}
else {
printf("======================================\n");
printf("||        Winner is Bulbasaur       ||\n");
printf("======================================\n");

}
}

else{
 printf("OK thats rude bye bye then \n");
 system("exit");

}

}
//////////////////////////////
if(pokemonchoos == 3 && oppo == 2){
printf("You choose : Squirtle \n");
Squirtle();
printf("==========================================================\n");
printf("||                 (Squirtle vs Charchar)               ||\n");
printf("==========================================================\n");
getchar();
printf("Are you ready [y/n] : ");
scanf("%c",&ok);
if(ok == 'y'){
system("clear");
oppcharchar_pokemon();
//bulbasaur_pokemon();
printf("You attack first !! \n");

while(i == 0){
printf("=========================================================\n");
printf("|| 1 :: Water Gun               2 :: Tail Whip         ||\n");
printf("|| 3 :: Bubble Gun              4 :: Water Blade       ||\n");
printf("=========================================================\n");
printf("|| Health :: Squirtle = %d || Charchar = %d ||\n",sq.health,charc.health);
printf("======================================================\n");
printf("Choose your attack : \n");
scanf("%d",&ga);

if(ga == 1){
 printf("You attack with Water Gun \n");
 printf("////// %d - %d \n",charc.health,sq.power1);
 charc.health -= sq.power1;
 printf("Charchar attack with Dragon Roar \n");
 printf("::::::: %d - %d \n",sq.health,charc.power4);
 sq.health -= charc.power4;
}
if(ga == 2){

 printf("You attack with Tail Whip \n");
 printf("////// %d - %d \n",charc.health,sq.power2);
 charc.health-=  sq.power2;

 printf("Charchar attack with Wings Attack \n");
 printf("::::::: %d - %d \n",sq.health,charc.power1);
 sq.health -= charc.power1;
}
if(ga == 3){

 printf("You attack with Bubble Gun \n");
 printf("////// %d - %d \n",charc.health,sq.power3);
 charc.health -= sq.power3;

 printf("Charchar attack with Overhead Fire \n");
 printf("::::::: %d - %d \n",sq.health,charc.power3);
 sq.health -= charc.power3;
}
if(ga == 4){

 printf("You attack with Water Blade \n");
 printf("////// %d - %d \n",charc.health,sq.power4);
 charc.health -= sq.power4;

 printf("Charchar attack with Fire Blast \n");
 printf("::::::: %d - %d \n",sq.health,charc.power2);
 sq.health -= charc.power2;
}
if(charc.health <= 0 || sq.health <= 0){
  i = 1;
}
else{
 i = 0;
}


}
if (charc.health < sq.health){
  printf("===============================\n");
  printf("||  Winner is Squirtle       ||\n");
  printf("===============================\n");
}
else {
printf("===========================\n");
printf("||  Winner is Charchar   ||\n");
printf("===========================\n");

}
}

else{
 printf("OK thats rude bye bye the \n");
 system("exit");

}

}
////////////////////////////////Endsquirtle
}
}
/* Project done by Peter Karki */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////``
 int main(){
 int i,ia,ib,menu,pokedesk,game,music,esteregg = 0,newgame;

 char reload = 'y',musicloop = 'y',pokedeskloop = 'y';

//system("gnome-terminal -x bash -c 'play music/ok.mp3; exec bash'");
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

             system("clear");
                printf("           _        \n");
                printf("          [ ]       \n");
                printf("         (   )      \n");
                printf("          |>|       \n");
                printf("       __/===\__    \n");
                printf("      ((| o=o |))   \n");
                printf("    <]  | o=o |  [> \n");
                printf("        (=====)     \n");
                printf("       ( ( | ) )    \n");
                printf("      <_________>   \n");
                printf("=====================================================\n");
                printf("|| + Hello mr %s Wellcome to the world of pokemon    ||\n",player.name);
                printf("||   My name is prof AI. This game is made to train||\n");
                printf("||   you to become a good pokemon tranner with out ||\n");
                printf("||   hurting any pokemon.                          ||\n");
                printf("|| + Pokemon wonderfull animals arent they ?       ||\n");
                printf("||   1) => Yes they are                            ||\n");
                printf("||   2) => No i dont what they are                 ||\n");
                printf("=====================================================\n");
                printf("Choose your answer :  ");
                scanf("%d",&newgame);
                if (newgame == 1){
                system("clear");
                printf("I know Right : \n");
                printf("============================================================\n");
                printf("|| + Things to know befour you play this game             ||\n");
                printf("|| - Its 1v1 trun base RPG game                           ||\n");
                printf("|| - Attack pokemon have low health but high attack power ||\n");
                printf("|| - Defence pokemon have high health but low attack power||\n");
                printf("|| - Each pokemon have 4 attack power                     ||\n");
                printf("============================================================\n");
                getchar();
                }
               else if (newgame == 2){
               system("clear");
                printf("Well some lives under the rock : \n");
                printf("they are just a powerfull animals in alternate univers\n");
                printf("============================================================\n");
                printf("|| + Things to know befour you play this game             ||\n");
                printf("|| - Its 1v1 trun base RPG game                           ||\n");
                printf("|| - Attack pokemon have low health but high attack power ||\n");
                printf("|| - Defence pokemon have high health but low attack power||\n");
                printf("|| - Each pokemon have 4 attack power                     ||\n");
                printf("============================================================\n");
                getchar();
                }
                else {
                printf("Well thats just sad\n");
                printf("============================================================\n");
                printf("|| + Things to know befour you play this game             ||\n");
                printf("|| - Its 1v1 trun base RPG game                           ||\n");
                printf("|| - Attack pokemon have low health but high attack power ||\n");
                printf("|| - Defence pokemon have high health but low attack power||\n");
                printf("|| - Each pokemon have 4 attack power                     ||\n");
                printf("============================================================\n");
                getchar();
                }


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
  case 2 : pokedeskloop = 'y';
           while(pokedeskloop == 'y'){
           system("clear");
           printf("======================================================\n");
           printf("|           Hello Wellcome to Pokedesk               |\n");
           printf("| In this world of Pokemon There are 3 Type of them: |\n");
           printf("======================================================\n");
           printf("|  1 ::Fire type Pokemon -Good against grass type    |\n");
           printf("|  2 ::Water type Pokemon -Good against fire types   |\n");
           printf("|  3 ::Grass type Pokemon -Good against water types  |\n");
           printf("======================================================\n");
           if (esteregg == 1){
           printf("|  4 ::Electrical type pokemon -Good against everyone|\n");
           printf("======================================================\n");

           }
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

            }
           // getchar();
           // printf("Do you want to got to pokedesk [y/n] : ");
           //  scanf("%c",&pokedeskloop);
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
            //getchar();
            //printf("Do you want to got to pokedesk [y/n] : ");
            //scanf("%c",&pokedeskloop);
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
            }
            if (pokedesk == 4 && esteregg == 1){
            system("clear");
            printf("==========================================================\n");
            printf("||                   electric Type Pokemon              ||\n");
            printf("==========================================================\n");
            pikachu();
            printf("==========================================================\n");
            printf("||         Name       : Pikachu                         ||\n");
            printf("||         Height     : 3.03ft                          ||\n");
            printf("||         Species    : Rabbit                          ||\n");
            printf("||         Weight     : 5kg                             ||\n");
            printf("||         Found area : Grassland and Jungle            ||\n");
            printf("==========================================================\n");
           // getchar();
           // printf("Do you want to got to pokedesk [y/n] : ");
           // scanf("%c",&pokedeskloop);
            }
            else{
            printf("Enter a vailed number \n");
            pokedeskloop = 'n';
            }
            printf("Do you want to got to pokedesk [y/n] : ");
            getchar();
            scanf("%c",&pokedeskloop);
            }
            printf("go to main menu [y/n] :");
            getchar();
            scanf("%c",&reload);

           break ;

  case 3 :   system("clear");
            printf("============================================================\n");
            printf("||                 Wellcome to the shop                   ||\n");
            printf("============================================================\n");
            printf("||                      _______________                   ||\n");
            printf("||                 ()==(              (@==()              ||\n");
            printf("||                     '______________'|                  ||\n");
            printf("||                       |             |                  ||\n");
            printf("||                       |    SHOP     |                  ||\n");
            printf("||                      _______________|                  ||\n");
            printf("||                 ()==(               (@==()             ||\n");
            printf("||                      '--------------'                  ||\n");
            printf("============================================================\n");
            printf("|| + Since, This is a project no cense person will play it||\n");
            printf("||   enought time to gain money. But you use your persious||\n");
            printf("||   time to enter here thats why now you unlock Pikchu.  ||\n");
            printf("|| + Pikachu Unlock                                       ||\n");
            printf("============================================================\n");
            esteregg = 1;
            pikachu();
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
 printf(" ( , || ,       .--.            \n");
 printf("(   =|= >      /.--.            \n");
 printf(" ( ` ||        |====|           \n");
 printf("  `  ||        |`::`|           \n");
 printf("     ||    .-;`(..../`;_.-^-._  \n");
 printf("     / /  /  |...::..|`   :   `|\n");
 printf("     |:' |   /'''::''|   .:.   |\n");
 printf("     |( (;-,/    ::  |..:::::..|\n");
 printf("     ||( <` > >._::_.| ':::::' |\n");
 printf("     || `""` /   ^^  |   ':'   |\n");

                printf("Name : %s \n",player.name);
                printf("Money : %d \n",player.money);


             }

            printf("go to main menu [y/n] :");
            getchar();
            scanf("%c",&reload);

           break ;
  case 5 : system("clear");
            musicloop = 'y';
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
