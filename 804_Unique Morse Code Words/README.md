# Note

1. 陣列化成指標

   ```c
   array[10][10]
   *(array[10] + 10)
   *(*(array + 10) + 10)
   ```

   ![](/home/wilson/Desktop/array_2d_dynamic.png)

2. 由於字串為字元陣列，除非用strcpy或strncpy等函數赴值，不然不能直接赴值，這裡就用一個同樣大小的整數陣列來標記唯一的字串數目