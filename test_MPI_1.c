#include<stdio.h>
#include<mpi.h>

int main(){
 int rank, proc;           //　ランク, 全プロセス数
  int name_length;     //　ホスト名の長さ
  char *name[MPI_MAX_PROCESSOR_NAME];  //　ホスト名

  MPI_Init(&argc, &argv);   // MPIの初期化
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);   // ランクの取得
  MPI_Comm_size(MPI_COMM_WORLD, &proc);   // 全プロセス数の取得
  MPI_Get_processor_name(name, &name_length);   // ホスト名の取得　

  if (rank == 0){
    printf("サーバー: %s rank  %d\n",name, rank);
  }
  else{
    printf("サーバー: %s rank  %d\n",name, rank);
  }
  MPI_Finalize();   // MPIの終了処理
  return 0;
}
