/*
Arun is working in ABC company. He should be on time to the office. He usually goes by his bike. 
The program must accept the average speed of the bike, his starting time (in Hours: Minutes) from his home and the distance (in kilometres) to be covered to reach office as the input. 
The program must check whether he can reach the office before 9:30 A.M or not. If he can reach on or before 9:30 A.M, then the program must print the arrival time as the output. 
Else after increasing the speed by 20kmph the program must check whether he can reach on or before 9:30 A.M or not. 
If he can reach on time after increasing the speed then the program must print the recalculated arrival time (after 9:30) as the output. 
Else the program must print NO as the output.
Input Format:
The first line contains the average speed of the bike, starting time (in Hours: Minutes) and distance to be covered separated by spaces.
Example Input/Output 1:
Input:
60 8:45 40
Output:
9:25
Example Input/Output 2:
Input:
30 9:10 60
Output:
NO
*/
#include <stdio.h>

int main() {
    int speed, hh, mm, dist;
    scanf("%d %d:%d %d", &speed, &hh, &mm, &dist);

    int totalMinutes = hh * 60 + mm;
    float time = (float)dist / speed * 60;

    if (totalMinutes + time <= 9 * 60 + 30) {
        totalMinutes += time;
        printf("%2d:%02d\n", totalMinutes / 60, totalMinutes % 60);
    } else {
        speed += 20;
        time = (float)dist / speed * 60;
        
        if (totalMinutes + time <= 9 * 60 + 30) {
            totalMinutes += time;
            printf("%2d:%02d\n", totalMinutes / 60, totalMinutes % 60);
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
