# 📜 C++ Dynamic Quest Log (STL Lists)

## 📖 About the Project
This project explores the `std::list` container within the C++ Standard Template Library. Unlike vectors, which rely on contiguous memory, this architecture utilizes a bidirectional linked list, allowing for highly optimized O(1) insertions and deletions at both the front and back of the sequence.

## ✨ Features
*   **Bidirectional Insertion:** Implements `.push_back()` for standard data entry and `.push_front()` to instantly prepend high-priority data without shifting memory.
*   **Reference Passing:** Passes the list by reference (`&lst`) to utility functions, optimizing memory usage and processing speed.
*   **Built-in STL Algorithms:** Utilizes `.sort()` for instant alphabetical data structuring and `.reverse()` to flip the memory pointers backwards.
*   **Iterator Traversal:** Employs `list::iterator` to sequentially access list nodes where standard integer indexing is not supported.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** STL Lists, Linked Lists, Iterators, Sorting Algorithms, Memory Efficiency.
