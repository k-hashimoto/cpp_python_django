# cpp_python_django
C言語の関数をdjango appから呼ぶサンプル

testserver/myapp/pythonWapper.cppに実装してあるadd()をdjangoのviewから呼ぶ。
使うにはboost libraryとdjangoが必要。

## 使い方

testserver/myappに入ってmakeを実行する。makeはpythonWapper.cppを.soにコンパイルする。
成功すればpythonWapper.soがtestserver/myappにできる。testserver/myapp/views.pyでpythonWapper.soのadd()を呼んでいる。

testserverに移動してrunserverスクリプトを実行すればサーバーが起動する。ブラウザから

http://localhost:8080/add/a/b

にアクセスするとa+bの結果が表示される。

応用例としてはPCに接続されたデバイスにアクセスする機能をCで実装しその機能をdjangoから呼び出すことが考えられる。
http://localhost:8080/usb/getdata/
とするとPCに接続されたデバイスにアクセスしてデータを取得する。
