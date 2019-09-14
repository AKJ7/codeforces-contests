## LOG 
**Saturday, 14. December 2019**  

- CodeForces Nr: 1
- Duration: 2 hours  
- Number of participants: 11000  


### PART 1: Paint the Numbers

You are given a sequence of integers 1, 2,…,n. You need to paint elements in colors, so that:  
 - If we consider any color, all elements of this color must be divisible by the minimal element of this color.  
 - The number of used colors must be minimized.  
 
For example, it's fine to paint elements `[40,10,60]` in a single color, because they are all divisible by 10. You can 
use any color an arbitrary amount of times (in particular, it is allowed to use a color only once). 
The elements painted in one color do not need to be consecutive.  
For example, if `[6,2,3,4,12]` then two colors are required: let's paint 6, 3 and 12 in the first color 
(6, 3 and 12 are divisible by 3) and paint 2 and 4 in the second color (2 and 4 are divisible by 2). For example, 
if `[10,7,15]` then 3 colors are required (we can simply paint each element in an unique color).  
`Input`
    The first line contains an integer 𝑛 (1≤𝑛≤100), where 𝑛 is the length of the given sequence.
    The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤100). These numbers can contain duplicates.  
    
`Output`
    Print the minimal number of colors to paint all the given numbers in a valid way.  
 
 `Examples`
 input:
    6
    10 2 3 5 4 2
 output:
    3
 input:
    4
    100 100 100 100
 output:
    1
 input:
    8
    7 6 5 4 3 2 2 3
 output:
    4
    
`Note`  
In the first example, one possible way to paint the elements in 3 colors is:  
 
 - paint in the first color the elements: 𝑎1=10 and 𝑎4=5,
 - paint in the second color the element 𝑎3=3,
 - paint in the third color the elements: 𝑎2=2, 𝑎5=4 and 𝑎6=2.  

In the second example, you can use one color to paint all the elements.  
In the third example, one possible way to paint the elements in 4 colors is:  
 - paint in the first color the elements: 𝑎4=4, 𝑎6=2 and 𝑎7=2,
 - paint in the second color the elements: 𝑎2=6, 𝑎5=3 and 𝑎8=3,
 - paint in the third color the element 𝑎3=5,
 - paint in the fourth color the element 𝑎1=7. 