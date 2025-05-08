# はじめに
このリポジトリはMPIの基礎的なプログラムをまとめたリポジトリです。
環境構築時のテストや簡易的なプログラムを実行させるときに利用できます。
このリポジトリはあくまで制作者が研究で必要なため作成したものなので適正ではない可能性があります。のでご注意ください

# MPI(Message Passing Interface)
MPI（Message Passing Interface）は、分散メモリ型並列計算機での並列プログラミングを実現するためのメッセージパッシング方式の通信規格です。複数のプロセスがそれぞれ独立したメモリ空間を持ち、プロセス間でデータを送受信しながら協調して処理を行う仕組みを提供します。


# コンパイルおよび実行方法

## コンパイル
mpicc filename

(ex) mpicc test_MPI.c -o test_MPI
## 実行方法
### スレッド並列
mpirun -np <並列数> ./test_MPI 
### プロセス間の並列
```
mpirun --host procesname, -np num --hostfile myhosts test_MPI
(ex.) mpirun --host homura,madoka,sayaka,mami -np 4 --hostfile myhosts test_MPI
```
