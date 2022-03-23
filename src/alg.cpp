// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int count = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value)
        count++;
    }
  }
  return counter;
}

int countPairs2(int *arr, int len, int value) {
  int count = 0;
  int last = len;
  int right = len - 1;
  for (int last = len - 1; arr[last] > value; last--)
    right--;
  for (int i = 0; i <= len; i++) {
    if (arr[i] > value / 2)
      break;
    for (int j = rig; j > i; j--) {
      if (arr[i] + arr[j] == value) {
        count++;
      }
      if (arr[i] + arr[j] < value)
        break;
    }
  }
  return count;
}

int countPairs3(int *arr, int len, int value) {
int count = 0;
int right = len - 1;
  for (int i = 0; i < len - 1; i++) {
    bool check = 0;
    int left = i + 1;
    int middle = (left + right) / 2;
    while (left <= right) {
      if (arr[i] + arr[middle] == value) {
        count++;
        check = 1;
        break;
      } else if (arr[middle] + arr[i] > value) {
        right = middle - 1;
      } else if (arr[middle] + arr[i] < value) {
        left = middle + 1;
      }
      middle = (left + right) / 2;
    }
    int t1 = middle;
    int t2 = middle;
    if (check == true) {
      while (arr[t1 - 1] == arr[middle] && t1 - 1 != i) {
        count++;
        t1--;
      }
      while (arr[t2 + 1] == arr[middle]) {
        count++;
        t2++;
      }
    }
  }
  return count;
}
