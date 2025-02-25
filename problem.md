Problem 1---------------------------------------------
QUESTION:
Gaurang, a fearless officer of the Intergalactic Space Patrol, is on a high-stakes mission. He is tracking down a notorious space criminal who was last seen fleeing towards Planet Namek. Gaurang's spaceship takes a direct path from Planet Earth (x₁, y₁) to Planet Namek (x₂, y₂), navigating through the endless void of space. However, there’s a new challenge—an unpredictable asteroid has been detected in the sector. Scientists at the Galactic Observatory have pinpointed its coordinates at P (x₃, y₃), but its movement is erratic, and the time of impact is unknown. Gaurang must determine whether the asteroid is a threat to his journey. Your Task: Analyze the asteroid’s position relative to the spaceship’s trajectory and determine: If the asteroid is to the left of the spaceship’s path, print "LEFT". If the asteroid is to the right, print "RIGHT". If the asteroid lies exactly on the spaceship’s trajectory, print "TOUCH". Time is of the essence! Help Gaurang navigate safely and continue his mission to capture the criminal.

INPUT STATMENT:
->The first line contains an integer t (1 ≤ t ≤ 10⁵) — the number of space routes analyzed. ->Each of the next t lines contains six integers x₁, y₁, x₂, y₂, x₃, y₃, representing the spaceship’s trajectory and the asteroid’s position.

EXAMPLE INPUT:
3  
1 1 5 3 2 3
1 1 5 3 4 1
1 1 5 3 3 2

OUTPUT STATEMENT:
For each test case, output "LEFT", "RIGHT", or "TOUCH" based on the asteroid’s location relative to the spaceship’s path.

EXAMPLE OUTPUT:
LEFT  
RIGHT  
TOUCH

EXAMPLE EXPLANATION:
In first test case: point 2,3 lies on left side of the line made by points (1,1) & (5,3) In third test case: point 3,2 touches the line made by points (1,1) & (5,3)

CONSTRAINTS:
1 ≤ t ≤ 10⁵  
-10⁹ ≤ x₁, y₁, x₂, y₂, x₃, y₃ ≤ 10⁹  
x₁ ≠ x₂ or y₁ ≠ y₂

solve this question explain in easyway and code in java


Problem 2 -----------------------------------
QUESTION:
Despite his relentless efforts, Gaurang was unable to reach Planet Namek. Knowing that time was running out, he sent a distress call to his superior, the legendary warrior Ajinkya—a name whispered in fear across the galaxies. Ajinkya warp-jumped straight to Namek, determined to bring the fugitive to justice. Upon arrival, the Galactic Surveillance Unit relayed an urgent transmission: "The target is hiding in the central house of a highly secured 25-house sector—a 5×5 network of hideouts deep within Namek’s urban sprawl. Your mission is to infiltrate the area unseen and eliminate the threat." However, Ajinkya's drop pod was intercepted, causing him to land at an unknown house in the society. His exact position is marked as 1 in a 5×5 grid, while all other houses are marked as 0. Stealth Protocols: To remain undetected, Ajinkya cannot teleport or make erratic movements. He can only execute these two maneuvers: Shift an entire row up or down Shift an entire column left or right Using these covert tactics, Ajinkya must reach the central house as swiftly as possible. Determine the minimum number of shifts required for Ajinkya to reach the central house.

INPUT STATMENT:
->The input consists of 5 lines, each containing 5 space-separated integers (0 or 1). ->The grid contains exactly 1 one and 24 zeroes.

EXAMPLE INPUT:
0 0 0 0 0  
0 0 0 0 1  
0 0 0 0 0  
0 0 0 0 0  
0 0 0 0 0

OUTPUT STATEMENT:
Print a single integer: the minimum number of shifts required for Ajinkya to reach the central house.

EXAMPLE OUTPUT:
3

EXAMPLE EXPLANATION:
Ajinkya scans his surroundings, calculating the fastest way to reach the fugitive. With a swift lateral shift, he slides one house to his left. Wasting no time, he descends silently into the next row. Finally, with one last calculated move, he drifts left again, positioning himself right at the central hideout—face-to-face with the criminal.

CONSTRAINTS:
A[i][j] = 1 or 0
Where 0<=i<5 && 0<=j<5



solve this explain in esway way and make code


---------------Problem 3 ----------------------------------------------------------
QUESTION:
Pranjal, a dedicated scholar and aspiring educator, has been entrusted with the role of Assistant Academic Coordinator. Though he dreams of shaping young minds, his current responsibilities involve handling administrative tasks—some of which are time-consuming and tedious. One such task, assigned to him by the senior professor, is the preparation of the official rank list for the latest academic evaluations. At first glance, it seems straightforward, but the sheer number of students and strict ranking criteria make it an exhausting process: - Students with higher scores must appear first. - If two students have the same score, their names must be sorted alphabetically. Manually sorting through countless names and scores will take hours, if not days, cutting into the time Pranjal would rather spend mentoring students. Realizing this, he turns to you, hoping you can devise an efficient solution to automate the process. By writing a program to handle the sorting, you can help Pranjal clear this obstacle

INPUT STATMENT:
->The first line contains an integer X (1 ≤ X ≤ 100000) — the number of students. ->Each of the next X lines contains: a) A student’s name (a string of length 1 to 100). b) Their exam score (an integer between 1 and 100).

EXAMPLE INPUT:
3
James 78
Ema 99
Oliver 78

OUTPUT STATEMENT:
Print the sorted list, where each line contains a student’s name followed by their score.

EXAMPLE OUTPUT:
Ema 99
James 78
Oliver 78

EXAMPLE EXPLANATION:
Ema scored the highest so she is on top James and Oliver scored same marks but James’s name comes before Oliver’s alphabetically so James is higher than Oliver

CONSTRAINTS:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

Problem--------------------- 4-------------------------------------
UESTION:
Harsh and Om are not just book lovers—they are literary warriors, devouring knowledge like it’s their lifeblood. Their book collection grows endlessly, but they follow a sacred rule: No new books until every single one they already own is read. This time, they’ve got a serious challenge ahead. Their bookshelves are overflowing, and they must clear their backlog before adding any more. They lock eyes, shake hands, and dive in—this is a reading marathon like no other. The Rules of the Challenge: - Every book must be read in full—no skimming, no shortcuts. - Only one person can read a book at a time—no simultaneous reading. - They can swap books freely, but they must strategize to finish all books as fast as possible. Given the time required to finish each book, determine the minimum total time for both Harsh and Om to finish all books and finally be free to expand their collection once more. Time is ticking, and their wishlist is growing—can you calculate the fastest way for them to complete this challenge?

INPUT STATMENT:
->The first line contains an integer B (1 ≤ B ≤ 200000) — the number of books. ->The second line contains B integers, where each integer represents the time required to read a specific book (1 ≤ Read Time ≤ 10⁹).

EXAMPLE INPUT:
3
2 8 3

OUTPUT STATEMENT:
Print a single integer: the minimum total time needed for both to complete all books.

EXAMPLE OUTPUT:
16

EXAMPLE EXPLANATION:
In this test case, Harsh and Om strategically divide their reading to minimize the total time. Given books with reading times [2, 8, 3], sorted as [2, 3, 8], their reading process unfolds as follows: Om starts with the first book (2 hours), and Harsh takes the last book (8 hours). Om finishes after 2 hours, while Harsh is still reading. Om then reads the second book for 3 hours, meanwhile Harsh is still reading Now, 5 hours have passed in total. Om then wait for 3 more hours for Harsh to complete his book Now, 8 hours have passed in total. Om then picks up the last book which lasted 8 hours while Harsh reads the first and last book Harsh finishes at hour 13, while Om finishes at hour 16 So in total they took 16 hours to complete all 3 books This ensures they both finish in the shortest time possible.

CONSTRAINTS:
1 ≤ n ≤ 5000
-10⁹ ≤ xᵢ ≤ 10⁹