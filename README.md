# S12Hash
Simple Hash Class to create a new Hash with a various simple math operations

# Logical
Let me explain in detail how this hash function works for the string "Created by S12", step by step:

First, we define the hash function. In this case, we are using a simple "suma de caracteres" (sum of characters) function, which involves adding the ASCII values of each character in the string together. However, we also have a modification to this basic function: we multiply the resulting sum by the ASCII value of the letter 'S' (83) and add a constant factor of 12.

Next, we apply this function to the original string "Created by S12". We first convert each character in the string to its corresponding ASCII value, and then sum these values together:

(67 + 114 + 101 + 97 + 116 + 101 + 100 + 32 + 98 + 121 + 32 + 83 + 49 + 50)

This gives us a total sum of 1289.

3. We then multiply this sum by the ASCII value of the letter 'S' (83) and add 12:
1289 * 83 + 12

This gives us a hash value of 107401.

4. Now, we want to calculate the hash value of the reversed string "21S yb detarC". We repeat the same process as before, summing the ASCII values of each character in the reversed string together:

(50 + 49 + 83 + 32 + 121 + 98 + 32 + 100 + 101 + 116 + 97 + 114 + 67 + 101)

This gives us a total sum of 1216.

5. We then multiply this sum by the ASCII value of the letter 'S' (83) and add 12:

1216 * 83 + 12

This gives us a hash value of 100964.

6. Next, we want to calculate the hash value of the reversed string divided by 12. We take the hash value we just calculated for the reversed string, and divide it by 12:

100964 / 12

This gives us a hash value of 8422.
7.

Finally, we concatenate the hash values we calculated for the original string, reversed string, and reversed string divided by 12, in that order, to get 
our final concatenated hash value:

107401 -100964 - 8422 = 1074011009648422

So the final concatenated hash value for the string "Created by S12" and its reversed string "21S yb detarC", along with the hash value of the reversed string divided by 12, is "216787".

To summarize, this hash function involves summing the ASCII values of each character in the string and then multiplying by the ASCII value of the letter 'S' and adding a constant factor of 12.

This process is repeated for the reversed string, and then the hash value of the reversed string divided by 12 is calculated. Finally, the hash values for the original string, reversed string, and reversed string divided by 12 are concatenated to produce the final hash value.
