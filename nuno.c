#include <stdio.h>

int main(void) {
int graus,falt;//declare o eixo
int quantidade;
printf("digite uma medida: \n");
scanf("%d",&graus);



  //tranformar"GRAUS" maior que 360 ou graus menos que -360, e pegar o grau restande para realizar o calulo 
  if (graus <= 360|| graus >= -360) {
    quantidade = graus / 360;
      graus = graus - (360 * quantidade);
  }

  if(graus>=0){
    printf("sentido horario\n");
    falt=360-graus;
  }else{
    printf("sentido anti-horario\n");
    falt=360+graus;
  }
  if (graus > 360|| graus < -360) {
    quantidade = graus / 360;
      graus = graus - (360 * quantidade);
  }

  if(graus>=0){
    printf("sentido horario\n");
    falt=360-graus;
  }else{
    printf("sentido anti-horario\n");
    falt=360+graus;
  }
  
  if(graus%90==0){
    printf("Este número pertence a um eixo\n");
  }else{
    printf("Este número não pertence a um eixo\n");
  }

  
  printf("A quantidade de voltas completa é: %d\n",quantidade);


printf("Quanto falta pra completar %d\n",falt);

if(graus>=0 && graus<=90){
  printf("Este número pertence ao quadrante um\n");
}else if (graus>90 && graus<=180){
  printf("Este número pertence ao quadrante dois\n");
}else if(graus>180 && graus<=270){
  printf("Este número pertence ao quadrante três\n");
}else{
  printf("Este número pertence ao quadrante quatro\n");
}
  




return 0;
}

