># 문자열 *(string)*
>
>### 길이, 크기, 추가, 검색, 변경
```angular2html
using namespace std;    // 헤더
```
---

## 길이 
`변수.length();`

## 크기 *(메모리)*
`변수.size();`

## 추가 *(맨 끝)*
```
string str = "안녕";
```

+ ### 일반
    `변수.append(문자열);`
    ```
    str.append("하세요");    // 안녕하세요
    ```

+ ### 범위
    `변수.append(영어_문자열, 시작_인덱스, 개수);`   
    ```
    str.append("HIHI", 0, 2);    // 안녕HI 
    ```
  
+ ### 반복
  `변수.append(개수, 문자);`
  ```
  str.append(2, 'A');    // 안녕AA
  ```

## 검색 *(인덱스)*
`변수.find(문자);`, `변수.find(문자열);`
```
str = "Apple"

str.find('l');    // 3
str.find("ple");    // 2
str.find("KK");    // string::npos
```

## 변경
`변수.replace(변경전문자열_시작_인덱스, 변경전문자열_길이, 변경할문자열);`
```
string str = "MangoBanana";

str.replace(5, 6, "Apple");    // MangoApple
```
