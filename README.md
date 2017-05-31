# CSCI-272-Tortoise-And-Hare
The purpose of this project is to re-create the classic race of the tortoise and the hare using a random number generator. The contenders begin the race at "Square 1" of 70 squares and each square represents a possible position along the race course. 
<ul><li> There is a clock that ticks once per second. With each tick of the clock, the program use the function moveTortoise and moveHare to adjust the position of the animals. 
<li> If an animal slips before square 1, move the animal back to square 1. 
<li> Tortoise - Fast Plod: 1<= i <= 5, Slip: 6<= i <= 7, Slow Plod: 8<= i <= 10
<li> Hare - Sleep: 1 <= i <= 2, Big Hop: 3 <= i <= 4, Big Slip: i == 5, Small Hop: 6 <= i <= 8, Small Slip: 9 <= i <= 10
<li> If the animals land on the same square, the tortoise bites the hare and the program prints "OUCH!". 
<li> All print positions other than T, H, and OUCH should be blank
<li> Program ends by printing who wins ("TORTOISE WINS!! YAY!!" or "Hare wins. Yuch.")
