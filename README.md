# gsg_level_3_codes

**Name:** Mohammad Tomeh  
**ID:** mohammadjtomeh@gmail.com  

---

## Problem Statement
Given a number of days `n` (1 ≤ n ≤ 10), print **all possible sequences** of daily activities using the set:
```
{"Swimming", "Running", "Football"}
```
subject to the constraint that **no two consecutive days have the same activity**.

---

### Input
- A single integer `n` — the number of days.

### Output
- Every valid sequence on a separate line, with activities separated by a single space.
- At the end, print the total number of valid sequences in the format:  
  `COUNT: <number>`

---

### Example

**Input:**
```text
2
```

**Output:**
```text
Swimming Running
Swimming Football
Running Swimming
Running Football
Football Swimming
Football Running
COUNT: 6
```

---

### Expected COUNT Formula
At day 1, there are **3** choices.  
For each subsequent day, there are **2** choices (since it can't be the same as the previous day).  

```text
COUNT(n) = 3 × 2^(n - 1)
```
---

### Example Counts
| n  | Formula              | COUNT |
|----|----------------------|-------|
| 1  | 3 × 2^(1-1) = 3 × 1  | 3     |
| 2  | 3 × 2^(2-1) = 3 × 2  | 6     |
| 3  | 3 × 2^(3-1) = 3 × 4  | 12    |
| 4  | 3 × 2^(4-1) = 3 × 8  | 24    |

---

### Notes
- The order of sequences can be any deterministic order (e.g., lexicographic by activity names), as long as all valid sequences are printed exactly once.
- Constraint reminder: `1 ≤ n ≤ 10`.
