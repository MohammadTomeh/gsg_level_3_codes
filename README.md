# gsg_level_3_codes

**Name:** Mohammad Tomeh  
**ID:** m7mdtomeh2007@gmail.com
---

## Problem Statement
Given a number of days `n` (1 ≤ n ≤ 10), print **all possible sequences** of daily activities using the set:
```
{"Swimming", "Running", "Football"}
```
subject to the constraint that **no two consecutive days have the same activity**.

### Input
- A single integer `n` — the number of days.

### Output
- Every valid sequence on a separate line, with activities separated by a single space.
- At the end, print the total number of valid sequences in the format:  
  `COUNT: <number>`

### Example

**input:**
```text
2
```

**output:**
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

### Notes
- The order of sequences can be any deterministic order (e.g., lexicographic by activity names), as long as all valid sequences are printed exactly once.
- Constraint reminder: `1 ≤ n ≤ 10`.
