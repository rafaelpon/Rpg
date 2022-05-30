#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int esc,escarm,escarmad;
int h;
int x=0;
int xx=0;
int y=0;
int z=0;
int d1=0;
int d2=0;
int d3=0;
int g=0;
int p=0;
int dano;
int ataque;
int r;
int hp;
int i=0;
int j=0;
int f=0;
int u=0;
int o=0;
int ataque1;
int hp1;
int m;
int t=0;
int o1=0,o2=0,o3=0; 
int qw=0;
int aw=0;
int uw=0;

typedef struct armardura

{
	
int defesa;
	

}ARMAD;

	typedef struct armap
{
	
int dano;
	

}ARMAS;

void historia()
{
	printf("\nEM UM REINO ANTIGO CUJO TREINAMENTO MILITAR ERA POSTO ACIMA DE QUALQUER OUTRA COISA NA SOCIEDADE\n");
	
	printf("\nVIVIA UM JOVEM CAVALEIRO CONSIDERADO UM PRODIGIO POR TODOS, COM SUA POUCA IDADE JA DOMINAVA PROFUNDAMENTE \n");	
	
	printf("\nTECNICAS DE BATALHA QUE ATE O SOLDADO DA CLASSE MAIS ALTA NAO SERIA CAPAZ DE ADQUIRIR, SEU TREINAMENTO ARDUO REALMENTE\n");
	
	printf("\nO FAZIA UM GURREIRO PODEROSO, ELE PERTENCIA A UMA FAMILIA NOBRE E SEUS PAIS ERAM O QUE ELE TINHA DE MAIS VALIOSO NA VIDA\n");
	
	printf("\nERAM TEMPOS SOMBRIOS EM UM MUNDO HABITADO POR POVOS BARBAROS E MONSTROS QUE CONSTANTEMENTE ATACAVAM A CIVILIZACAO\n");
	
	printf("\nEM UM DIA CHUVOSO O EXERCITO BARBARO INVADIU O REINO, INICIANDO UMA GUERRA QUE MATARIA MILHARES DE PESSOAS,");
	
	printf("\nENTRE ELAS OS PAIS DO JOVEM PRODIGIO, QUE NADA PODE FAZER POIS ESTAVA NO CAMPO DE BATALHA\n");
	
	printf("\nAPOS ESSE ACONTECIMENTO ELE JUROU VIGANCA AO REI DOS BARBARROS, TENDO QUE PASSAR POR UMA FLORESTA MAGICA, POVOADA POR \nCRIATURAS MISTICAS PERIGOSAS,\n");
	
	printf("\nPARA ENTAO CHEGAR AO CASTELO DOS BRABARO E DERROTAR O SUJEITO QUE TIROU A VIDA DE SEUS PAIS.\n");
	
}

typedef struct pers
{
 	char nome[20];
 	int vida;
 	int forca ;
 	int constit ;
 	int destreza;
 	int agilid ;
 	int h ;
 	int danar;
 	int defesa;
}PERS;

struct inimigo1
{
 	char nome[20];                
 	int vida;
 	int dano;
 	int defesa; 
  	int agilid;
  

	
}orc ={"Orc",15,12,5,3},cava ={"Cavaleiro Zumbi",16,13,5,7}, ogro = {"Ogro",14,10,5,4}, x1 ={"barbaro",25,16,5,6}, x2 ={"Golem de Gelo",26,15,5,4}, x3 = {"Rei barbaro",35,16,5,7};
	


void combate(PERS *k, struct inimigo1 *l)
{
	int y=2;
	
		srand(time(NULL));
  int ale1;
  int volt = 3;
  int vez;
  int total; 
  int esc2;
  int i=0;
  int j=0;
  int f=0;
  int u=0;
  
  	
  	if(k->agilid > l->agilid){
  		
  		ale1 = 1;
	  } else {
	  	ale1 = 2;
	  }

if(ale1==1){
        	vez =1;
            printf ("\nO %s e mais rapido e ataca primeiro!\n",k->nome);
        }
        else if(ale1==2){
        	vez=2;
            printf ("\nO %s e mais rapido e te ataca primeiro!\n",l->nome);  
        }
        
	
	    while(volt ==3){





		if(vez==1){
			printf("\nVez de %s\n",k->nome);
			vez=2;
	printf("Escolha uma das opcoes:\n");
	printf("1_atacar.\n");
	printf("2_defender.\n");
	printf("3_Usar Pocao.\n\n");
	scanf("%d",&esc2);
	
      if(i>0){
      	
      	k->defesa = k->defesa/2;
      	i=0;
	  }
      
       switch(esc2)
	{
			case 1:
			 printf("voce ataca!\n");      
              ataque = k->danar-l->defesa;
              printf(" Dano da arma = %d\n",k->danar);
              printf(" ataque = %d\n",ataque);
              if(ataque>0){
              l->vida = l->vida-ataque;
              printf(" vida do %s = %d\n",l->nome,l->vida);
          }else{
          	 printf(" Nao houve dano");
          	
		  }
                               if(l->vida<=0){
         	                     printf("\nVoce venceu o %s!!\n",l->nome);
         	                     system("pause");
	                             system("cls");
	                              volt = 0;               }
	     
			break;
			
			case 2:
				i++;
		       k->defesa = 2*k->defesa;
		       printf("voce se defende!\n defesa = %d\n",k->defesa);
		      
 
		       
			break;
			
			case 3:
				j++;
				if(j<=3){
		                 xx=rand()%5+1;
                         z=rand()%5+1;
                         y=rand()%5+1;
			
			             hp=xx+z+y;
			
		                 k->vida=k->vida+hp;	
		                 printf("vida recuperada\n");
		                                              }
		                               else{
		       	                            printf("acabou as pocoes(3/3)\n");

                                                                       }
            break;
}
      }
      else if(vez==2){
      	vez=1;
      	printf("\nVez de %s\n",&l->nome);
      	    r=rand()%3;
      		
      		system("pause");
	        system("cls");
	                             if(f>0){
      	                            l->defesa = l->defesa/2;
      	                            f=0;
                                                        }
      		switch(r)
	{
			case 0:
				 printf(" %s ataca voce!",l->nome);
				              
                       ataque1 = l->dano-k->defesa;
                       printf(" ataque = %d\n",ataque1);
                       if(ataque1>0){
                       k->vida = k->vida-ataque1;
                       printf(" vida do %s = %d\n",k->nome,k->vida);}
                       else{
          	 printf(" Nao houve dano");
          	
		  }
         
                               if(k->vida<=0){
                                       printf("voce foi derrotado tente novamente!\n");
         	                           system("pause");
	                                    system("cls");
	                                     main() ;}
	                                       
		    
	     

			break;	
				
			case 1:
			f++;
				
		       l->defesa = 2*l->defesa;
		       printf("%s se defende! = %d\n",l->nome,l->defesa);
		      	
			break;	
			
			case 2:
				u++;
				if(u<=3){
		      xx=rand()%5+1;
              z=rand()%5+1;
              y=rand()%5+1;
			
		    	hp1=xx+z+y;
			
	    	l->vida=l->vida+hp1;
		
		    printf("%s recupera sua vida\n",l->nome);
		
		}else{
		       	printf("acabou as pocoes(3/3)\n");
      	
           }
           break;
      
      
	  
    }
    }
    
    

}



}


void jogar()
{
	srand(time(NULL));	
	
	system("cls");

	PERS jogador;

	ARMAS foice,pim,sab,esp;
	ARMAS martelo;
	ARMAS espada;
	ARMAS ada;
	ARMAS mare;
	ARMAS ala;
	ARMAS valor;				
	ARMAD armadura1,ar,ar2,ar3;
	ARMAD armadura2;
	ARMAD armadura3;
	int escolha_confronto;
	
	
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(jogador.nome);

	h=0;
	while(h < 15 || h > 15)
	{
system("cls");
	printf("%s voce tem 15 pontos de habilidade para distribuir!!*\n",jogador.nome);
	
	printf("\n digite a quantidade para a sua forca: \n");
	 scanf("%d",&jogador.forca);
	printf("\n digite a quantidade para a sua constituicao:\n");
	 scanf("%d",&jogador.constit);
	printf("\n digite a quantidade para a sua destreza:\n");
	 scanf("%d",&jogador.destreza); 
	printf("\n digite a quantidade para a sua agilidade:\n");
	 scanf("%d",&jogador.agilid);
	 
      h = jogador.forca+jogador.constit+jogador.destreza+jogador.agilid;
     
      printf("\npontos = %d|15\n\n",h);
      system("pause");
//system("cls");
	}
	
    srand(time(NULL));
	d1=rand()%6;
	d2=rand()%6;
    d3=rand()%6;
	jogador.vida = d1 + d2 + d3 + jogador.constit;
	

system("cls");
	printf("\nAntes de iniciar sua jornada, voce vai em busca de equipamentos de combate com o ferreiro da vila, que ao saber do seu \nproposito nobre concorda em ajudar e oferece alguns apetrechos\n");
	printf("\nescolha a sua arma!!\n\n");
	printf("\t 1_Martelo     2_espada   3_foice\n");
	scanf("%d",&escarm);


	switch(escarm)
	{
		case 1:
		
		srand(time(NULL));
		x=rand()%12;
			
		martelo.dano = 6 + x + jogador.forca*2/3 ;
		

	printf("\n\nvoce escolheu o Martelo\n\n");
		break;
		
		case 2:
			
				srand(time(NULL));
		xx=rand()%6;
         z=rand()%6;
         y=rand()%4;
			
		espada.dano = xx + z + y + jogador.destreza + 4 ;
		printf("\n\nvoce escolheu a espada\n\n");
		
	break;
	
	case 3:
		
				srand(time(NULL));
		xx=rand()%6+1;
         z=rand()%6+1;
         y=rand()%4+1;
			
		foice.dano = xx + z + y + jogador.destreza + 4 ;
		printf("\n\nvoce escolheu a Foice\n\n");
	break;
	
	default :
	
	printf("\nInvalido!\n");
	system("pause");
	 system("cls");
	 main();
	}

	printf("--------------------------------------------");
	 printf("\n\nagora escolha a sua armadura!!!\n\n");
	printf("\t 1_Armadura de ferro.    2_Armadura de guerreiro da montanha.   3_Armadura de cavaleiro velha.\n");
	scanf("%d",&escarmad);
	
	switch(escarmad)
	{
		case 1: 
		
		armadura1.defesa = 6 + jogador.constit*2/3;
		printf("\n\nvoce escolheu a Armadura de ferro\n\n");
		break;
		
	    case 2:
		
	armadura2.defesa = 7 + jogador.constit*2/3;
	printf("\n\nvoce escolheu a Armadura de guerreiro da montanha\n\n");
		break;	
		
	    case 3:
		
			armadura3.defesa = 8 + jogador.constit*2/3;
			printf("\n\nvoce escolheu a Armadura de cavaleiro velha\n\n");
		break;
		
		default:
		printf("\n invalido!\n");
		system("pause");
		system("cls");
		jogar();	
	}
	
	
	
	
   system("pause");
   system("cls");
   printf("\n\n");
    printf("     Sua forca = %d\n",jogador.forca);
    printf("     Sua constituicao = %d\n",jogador.constit);
    printf("     Sua destreza = %d\n",jogador.destreza);
    printf("     Sua agilidade = %d\n",jogador.agilid);
    printf("     Seus pontos de vida = %d\n",jogador.vida);
    
    
    if(escarm==1)
    {
    	printf("     Dano do seu martelo = %d\n",martelo.dano);
    	jogador.danar=martelo.dano;
    
	}
	else if(escarm==2)
	{
		printf("     Dano da sua espada = %d\n",espada.dano);
		jogador.danar=espada.dano;
	}
    else
    {
    	printf("     Dano da sua foice = %d\n",foice.dano);
    	jogador.danar=foice.dano;
	}
	
	
	
	 if(escarmad==1)
    {
    	printf("     Defesa da sua armadura = %d\n\n",armadura1.defesa);
    	jogador.defesa = armadura1.defesa;
	} 
	else if(escarmad==2)
	{
		printf("     Defesa da sua armadura = %d\n\n",armadura2.defesa);
	   jogador.defesa = armadura2.defesa;
	}
    else
    {
    	jogador.defesa = armadura3.defesa;
    	printf("     Defesa da sua armadura = %d\n\n",armadura3.defesa);
    	
	}
	
	
	system("pause");
	
	system("cls");
	printf("\nDepois de receber ajuda do ferreiro, voce abre um mapa e percebe que tera que passar pela floresta amaldicoada para \nchegar ao Imperio dos Barbaros\n");
    printf("\nApos sair do reino e andar alguns quilometros a dentro da mata voce se assusta com um barulho que veio do escuro, \nmas logo se recompoe e chama o inimigo para o combate\n");
    srand(time(NULL));
    m=rand()%3;
    
    if(m==1){
    	
	combate(&jogador,&orc);
	
	}else if(m==0){
		
		combate(&jogador,&cava);
	}else{
	    combate(&jogador,&ogro);	
	}
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   
    
    
    
	while(t < 5 || t > 5)
	{
    system("cls");
    printf("\n\nParabens voce subiu de nivel!!*\n",jogador.nome);
     
	printf("%s voce tem 5 pontos de habilidade para distribuir!!*\n",jogador.nome);
	
	printf("\n digite a quantidade para a sua forca: \n");
	 scanf("%d",&o);
    jogador.forca=jogador.forca+o;
	printf("\n digite a quantidade para a sua constituicao:\n");
	 scanf("%d",&o1);
	 jogador.constit=jogador.constit+o1;
	printf("\n digite a quantidade para a sua destreza:\n");
	 scanf("%d",&o2); 
	 jogador.destreza=jogador.destreza+o2;
	printf("\n digite a quantidade para a sua agilidade:\n");
	 scanf("%d",&o3);
	 jogador.agilid=jogador.agilid+o3;
	 
      t = o+o1+o2+o3;
     
      printf("\npontos = %d/5\n\n",t);
      system("pause");

	}
	
   jogador.vida=jogador.vida+jogador.constit;
	

system("cls");
while(qw==0){
	printf("\nAo derrotar o inimigo voce percebe que ele guardava a entrada de uma masmorra onde havia um bau com algumas armas secretas,\nvoce pode escolher uma delas\n");
	printf("\nEscolha sua nova arma!!\n\n");
	
	printf("\t 1_Adaga     2_Alabarda   3_Marreta\n");
	scanf("%d",&escarm);


	switch(escarm)
	{
		case 1:
		
		srand(time(NULL));
		x=rand()%12;
			
		ada.dano = 8 + x + jogador.forca*2/3;
		qw=3 ;
		

	printf("\n\nvoce escolheu o Adaga\n\n");
		break;
		
		case 2:
			
		srand(time(NULL));
		xx=rand()%6;
         z=rand()%6;
         y=rand()%4;
			
		ala.dano = xx + z + y + jogador.destreza + 6 ;
		printf("\n\nvoce escolheu a Alabarda\n\n");
		qw=3 ;
	break;
	
	case 3:
		
		srand(time(NULL));
		xx=rand()%6+1;
         z=rand()%6+1;
         y=rand()%4+1;
			
		mare.dano = xx + z + y + jogador.destreza + 5 ;
		printf("\n\nvoce escolheu a Marreta\n\n");
		qw=3 ;
	break;
	
	default :
	
	printf("\nInvalido!\n");
	system("pause");
	 system("cls");
	
	}
	
	
}

   system("pause");
   system("cls");
   printf("\n\n");
    printf("     Sua forca = %d\n",jogador.forca);
    printf("     Sua constituicao = %d\n",jogador.constit);
    printf("     Sua destreza = %d\n",jogador.destreza);
    printf("     Sua agilidade = %d\n",jogador.agilid);
    printf("     Seus pontos de vida = %d\n",jogador.vida);
    
    
    if(escarm==1)
    {
    	printf("     Dano do sua Adaga = %d\n",ada.dano);
    	jogador.danar=ada.dano;
    
	}
	else if(escarm==2)
	{
		printf("     Dano da sua Alabarda = %d\n",ala.dano);
		jogador.danar=ala.dano;
	}
    else
    {
    	printf("     Dano da sua Marreta = %d\n",mare.dano);
    	jogador.danar=mare.dano;
	}
	
	
	system("pause");
	system("cls");
    

    
    printf("\nDepois de sair da floresta voce chega na entrada territorio inimigo\n");
    printf("avistando soldados que dizem que jamais permitirao que voce chegue ao rei deles e em seguida partindo para o ataque\n");
    
    m=rand()%2;
    
    if(m==1)
	{
    	
	combate(&jogador,&x1);
	
	}else if(m==0){
		
		combate(&jogador,&x2);
	}


 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    
    
    
	while(t < 10 || t > 10)
	{
    system("cls");
    printf("Parabens voce subiu dois niveis!!*\n",jogador.nome);
	printf("%s voce tem 10 pontos de habilidade para distribuir!!*\n",jogador.nome);
	
	printf("\n digite a quantidade para a sua forca: \n");
	 scanf("%d",&o);
    jogador.forca=jogador.forca+o;
	printf("\n digite a quantidade para a sua constituicao:\n");
	 scanf("%d",&o1);
	 jogador.constit=jogador.constit+o1;
	printf("\n digite a quantidade para a sua destreza:\n");
	 scanf("%d",&o2); 
	 jogador.destreza=jogador.destreza+o2;
	printf("\n digite a quantidade para a sua agilidade:\n");
	 scanf("%d",&o3);
	 jogador.agilid=jogador.agilid+o3;
	 
      t = o+o1+o2+o3;
     
      printf("\npontos = %d|10\n\n",t);
      system("pause");

	}
	
    jogador.vida=jogador.vida+jogador.constit;

system("cls");
while(uw==0){
	printf("\nAo derrotar os soldados voce percebe que eles possuem equipamentos que parecem ter sido forjados pelos deuses, voce pode escolher alguns deles para sua batalha final!\n");
	printf("\nescolha a sua nova arma!!\n\n");
	printf("\t 1_Espada de Fogo     2_Picareta de Pedra   3_Sabre de Luz\n");
	scanf("%d",&escarm);


	switch(escarm)
	{
		case 1:
		
		srand(time(NULL));
		x=rand()%12;
			
		esp.dano = 10 + x + jogador.forca*2/3 ;
		

	printf("\n\nvoce escolheu a Espada De Fogo\n\n");
	uw=3;
	
		break;
		
		case 2:
			
		srand(time(NULL));
		xx=rand()%6;
         z=rand()%6;
         y=rand()%4;
			
		pim.dano = xx + z + y + jogador.destreza + 9 ;
		printf("\n\nvoce escolheu a Picareta de Pedra\n\n");
		aw=3;
		
	break;
	
	case 3:
		
		srand(time(NULL));
		xx=rand()%6+1;
         z=rand()%6+1;
         y=rand()%4+1;
			
		sab.dano = xx + z + y + jogador.destreza + 6 ;
		printf("\n\nvoce escolheu o Sabre de Luz\n\n");
		uw=3;
	
	default :
	
	printf("\nInvalido!\n");
	system("pause");
	 system("cls");
	 
	}
}
while(aw==0){
	printf("--------------------------------------------");
	 printf("\n\nagora escolha a sua armadura!!\n\n");
	printf("\t 1_couraca de Tantalo.    2_Armadura de Diamante.   3_capa de cavaleiro velha.\n");
	scanf("%d",&escarmad);
	
	switch(escarmad)
	{
		case 1: 
		
		ar.defesa = 7 + jogador.constit*2/3;
		printf("\n\nvoce escolheu a couraca de Tantalo\n\n");
		aw=3 ;
		break;
		
	    case 2:
		
	ar2.defesa = 9 + jogador.constit*2/3;
	printf("\n\nvoce escolheu a Armadura de Diamante\n\n");
	aw=3 ;
		break;	
		
	    case 3:
		
			ar3.defesa = 8 + jogador.constit*2/3;
			printf("\n\nvoce escolheu acapa de cavaleiro velha\n\n");
			aw=3 ;
		break;
		
		default:
		printf("\n invalido!\n");
		system("pause");
		system("cls");
		jogar();	
	
	
 if(escarmad==1)
    {
    	printf("     Defesa da sua armadura = %d\n\n",ar.defesa);
    	jogador.defesa = ar.defesa;
	} 
	else if(escarmad==2)
	{
		printf("     Defesa da sua armadura = %d\n\n",ar2.defesa);
	   jogador.defesa = ar2.defesa;
	}
    else
    {
    	jogador.defesa = ar3.defesa;
    	printf("     Defesa da sua armadura = %d\n\n",ar3.defesa);
    	
	}	
	
if(escarm==1)
    {
    	printf("     Dano do sua Espada de Fogo = %d\n",esp.dano);
    	jogador.danar=esp.dano;
    
	}
	else if(escarm==2)
	{
		printf("     Dano da sua Picareta de Pedra = %d\n",pim.dano);
		jogador.danar=pim.dano;
	}
    else
    {
    	printf("     Dano da seu Sabre de Luz = %d\n",sab.dano);
    	jogador.danar=sab.dano;
	}
	
	
	
	
	
}

}





   system("pause");
   system("cls");
   printf("\n\n");
    printf("     Sua forca = %d\n",jogador.forca);
    printf("     Sua constituicao = %d\n",jogador.constit);
    printf("     Sua destreza = %d\n",jogador.destreza);
    printf("     Sua agilidade = %d\n",jogador.agilid);
    printf("     Seus pontos de vida = %d\n",jogador.vida);
    
    
    
	
    system("pause");
	system("cls");


    
    printf("\nDepois de estar fortemente equipado voce segue para o castelo e acha o rei barbaro, e imediatamente parte pra cima dele para concluir sua vingaca \n");
    	
	combate(&jogador,&x3);
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
printf("\nAo derrotar o lider daquele imperio voce conclui seu objetivo e toma o poder de toda a regiao, garantindo que mais \nnenhum extrerminio cruel seja proferido contra o seu povo\n");
system("pause");
system("cls");

printf("        db    db d888888b d888888b  .d88b.  d8888b. d888888b  .d8b.       \n");
printf("        88    88    88     ~~88~~  .8P  Y8. 88   8D    88    d8   8b      \n");
printf("        Y8    8P    88       88    88    88 88oobY'    88    88ooo88      \n");
printf("        `8b  d8'    88       88    88    88 88`8b      88    88~~~88      \n");
printf("         `8bd8'    .88.      88    `8b  d8' 88 `88.   .88.   88   88      \n");
printf("           YP    Y888888P    YP     `Y88P'  88   YD Y888888P YP   YP       \n");



system("pause");
system("cls");
main();
}

void recom()
{
	
	
	
	
}



int main()
{ 
int re=1;
while(re=1){



	system("cls");











	printf("            Bem-vindo ao RPG!!\n\n");
	printf("   Escolha uma das opcoes para continuar:\n\n");
	printf("            1_comecar jogo.\n");
	printf("            2_Historia.\n");
	printf("            3_Sair.\n\n");
	
	scanf("%d",&esc);
	
		switch(esc)
		{
			case 1:

            jogar();
		
			break;
			
			
			case 2:
		        system("cls");
				historia();
				printf("\n");
                system("pause");
                main();
			break;
			
			
			case 3:
				
				system("cls");
				exit(0);
			
            break;			
			
			default:
				printf("invalido!!\n");
				system("pause");
				system("cls");
				main();
			
			break;
			
//		}
		
		system("cls");
	}

}
}
