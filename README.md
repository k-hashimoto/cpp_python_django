# cpp_python_django
C言語の関数をdjango appから呼ぶサンプル

testserver/myapp/pythonWapper.cppに実装してあるadd()をdjangoのviewから呼ぶ。
使うにはboost libraryとdjangoが必要。

 ## 使い方
testserver/myappに入ってmakeを実行する。pythonWapper.cppを.soにコンパイルする。
成功すればpythonWapper.soがtestserver/myappにできる。

testserverに移動してrunserverスクリプトを実行すればサーバーが起動する。ブラウザから

http://localhost:8080/add/a/b

にアクセスするとa+bの結果が表示される。
