/*  
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

*/
#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    int n;
    printf("Enter the number of points: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the coordinates of point in order x1 y1 x2 y2 x3 y3: \n");
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        long a = y2 - y1;
        long b = x1 - x2;
        long c = y1 * x2 - x1 * y2;
        long power = a * x3 + b * y3 + c;
        if (power == 0)
        {
            printf("Touch\n");
        }
        else if (power > 0)
        {
            printf("Right\n");
        }
        else
        {
            printf("Left\n");
        }
    }
    return 0;
}