## Wordle Solver

### Program Description
- As I have previously created a simulation of the famous Wordle game, I decided to create a program that helps to solve the game with ease. The program is created in C language and runs through Ubuntu.

### How to Use / Logistics
- First the program asks the user to input the word "irate" as it is a common starting word that serves to be very effective. It also asks the user to input either the three letters: g, y, x at each of the five positions of the word (g: green, the letter is in the right position. y: yellow, the letter is in the word but not in the right position. x: grey, the letter is not in the word).
<img width="430" alt="Screenshot 2023-04-13 at 12 36 28 PM" src="https://user-images.githubusercontent.com/64511500/231865083-87e1fd8b-01fc-4c4e-a925-be59af9dd0da.png">

- The program then takes in the previous input of the user and eliminates words that do not match the given description of the desired five letter word. This time around, the program would provide the user with the second best guess based on the previous information provided.
<img width="432" alt="Screenshot 2023-04-13 at 12 38 44 PM" src="https://user-images.githubusercontent.com/64511500/231865569-6ad746aa-e244-4d87-9877-12692bd1a770.png">
<img width="426" alt="Screenshot 2023-04-13 at 12 41 38 PM" src="https://user-images.githubusercontent.com/64511500/231866104-9cb7da2f-6106-4845-a7f9-ed5e14c25eb1.png">
<img width="444" alt="Screenshot 2023-04-13 at 12 42 45 PM" src="https://user-images.githubusercontent.com/64511500/231866374-4482156a-20aa-4a99-83dd-b5f8622288c1.png">

- When the desired word is finally found by the program, the user would input "ggggg", as all letters are in the correct position. The program would then congratulate the user and tells the user how mnay trials it took itself to reach the desired word.
<img width="443" alt="Screenshot 2023-04-13 at 12 43 38 PM" src="https://user-images.githubusercontent.com/64511500/231866508-4b1b569e-dd3b-4329-afc3-8cb8e0741fa1.png">
