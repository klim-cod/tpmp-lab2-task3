# Test Report

## Test 1: Basic input

### Input:
Ivanov
2007 1 19
5 4 3

### Expected:
- Student appears in sorted list
- Included in age <= 20

### Result:
Program works correctly

---

## Test 2: Older student

### Input:
Petrov
2000 5 10
3 3 3

### Expected:
- Appears in sorted list
- NOT included in age <= 20

### Result:
Program works correctly

---

## Test 3: Sorting check

### Input:
Student1
2007 1 1
5 5 5

Student2
2007 1 1
2 2 2

### Expected:
Student2 appears before Student1 (lower average)

### Result:
Sorting works correctly

---

## Test 4: No students <= 20

### Input:
All students older than 20

### Expected:
Message: No students found

### Result:
Program outputs correct message

---

## Conclusion

The program:
- correctly inputs data
- sorts students by SES
- filters by age
- handles edge cases

All requirements are fulfilled.
