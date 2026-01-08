#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void deney1 (double *g , int *t1 , float *h1 , char *ad) {   //Serbest dusme deneyinin fonksiyonu
    printf("Prof. %s lutfen deney suresini sn cinsinden giriniz: \n" , ad);
    scanf(" %d" , t1);
    *t1 = (*t1<0)?  -*t1 : *t1 ;   //ternary ile zamanin pozitif olduguna emin oluyoruz

    for (int i=0 ; i<8 ; i++) {      //g dizisindeki tum dizileri deneye tabi tutuyoruz
        (*h1) = 0.5 * (*(g+i)) * pow((*t1) , 2);   //deney hesaplamasi
        printf("Yaptiginiz deneye gore %d. gezegen icin topun dusme yuksekligi %.2f m \n" , i+1 , *h1);
    }
    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar();
}

void deney2 (double *g , int *v2 , float *h2 , char *ad) {   //Yukari atis deneyinin fonksiyonu
    printf("Prof. %s lutfen deneyin ilk hizini m/s cinsinden giriniz: \n" , ad);
    scanf(" %d" , v2);
    (*v2) = ((*v2)<0)? -(*v2) : (*v2) ;    //ternary ile hizin pozitif olduguna emin oluyoruz

    for (int i=0 ; i<8 ; i++) {   //g dizisindeki tum gezegenleri deneye tabi tutuyoruz
        (*h2) = pow(*v2 , 2) / (2 * (*(g+i)));   //deney hesaplamasi
        printf("Yaptiginiz deneye gore %d. gezegen icin h max yuksekligi %.2f m \n" , i+1 , *h2); 
    }
    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar();
}

void deney3 (double *g , int *m3 , float *G3 , char *ad) {    //Agirlik deneyinin fonksiyonu
    printf("Prof. %s lutfen deneyin kutlesini kg cinsinden giriniz: \n" , ad);
    scanf(" %d" , m3);
    *m3 = ((*m3)<0)? -(*m3) : (*m3);     //ternary ile kutlenin pozitif olduguna emin oluyoruz

    for (int i=0 ; i<8 ; i++){    //g dizindeki tum gezegenleri deneye tabi tutuyoruz
        (*G3) = (*m3) * (*(g+i));    //deney hesaplamasi
        printf("Yaptiginiz deneye gore %d. gezegen icin G degeri %.2f N\n" , i+1 , *G3); 
    }
    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar();
}

void deney4 (double *g , int *m4 , float *h4 , float *Ep4 , char *ad) {   //Kutlecekimsel potansiyel enerji deneyi fonksiyonu
    printf("Prof. %s lutfen deneyin yuksekligini m cinsinden giriniz: \n" , ad);
    scanf(" %f" , h4);
    *h4 = ((*h4)<0)? -(*h4) : (*h4);  //ternary ile yuksekligin pozitif olduguna emin olduk
    printf("Prof. %s lutfen deneyin kutlesini kg cinsinden giriniz \n" , ad);
    scanf(" %d" , m4);
    *m4 = ((*m4)<0)? -(*m4) : (*m4);   //ternary ile kutlenin pozitif olduguna emin olduk

    for (int i=0 ; i<8 ; i++){    //g dizisindeki tum gezegenleri deneye tabi tuttuk
        (*Ep4) = (*h4) * (*m4) * (*(g+i));   //deney hesaplamasi
        printf("Yaptiginiz deneye gore %d. gezegen icin potansiyel enerji %.2f J\n" , i+1 , *Ep4);
    }
    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar();
}

void deney5 (double *g , float *p5 , float *h5 , float *P5 , char *ad) {    //Hidrostatik basinc deneyi fonksiyonu
    printf("Prof. %s lutfen deneyin rho sunu kg/𝑚3 cinsinden giriniz: \n" , ad);
    scanf(" %f" , p5);
    *p5 = ((*p5)<0)? -(*p5) : (*p5);   //ternary ile rhonun pozitif olduguna emin olduk
    printf("Prof. %s lutfen deneyin derinligini m cinsinden giriniz: \n" , ad);
    scanf(" %f" , h5);
    *h5 = ((*h5)<0)? - (*h5) : (*h5);   //ternary ile derinligin pozitif olduguna emin olduk

    for (int i=0 ; i<8 ; i++){     //g dizisindeki tum gezegenleri deneye tabi tuttuk 
        (*P5) = (*p5) * (*h5) * (*(g+i)) ;    //deney hesaplamasi
        printf("Yptiginiz deneye gore %d. gezegen icin hidrostatik basinc %.2f Pa\n" , i+1 , *P5);
    }
    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar();
}

void deney6 (double *g , float *Fk6 , float *p6  , int *v6 , char *ad) {    //Arsiment kaldirma deneyi fonksiyonu
    printf("Prof. %s lutfen deneyin rho sunu kg/𝑚3 cinsinden giriniz: \n" , ad);
    scanf(" %f" , p6);
    *p6 = ((*p6)<0)? -(*p6) : (*p6);   //ternary ile rhonun pozitif olduguna emin olduk
    printf("Prof. %s lutfen deneydeki batan hacmi 𝑚3 cinsinden giriniz: \n" , ad);
    scanf(" %d" , v6);
    *v6 = ((*v6)>0)? - (*v6) : (*v6);   //ternary ile batan hacmin pozitif olduguna emin olduk

    for (int i=0 ; i<8 ; i++){     //g dizisindeki tum gezegenleri deneye tabi tuttuk 
        (*Fk6) = (*p6) * (*v6) * (*(g+i)) ;    //deney hesaplamasi
        printf("Yaptiginiz deneye gore %d. gezegen icin hidrostatik basinc %.2f Pa\n" , i+1 , *Fk6);
    }
    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar(); 

}

void deney7 (double *g , float *l7 , float *T7 , char *ad) {   //Basit sarkac deneyi fonksiyonu
    printf("Prof. %s lutfen deneyde kullanilan ipin uzunlugunu m cinsinden giriniz\n" , ad);
    scanf(" %f" , l7);
    *l7 = ((*l7)<0)? -(*l7) : (*l7);  //ternary ile ipin uzunlugunun pozitif olduguna emin olduk

    for(int i=0 ; i<8 ; i++){    //g dizisindeki tum gezegenleri deneye tabi tuttuk
        (*T7) = 2 * M_PI * sqrt((*l7)/(*(g+i)));    //deney hesaplamasi
        printf("Yaptiginiz deneye gore %d. gezegen icin sarkacin periyodu %.2f s\n" , i+1 , *T7);
    }
    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar(); 
}

void deney8 (double *g , int *m8 , float *T8 , char *ad) {   //Sabit ip gerilmesi deneyi fonksiyonu
    printf("Prof. %s lutfen deneyde kullandiginiz cismin kutlesini kg cinsinden giriniz:" , ad);
    scanf(" %d" , m8);
    *m8 = ((*m8)<0)?  -(*m8) : (*m8);   //ternary ile cismin kutlesinin pozitif oldugundan emin olduk

    for(int i=0 ; i<8 ; i++){      //g dizisindeki tum gezegenleri deneye tabi tuttuk
        (*T8) = (*m8) * (*(g+i));   //deney hesaplamasi
        printf("Yaptiniz deneye gore %d. gezegen icin ipin gerilme kuvveti %.2f N\n" , i+1 , *T8);
    }
    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar(); 
}

void deney9 (double *g , float *a9 , int *m9 , float *N9 , char *ad) {    //Asansor deneyi fonksiyonu
    int yon;
    printf("Prof %s lutfen deneyde kullandiginiz asansorun ivmesini 𝑚/s2 cinsinden giriniz:\n" , ad);
    scanf(" %f" , a9);
    *a9 = ((*a9)>0)?  -(*a9) : (*a9);   //ternary ile cismin ivmesinin pozitif oldugundan emin olduk
    printf("Prif. %s lutfen deneyde kullandiginiz cismin kutlesini kg cinsinden giriniz:\n" , ad );
    scanf(" %d" , m9);
    *m9 = ((*m9)<0)?  -(*m9) : (*m9);   //ternary ile cismin kutlesinin pozitif oldugundan emin olduk
    
    printf("Asansorun durumunu 1 veya 2 diye seciniz :)\n");
    printf("1 - Yukari ivmelenerek hizlaniyor / Asagi yavasliyor \n");
    printf("2 - Asagi ivmelenerek hizlaniyor / Yukari yavasliyor\n");
    printf("Seciminiz:");    //Deneydeki iki duruma gore secim yapmasini istedik
    scanf(" %d" , &yon);

    if (yon == 1) {
        for (int i=0 ; i<8 ; i++){
            (*N9) = (*m9) * ((*(g+i))+(*a9));
            printf("Yaptiginiz deneye gore %d. gezegen icin cismin agirligi %.2f N\n" , i+1 , *N9);
        }
    }
    else if (yon == 2){
        for (int i=0 ; i<8 ;i++) {
            (*N9) = (*m9) * ((*(g+i))-(*a9));
            printf("Yaptiginiz deneye gore %d. gezegen icin cismin agirligi %.2f N\n" , i+1 , *N9);
        }
    }
    else 
        printf("Hatali bir secim yaptiniz!");

    printf("\n Devam etmek icin Enter'a basin...");  //for dongusunun sonuclarini duzgun vermesi icin
    getchar();
    getchar(); 
}


int main () {
    char ad[20];
    int secim ;

    double g[] = {3.7 , 8.87 , 9.81 , 3.71 , 24.79 , 10.44 , 8.69 , 11.15};  
    //Sirasiyla : Merkur , Venus , Dunya , Mar , Jupiter , Saturn , Uranus , Neptun  gezegenlerinin yer cekimi ivmeleri 
    
    int gezegen_say = 8;

    printf("Profesor lutfen adinizi giriniz:");
    scanf(" %s" , ad);
    
    do {
        printf("--------Deney Menusu--------\n");  //Deney mennusunun yazdirilma kismi
        printf("1) Serbest Dusme Deneyi\n");
        printf("2) Yukari Atis Deneyi\n");
        printf("3) Agirlik Deneyi\n");
        printf("4) Kutlecekimsel Potansiyel Enerji Deneyi\n");
        printf("5) Hidrostatik Basinc Deneyi\n");
        printf("6) Arsiment Kaldirma Kuvveti Deneyi\n");
        printf("7) Basit Sarkac Peiyodu Deneyi\n");
        printf("8) Sabit Ip Gerilmesi Deneyi\n");
        printf("9) Asansor Deneyi\n");
        printf("-1) Cikis\n");

        printf("Prf. %s lutfen yapmak istediginiz deneyin numarasini giriniz:\n" , ad);
        scanf("%d" , &secim);

        switch (secim) {   //secime gore fonksiyonu cagirma kismi
        case (1): {
           int t1;
           float h1;
           

           deney1 (g , &t1 , &h1 , ad) ;   //fonksiyonu cagriyor
           break;
        }
        case (2): {
           int v2;
           float h2;
           
           deney2 (g , &v2 , &h2 , ad);    //fonksiyonu cagiriyor
           break;
        }
        case (3): {
           int m3;
           float G3;

           deney3 (g , &m3 , &G3 , ad);    //fonksiyonu cagiriyor
           break;
        }
        case (4): {
            int m4;
            float h4 , Ep4 ;

            deney4 (g , &m4 , &h4 , &Ep4 , ad);   //fonksiyonu cagiriyor
            break;
        }
        case (5): {
            float p5 , h5 , P5;   //p5 fizikteki rho yu temsil etmektedir

            deney5 ( g , &p5 , &h5 , &P5 , ad);    //fonksiyonu cagiriyor
            break;
        }
        case (6): {
            int v6;
            float Fk6 , p6 ;      //p6 fizikteki rho yu temsil etmektedir

            deney6(g , &Fk6 , &p6 , &v6 , ad);   //fonksiyonu cagiriyor
            break;
        }
        case (7): {
            float l7 , T7;

            deney7 (g , &l7 , &T7 , ad);    //fonksiyonu cagiriyor
            break;
        }
        case (8):{
            int m8;
            float T8;

            deney8(g , &m8 , &T8 , ad);    //fonksiyonu cagiriyor
            break;
        }
        case(9):{
            int m9;
            float a9 , N9;

            deney9 (g , &a9 , &m9 , &N9 , ad);    //fonksiyonu cagiriyor
            break;
        }
        default:
           printf("Gecersiz secim! \n");
           break;
    

     }    
    }
    while (secim != -1) ;  //Donguden cikmak icin

return 0;

}