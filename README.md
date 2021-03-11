# Assignment-4

**Team Members**
|   Enrollment No.  |   Name   | Github Id |
|   --------------  |   ----   | -------- |
|    IIT2019072  |   ANKUSH SONKER | Ankush123-h |
|    IIT2019073  |   ADITYA RATHI | Enigma20Geek | 
|    IIT2019074  |   SANIDHYA GUPTA | severussanny  |

**Group No-**24

**Faculty Name-**"Dr Mohammad Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Given an array of n points. Find the closest pair of points.

---
## How to use code
Please follow the following steps in order to use the code
```
#Download project
git clone https://github.com/Ankush123-h/DAA-Assignmnets 
```
Project Initialize 
```
To run the code, follow the following procedure:
1.  Download the code(or project zip file) from the github repository.
2.  Extract the zip file downloaded above.

Specifically when Running on Linux Terminal:

4. Save the extracted file on desktop. Open terminal and follow:
	cd desktop/DAA_Assignments
	g++ Code.cpp
	/* Provide Input and closest pair of points along with distance is displayed*/
	
				------OR------

When Running on IDE or online Compilers

4.  Open the code with any IDE like Sublime Text, VS Code, Atom or some online compilers like GDB.
5.  If required, save the code with your own desirable name and extension is .cpp
6.  Run the code following the proper running commands(vary from IDE to IDE)
	(a)For VS Code:Press Function+F6 key and provide the input on the terminal.
	(b)For Sublime Text:Click on the Run button and provide the input.
	
```
Output
```
Distance between the closest pair of points among all the n given points.
```
---

**Test case**

```
Test Case-1

Input:
6
0 0
1 1
4 0
2 2
3 3
5 2

Output:
The smallest distance is 1.41421
The corresponding pair of points is {0 0} and {1 1}

#--------------------------#

Test Case-2

Input:
5
1 4
-24 -6
1 0
19 -8
11 11

Output:
The smallest distance is 4
The corresponding pair of points is {1 0} and {1 4}
```

---

### Theory
Given  an  array  of  n  points  in  aplane.  The problem is to find out the closest pairof  points  in  an  array.   In  this  paper,  this  triv-ial  problem  of  finding  the  pair  of  closest  pointsin  the  given  2D  plane  has  been  solved  using  thetechniques  and  ideas  based  on  Divide  and  Con-quer  Programming  Paradigm.   Also,  this  paperdiscuss  the  distance  between  these  pair  of  clos-est  points  also.   Using  the  Divide  and  Conquerapproach,  the  algorithm  achieves  its  best  timecomplexity of O(nlogn),thus reducing the time toa  much  significant  extent.  Thus  the  approach  ofDivide and Conquer exhibits the logarithmic timeand speeds up the mechanism of finding the clos-est pair of points.

---

### Analysis

**Time Complexity**

Let Time complexity of above algorithm be T(n). Let us assume that we use a O(nLogn) sorting algorithm based on merge sort. The above algorithm divides all points in two sets and recursively calls for two sets. After dividing, it finds the strip in O(n) time. Also, it takes O(n) time to divide the Py array around the mid vertical line. Finally finds the closest points in strip in O(n) time. So T(n) can be expressed as follows
T(n) = 2T(n/2) + O(n) + O(n) + O(n)
T(n) = 2T(n/2) + O(n)
Using above relation, we get for T/2, T/8 etc as:
T(n/2) = 2T(n/4) + O(n/2)
T(n/4) = 2T(n/8) + O(n/4)
T(n/8) = 2T(n/16) + O(n/8) and so on...........
Thus on combining we get, the overall 
Time Complexity = T(n) = T(nlogn)


**Space Complexity**

As we are using the concept of Divide and Conquer. We need to create two extra arrays to store points and sort them according to X and Y co-ordinates respectively. As no extra space is neede apart from that. Therefore the space complexity is of the order:
Space Complexity = O(n)+O(n)+O(n)
                 = O(n) , where n denotes the no. of points.

---

### References

1.  Introduction to Divide and Conquer Technique:https://www.geeksforgeeks.org/divide-and-conquer-algorithm-introduction/
2.  Image Demonstrating the Divide and Conquerhttps://www.google.com/url?sa=iurl=https
3.  Introduction  to  Algorithms  by  Cormen,Charles,Rivest and Stein.https://web.ist.utl.pt/ fabio.ferreira/material/asa
4.  Demostartion of Closest pair Points
	  https://www.bogotobogo.com/Algorithms/images/Closest_Pair/input_points_closest_pair.png
5.  Divide and Conquer for Closest pair of Points
	  https://media.geeksforgeeks.org/wp-content/uploads/mindis.png![image](https://user-images.githubusercontent.com/57807469/110797065-af27d900-829e-11eb-83a4-1b4441a7a19f.png)
