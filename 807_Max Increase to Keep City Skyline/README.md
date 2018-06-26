# Note

1. malloc不會初始化成0, calloc才會

   ```c
   void *malloc(sizeof(data type));
   void *calloc(size_t nmemb, size_t size);
   ```

   ​

2. 當array傳入function被decay成pointer，在function 裡只能用pointer的方式操作array