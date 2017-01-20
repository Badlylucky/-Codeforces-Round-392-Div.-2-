# -Codeforces-Round-392-Div.-2-
自分の解答（1日間違えて参加できず）

# A
初っ端から問題めんどくさい。入力値から最大値取って差分を合計するだけの問題がなぜここまでややこしくなるのか。
# B
char型でやった。char型って入力したときに終端文字'\0'を含むときと含まないときがあるような気がするんだけどどうなんだろ。結構楽しかった。
どの色が何番目に出てきたかを記録するcolorsの配列の取り方がひとつのポイント。
color[位置]=色
と取った。こうすることで置換の計算がO(n)でできる。
# C
逆から列をたどっていく部分の実装に悩まされた。結局最後まで正しく動いてるかは分からなかった。
多分アルゴリズム的にはO(k)になってしまったのが敗因(TLE)。O(n*m)で済む方法が多分あるが、結局分からず。
# D
問題の設定がアレ。1桁ずつ入力数を分解して下から順番に見ていく方式を取ったが無限ループにハマり未完成。
