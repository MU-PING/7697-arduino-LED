# 7697-arduino-LED
## 程式簡介
### 簡述
> 外接 LED 有很多應用，此處以閃爍為範例，程式碼：main.ino

* 使用麵包版當作擴充版
* 使用電阻調控LED亮度
* Pin 2 當作輸出腳位 ( 正極 )
#### 使用材料
* USB線
* LinkIt7697
* 麵包板
* LED
* 220Ω ~ 1K Ω 電阻
* 杜邦線
#### 電路圖
<img src="https://user-images.githubusercontent.com/93152909/140179649-9f240a35-3d61-4b30-837a-454e4637fc74.png" width="400px">

### 範例圖

<img src="https://user-images.githubusercontent.com/93152909/140169231-a85edc48-fc24-4af3-b14a-d266d03f747d.gif" width="500px">

## 麵包板
* 快速開發電路原型
* 兩側的共電/共地軌(可拆掉)
* 直行五個洞彼此相通，中央兩區彼此不通
* 同一橫列中，左右不通  
<img src="https://user-images.githubusercontent.com/93152909/140171173-c4428cd0-4207-4a21-8c86-ebcbcec6b3db.png" width="300px">

## LED
* 數位輸出元件
* 長腳為正極；短腳為負極
* 高電位亮燈；低電位熄燈
<img src="https://user-images.githubusercontent.com/93152909/140172939-9b0191e9-5906-46cf-8497-d770c0ac1d04.png" width="40px">

## 電阻
> 色碼如何判斷：https://reurl.cc/YjmxeL
* 歐姆定律 V = I * R
  * I = 電流，單位為安培 (A)
  * V = 電壓，單位為伏特 (V)
  * R = 電阻，單位為歐姆 (Ω)
* 根據歐姆定律
  * 電阻值提高 (10k Ω ), 通過的電流會變小， LED 會變暗
  * 電阻值降低 (220 Ω ), 通過的電流會變大， LED 會變亮 
* 範例：
1. 使用 10kΩ 電阻，電流為 3.3V / 10000Ω = 0.00033A = 0.33 mA  
2. 使用 1kΩ 電阻，電流為 3.3V / 1000Ω = 0.0033A = 3.3 mA  
3. 使用 220Ω 電阻，電流為 3.3V / 220Ω = 0.015A = 15 mA

 
<img src="https://user-images.githubusercontent.com/93152909/140176772-faa5b0fe-1f82-4f69-94c6-a6e6e78b6f69.png" width="300px">

## 外接 LED 補充
> 補充其他 LED 燈應用，並附上原始碼
### LED呼吸燈------------------------------------------------------------
> 程式碼：supplement1.ino
* 電路圖
<img src="https://user-images.githubusercontent.com/93152909/140179649-9f240a35-3d61-4b30-837a-454e4637fc74.png" width="400px">

### RGB LED------------------------------------------------------------
> 程式碼：supplement2.ino
* 額外材料：「共陽極 」RGB LED
* 電路圖
<img src="https://user-images.githubusercontent.com/93152909/140181836-6c355ce1-e64f-4a5f-9221-a742ae87e576.png" width="400px">
