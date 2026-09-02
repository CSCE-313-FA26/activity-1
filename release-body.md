# Activity 1 — automated checks

**10 / 100**

| Check | Score | Notes |
| --- | --- | --- |
| Part B - spawn.cpp compiles | 10/10 PASS | compiled |
| Part B - four workers | 0/20 FAIL | produced 0 worker lines, expected 4 |
| Part B - worker lines correct | 0/15 FAIL | indices were [] |
| Part B - exit codes 0..3 reaped | 0/20 FAIL | reaped exit codes were [], expected [0, 1, 2, 3] |
| Part B - reaped 4 | 0/10 FAIL | final line said spawner done, reaped 0 |
| Part A - GDB transcript | 0/25 FAIL | deliverables/part-a.txt not found |

`spawn.cpp` is judged by running it, so a solution that differs
from the reference is fine as long as it behaves correctly.
