# Doxygen_Example

## Doxygen_Example


![image](https://user-images.githubusercontent.com/71545160/200973424-c2aafea1-df89-45ad-9ad2-713716ff174f.png)

![image](https://user-images.githubusercontent.com/71545160/200973442-c23ac53f-541a-483b-8a86-76f31af7a125.png)

![image](https://user-images.githubusercontent.com/71545160/200973480-70efeb86-87ab-4166-92c4-270ca895fcf3.png)

![image](https://user-images.githubusercontent.com/71545160/200973532-39713ddb-a303-4c48-825f-e5d27627b68f.png)

![image](https://user-images.githubusercontent.com/71545160/200973569-9487e5c9-7d91-452c-adae-90060bcbb066.png)

![image](https://user-images.githubusercontent.com/71545160/200973585-be93f5b6-fa07-486d-a644-eceb355abaae.png)

## If some files are not recongnized ? 
 - In my case, *.yaml files are not recongnized.
 
 - **Solution** : Add '*.yaml' on the file_patterns like below. 
 
![image](https://user-images.githubusercontent.com/71545160/219934165-8f60db5b-06ea-4fff-a620-85e415573ede.png)

## If you want to be free from 'directory' setting? 

 - **Solution** : set the relative path like below.
 
 ![image](https://user-images.githubusercontent.com/71545160/219934261-ce5e1368-2ac1-4453-a64a-6677009d897a.png)

 ![image](https://user-images.githubusercontent.com/71545160/219934273-f5f1e2a0-1d4b-4bfa-839f-769ca2f867ee.png)

 ![image](https://user-images.githubusercontent.com/71545160/219934278-8c4cdffe-46e7-4d51-adfe-93bb7ed6a112.png)


## If you want to make the different colored documents?

 - **Solution** : Changing the color is possible on the 'Topics> Output' tab.
 
 ![image](https://user-images.githubusercontent.com/71545160/219934521-0b511bd0-3318-4425-bb09-260b09c689ee.png)


## Comment rule according to program language

 - Python 
 
```
## @brief 테스트 데이터를 만드는 클래스
# @code 코드 설명 시작 지점
# 	xy = pd.read_csv(test_data_file, index_col=0)
#   xy = xy.to_numpy()
#	코드 읽어와서 numpy 형태로 바꾼 후, 인덱싱 및 정규화 해줌.
# @endcode 
# @param data_case 사용할 데이터 케이스
# @param x_mean 데이터 전처리에 사용되는 학습 데이터 전체 평균값 (Standardization)
# @param x_std  데이터 전처리에 사용되는 학습 데이터 전체 표준편차 (Standardization)
# @return index로 인덱싱 되는 x, y 데이터 값
# @see https://en.wikipedia.org/wiki/Feature_scaling
# @warning 현재 클래스에는 전처리 방법으로 standardization 밖에 구현이 안되어있음.
```

 - C
 
```

/* lmpar.c -- compute parameter for least squares solution */

```


```

/// @brief            levenberg-marquardt algorithm description
/// ---
/// @details          main optimization algorithm .Below param description is also represented in the referece site.
/// @param         m : Number of parameters
/// @param         n : Number of data

```
