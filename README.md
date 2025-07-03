# PR-C-5-looper
<<<<<<< HEAD

=======
Here is an improved version of your README file with enhancements for clarity, formatting, professionalism, and overall structure. It includes corrected logic descriptions, clearer instructions, and cleaner formatting while keeping your original intent intact:

---

# 📘 README

## 📝 Overview

This repository contains **three beginner-friendly C programs** developed by **Rudra Thakkar** on **03-07-2025**. These programs cover fundamental programming concepts such as:

* **Loops**
* **Conditionals**
* **Arithmetic Operations**

Each section includes a short description, full source code, and a placeholder for screenshots.

---

## 📂 Programs

### 1. **Alphabet Skipper** — [`alphabet_skipper.c`](alphabet_skipper.c)

**Description:**
Prints every fourth lowercase letter from the English alphabet starting from `'a'` (i.e., a, e, i, ...).

#### 📄 Code

```c
#include <stdio.h>

int main()
{
    for (int i = 'a'; i <= 'z'; i += 4)
    {
        printf("%c ", i);
    }
    return 0;
}
```

#### 📸 Screenshot

![Alphabet Skipper Screenshot]![Screenshot (438)](https://github.com/user-attachments/assets/85308b37-c635-4c3f-9ed2-cd7e70650564)


---

### 2. **Digit Counter** — [`digit_counter.c`](digit_counter.c)

**Description:**
Counts and displays the number of digits in a user-input integer, including special handling for `0`.

#### 📄 Code

```c
#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter number:  \n");
    scanf("%d", &num);

    int temp = num;

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num /= 10;
            count++;
        }
    }

    printf("Total digits in %d is %d\n", temp, count);

    return 0;
}
```

#### 📸 Screenshot

![Digit Counter Screenshot]![Screenshot (439)](https://github.com/user-attachments/assets/1ba46912-85d3-4036-8025-aa18c8c51473)


---

### 3. **Digit Addition** — [`digit_addition.c`](digit_addition.c)

**Description:**
Calculates the **sum of the first and last digits** of a user-provided integer.

#### 📄 Code

```c
#include <stdio.h>

int main()
{
    int num, first, last;
    printf("Enter number:  \n");
    scanf("%d", &num);

    int temp = num;

    last = num % 10;

    while (num >= 10)
    {
        num /= 10;
    }

    first = num;

    printf("The sum of first and last digit of %d is %d\n", temp, first + last);

    return 0;
}
```

#### 📸 Screenshot

![Digit Addition Screenshot]![Screenshot (440)](https://github.com/user-attachments/assets/03fec678-9b82-4ddb-b788-e03556b3cf2a)


---

## ⚙️ How to Compile and Run

Make sure you have a C compiler like **GCC** installed. Then:

1. **Open Terminal** and navigate to your project directory.
2. **Compile the program:**

   ```bash
   gcc -o output_name filename.c
   ```

   Example:

   ```bash
   gcc -o alphabet_skipper alphabet_skipper.c
   ```
3. **Run the program:**

   ```bash
   ./output_name
   ```

   Example:

   ```bash
   ./alphabet_skipper
   ```

---

## 📄 License

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for more information.

---

## 🙌 Contribution & Feedback

Feel free to:

* Upload your screenshots
* Suggest improvements
* Extend the logic of the programs

> Happy Coding! 🚀

---
>>>>>>> b6cb61fd9a3e98bf0c644b79ea3b5f6dec3e24d4
