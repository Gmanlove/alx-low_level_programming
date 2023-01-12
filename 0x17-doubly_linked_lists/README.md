C - Doubly linked lists In this project, I learned about using doubly-linked lists in C.

Tasks 📃 0. Print list

0-print_dlistint.c: C function that prints all the elements of a doubly-linked dlistint_t list. Returns the number of nodes in the list.

List length
1-dlistint_len.c: C function that returns the number of nodes in a doubly-linked dlistint_t list. 2. Add node

2-add_dnodeint.c: C function that adds a new node at the beginning of a doubly-linked dlistint_t list. If the function fails - returns NULL. Otherwise - returns the address of the new element. 3. Add node at the end

3-add_dnodeint_end.c: C function that adds a new node at the end of a doubly-linked dlistint_t list. If the function fails - returns NULL. Otherwise - returns the address of the new element. 4. Free list

4-free_dlistint.c: C function that frees a doubly-linked dlistint_t list. 5. Get node at index

5-get_dnodeint.c: C function that locates a given node of a doubly-linked dlistint_t list. The parameter index is the index of the node to locate - indices start at 0. If the node does not exist - returns NULL. Otherwise - returns the address of the located node. 6. Sum list

6-sum_dlistint.c: C function that sums all the data (n) of a doubly-linked dlistint_t list. If the list is empty - returns 0. Otherwise - returns the sum of all the data (n). 7. Insert at index

7-insert_dnodeint.c: C function that inserts a new node at a given position. The parameter idx is the index of the list where the new node should be added - indices start at 0. If the function fails - returns NULL. Otherwise - returns the address of the new element. Requires compilation with functions defined in 2-add_dnodeint.c and 3-add_dnodeint_end.c. 8. Delete at index

8-delete_dnodeint.c: C function that deletes the node at index index of a doubly-linked dlistint_t list. The paramter index is the index of the node to delete - indices start at 0. If the function fails - returns -1. Otherwise - returns 1. 9. Crackme4

100-password: Text file containing the password for the crackme4 executable. Use the following command on your terminal for your code to be checked currectly echo -n "906609" > 102-result 10. Palindromes

102-result: Text file containing the largest palindrome made from a product of two three-digit numbers. 11. Crackme5

103-keygen.c: C function that generates passwords for the crackme5 executable. Usage of the crackme: ./crackme5 username key Usage of the keygen: ./keygen5 username
