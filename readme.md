## 教育用 プログラム (arduino)
### このプログラムについて
とあるロボコンチームで初学者教育をするためのなにか  
### このプログラムを使用するために必要なもの
* Arduino Mega 2560
* USB Host Shield 2.0
* VSCode
* Platform IO (VSCode Extension)
* DUALSHOCK 4 (PS4コントローラー)
* Bluetooth ドングル (とんぐるの消費電力が高いと使用できない事例があるようです)

### ブランチごとのプログラムの差異
* main : 問題1に使用するプログラム   
PS4 コントローラーの次のボタンを押すと、1 2 3の数値がSerial2より送信される  
◯ : モーター回転(rotate)  
✕ : モーター停止(stop)  
◻ : モーター逆回転(reverse_rotate)