#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
typedef struct s{
int sn;
int sp;
char sc[N];
}ss;

int main()
{
    ss set[N];
    int i,x,y,z,n,p;
    int dp;
    int a=0;//counter
    char s[4];
    int amount=0;
    printf("◎STEP1: オーダーの品数を入力してください。\n");
    printf("例=========================\n　すしもり×２\n");
    printf(" とくもり×３\n");
    printf(" ビール×４\n");
    printf("品数: ３\n");
    printf("===========================\n\n品数: ");
    scanf("%s",s);
    n = atoi(s);


    for(i=1;i<n+2;i++)
    {
        printf("\n◎STEP2: オーダーに当てはまる商品番号を入力してください。\n");
        printf("\n<<種類番号>>\n\n");
        printf("0.  合計金額計算へ進む。\n");
        printf("1.  おすすめ        i norstri consigli del mese\n");
        printf("2.  ベジタリアンメニュー menu degustazione vegetariano\n");
        printf("3.  セットメニュー　    menu degustazione\n");
        printf("4.  お刺身　       pesce crudo\n");
        printf("5.  小鉢　        kobachi\n");
        printf("6.  お寿司　       sushi\n");
        printf("7.  巻き　         maki\n");
        printf("8.  セコンド　       secondi\n");
        printf("9.  揚げ物       　fritto\n");
        printf("10. 蒸し物       　vapore\n");
        printf("11. デザート　       i norstri dolci\n");
        printf("　※すべてのオーダーを入力済みで、合計金額を計算したい場合は0を入力してください。\n");
        printf("\n\nオーダー%d: 種類番号: ",i);
        scanf("%s",s);
        x = atoi(s);

        switch(x)
        {
            case 0:
                for(i=0;i<n;i++){
                    p=set[i].sn*set[i].sp;
                    printf("menu%d: %20s %d個 %d euro\n",i+1,set[i].sc,set[i].sn,p);
                }
                printf("\nドリンクありの場合はその金額を、なければ『０』を入力してください。\n");
                printf("ドリンク金額：");
                scanf("%d",&dp);
                amount=amount+dp;
                printf("\n合計金額：%d euro",amount);
                return 1;
            case 1:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\nおすすめ: <<商品番号>>\n\n");
                printf("1.　ごま豆腐       tofu al sesamo\n");
                printf("2.　サーモンスペシャル carpaccio di salmone\n");
                printf("3. キンピラ        kimpira di topinambur\n");
                printf("4. ラム           agello cotto\n");
                printf("5. アサリスープ      crema di cavolfiori vongole\n");
                printf("6. トリッパ         trippa con tofu\n");
                printf("7. みそ汁         zuppa di miso gamberi e verdura\n");
                printf("8. お好み焼き      okonomiyaki\n");
                printf("9. ラーメン        ramen\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
               // break;
                switch(y)
                {
                    case 1:
                        printf("\n商品名：ごま豆腐　数量：　");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"ごま豆腐");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：サーモンスペシャル　数量：　");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"サーモンスペシャル");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 3:
                        printf("\n商品名：キンピラ　数量：　");
                        scanf("%d",&z);
                        amount=amount+5*z;
                        strcpy(set[a].sc,"キンピラ");
                        set[a].sn=z;
                        set[a].sp=5;
                        a++;
                        break;
                    case 4:
                        printf("\n商品名：ラム　数量：　");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"ラム");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 5:
                        printf("\n商品名：アサリスープ　数量：　");
                        scanf("%d",&y);
                        amount=amount+ 10*y;
                        strcpy(set[a].sc,"アサリスープ");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 6:
                        printf("\n商品名：トリッパ　数量：　");
                        scanf("%d",&z);
                        amount=amount+ 10*z;
                        strcpy(set[a].sc,"トリッパ");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 7:
                        printf("\n商品名：みそ汁　数量：　");
                        scanf("%d",&z);
                        amount=amount+ 4*z;
                        strcpy(set[a].sc,"みそ汁");
                        set[a].sn=z;
                        set[a].sp=4;
                        a++;
                        break;
                    case 8:
                        printf("\n商品名：お好み焼き　数量：　");
                        scanf("%d",&z);
                        amount=amount+ 10*z;
                        strcpy(set[a].sc,"お好み焼き");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 9:
                        printf("\n商品名：ラーメン　数量：　");
                        scanf("%d",&z);
                        amount=amount+ 12*z;
                        strcpy(set[a].sc,"ラーメン");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    default:
                        break;
                }
                break;

            case 2:
                printf("\n\n◎STEP3: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                printf("\n商品名：ベジタリアンメニュー　数量：　");
                scanf("%d",&z);
                amount=amount+ 33*z;
                strcpy(set[a].sc,"ベジタリアンメニュー");
                set[a].sn=z;
                set[a].sp=33;
                a++;
                break;
            case 3:
                printf("\n\n◎STEP3: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                printf("\n商品名：セットメニュー　数量：　");
                scanf("%d",&z);
                amount=amount+ 38*z;
                strcpy(set[a].sc,"セットメニュー");
                set[a].sn=z;
                set[a].sp=38;
                a++;
                break;
            case 4:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\nお刺身: <<商品番号>>\n\n");
                printf("1. 三種もり      sanshumori carpaccio di tonno, salmone, branzino\n");
                printf("2. 五種もり      goshumori\n");
                printf("3. 黒マグロ      carpaccio di tonno\n");
                printf("4. さけ＆いくら    carpaccio di salmone con uova di salone\n");
                printf("5. えびゆずコショウ carpaccio di gamberi con yuzu piccante\n");
                printf("6.　海鮮サラダ    insalata pesce crudo con salsa ponzu\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                switch(y)
                {
                    case 1:
                        printf("\n商品名：三種もり　数量：　");
                        scanf("%d",&z);
                        amount=amount+22*z;
                        strcpy(set[a].sc,"三種もり");
                        set[a].sn=z;
                        set[a].sp=22;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：五種もり　数量：　");
                        scanf("%d",&z);
                        amount=amount+28*z;strcpy(set[a].sc,"五種もり");
                        set[a].sn=z;
                        set[a].sp=28;
                        a++;
                        break;
                    case 3:
                        printf("\n商品名：黒マグロ　数量：　");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"黒マグロ");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 4:
                        printf("\n商品名：さけ＆いくら　数量：　");
                        scanf("%d",&z);
                        amount=amount+12*z;
                        strcpy(set[a].sc,"さけ＆いくら");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    case 5:
                        printf("\n商品名：えびゆずコショウ　数量：　");
                        scanf("%d",&z);
                        amount=amount+12*z;
                        strcpy(set[a].sc,"えびゆずコショウ");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    case 6:
                        printf("\n商品名：海鮮サラダ　数量：　");
                        scanf("%d",&z);
                        amount=amount+12*z;
                        strcpy(set[a].sc,"海鮮サラダ");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    default:
                        break;
                }
                break;

            case 5:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\n小鉢: <<商品番号>>\n\n");
                printf("1.　えだまめ    fagioli di soia\n");
                printf("2.　ひじき      alghe hijiki\n");
                printf("3. 納豆　     fagioli di soia fermentati\n");
                printf("4.　やっこ      tofu con zenzero e katsuobushi\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                switch(y)
                {
                    case 1:
                        printf("\n商品名：えだまめ　数量：　");
                        scanf("%d",&z);
                        amount=amount+4*z;
                        strcpy(set[a].sc,"えだまめ");
                        set[a].sn=z;
                        set[a].sp=4;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：ひじき　数量：　");
                        scanf("%d",&z);
                        amount=amount+4*z;
                        strcpy(set[a].sc,"ひじき");
                        set[a].sn=z;
                        set[a].sp=4;
                        a++;
                        break;
                    case 3:
                        printf("\n商品名：納豆　数量：　");
                        scanf("%d",&z);
                        amount=amount+5*z;
                        strcpy(set[a].sc,"納豆");
                        set[a].sn=z;
                        set[a].sp=5;
                        a++;
                        break;
                    case 4:
                        printf("\n商品名：やっこ　数量：　");
                        scanf("%d",&z);
                        amount=amount+5*z;
                        strcpy(set[a].sc,"やっこ");
                        set[a].sn=z;
                        set[a].sp=5;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 6:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\nお寿司: <<商品番号>>\n\n");
                printf("1.　すしもり　   10pz di sushi misto\n");
                printf("2.　とくもり　    tokumori\n");
                printf("3.　海鮮丼　   carpaccio misto su riso condito\n");
                printf("4.　さけいくら丼 　carpaccio di salmone e uova di salmone su riso\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                switch(y)
                {
                    case 1:
                        printf("\n商品名：すしもり　数量：　");
                        scanf("%d",&z);
                        amount=amount+18*z;
                        strcpy(set[a].sc,"すしもり");
                        set[a].sn=z;
                        set[a].sp=18;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：とくもり　数量：　");
                        scanf("%d",&z);
                        amount=amount+26*z;
                        strcpy(set[a].sc,"とくもり");
                        set[a].sn=z;
                        set[a].sp=26;
                        a++;
                        break;
                    case 3:
                        printf("\n商品名：海鮮丼　数量：　");
                        scanf("%d",&z);
                        amount=amount+20*z;
                        strcpy(set[a].sc,"海鮮丼");
                        set[a].sn=z;
                        set[a].sp=20;
                        a++;
                        break;
                    case 4:
                        printf("\n商品名：さけいくら丼　数量：　");
                        scanf("%d",&z);
                        amount=amount+16*z;
                        strcpy(set[a].sc,"さけいくら丼");
                        set[a].sn=z;
                        set[a].sp=16;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 7:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\n巻き: <<商品番号>>\n\n");
                printf("1.　つけまぐろ     tonno marinato e wasabi grattugiato\n");
                printf("2.　甘えび+しそ    carpaccio di gamberi e shiso\n");
                printf("3.　ゆずホタテ     capesante e yuzu\n");
                printf("4.　海老天       tempra di gamberi\n");
                printf("5.　とりのからあげ   pollo fritto\n");
                printf("6. あぶり和牛　   vitello giapponese grigliato con salsa BBQ\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                switch(y)
                {
                    case 1:
                        printf("\n商品名：つけまぐろ　数量：　");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"つけまぐろ");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：甘えび+しそ　数量：　");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"甘えび+しそ");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 3:
                        printf("\n商品名：ゆずホタテ　数量：　");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"ゆずホタテ");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 4:
                        printf("\n商品名：海老天　数量：　");
                        scanf("%d",&z);
                        amount=amount+16*z;
                        strcpy(set[a].sc,"海老天");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 5:
                        printf("\n商品名：とりのからあげ　数量：　");
                        scanf("%d",&z);
                        amount=amount+16*z;
                        strcpy(set[a].sc,"とりのからあげ");
                        set[a].sn=z;
                        set[a].sp=16;
                        a++;
                        break;
                    case 6:
                        printf("\n商品名：あぶり和牛　数量：　");
                        scanf("%d",&z);
                        amount=amount+20*z;
                        strcpy(set[a].sc,"あぶり和牛");
                        set[a].sn=z;
                        set[a].sp=20;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 8:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\nセコンド: <<商品番号>>\n\n");
                printf("1. シシャモ     　　 shishamo con limone\n");
                printf("2. ホタテあられ　 　　 capesante vestite con arare\n");
                printf("3. さけゆあん　   　　salmone marinato e agrumi giapponese\n");
                printf("4.　すずき＆山椒　 　　branzino grigliato con sansho\n");
                printf("5.　ぎょうざ　    　　 gyoza alla piastra\n");
                printf("6.　とりのてりやき　 　　pollo grigliato con salsa teriyaki\n");
                printf("7.　あぶりチャーシュー　coppa di maiale allostita\n");
                printf("8.　和牛串焼き　　　　spiedino di vitello giapponese\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                switch(y)
                {
                    case 1:
                        printf("\n商品名：シシャモ　数量：　");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"シシャモ");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：ホタテあられ　数量：　");
                        scanf("%d",&z);
                        amount=amount+13*z;
                        strcpy(set[a].sc,"ホタテあられ");
                        set[a].sn=z;
                        set[a].sp=13;
                        a++;
                        break;
                    case 3:
                        printf("\n商品名：さけゆあん　数量：　");
                        scanf("%d",&z);
                        amount=amount+13*z;
                        strcpy(set[a].sc,"さけゆあん");
                        set[a].sn=z;
                        set[a].sp=13;
                        a++;
                        break;
                    case 4:
                        printf("\n商品名：すずき＆山椒　数量：　");
                        scanf("%d",&z);
                        amount=amount+18*z;
                        strcpy(set[a].sc,"すずき＆山椒");
                        set[a].sn=z;
                        set[a].sp=18;
                        a++;
                        break;
                    case 5:
                        printf("\n商品名：ぎょうざ　数量：　");
                        scanf("%d",&z);
                        amount=amount+8*z;
                        strcpy(set[a].sc,"ぎょうざ");
                        set[a].sn=z;
                        set[a].sp=8;
                        a++;
                        break;
                    case 6:
                        printf("\n商品名：とりのてりやき　数量：　");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"とりのてりやき");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 7:
                        printf("\n商品名：あぶりチャーシュー　数量：　");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"あぶりチャーシュー");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 8:
                        printf("\n商品名：和牛串焼き　数量：　");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"和牛串焼き");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 9:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\n揚げ物: <<商品番号>>\n\n");
                printf("1.　とりのからあげ 　pollo fritto\n");
                printf("2.　野菜の天ぷら 　fritto di verdera\n");
                printf("3.　海老天もり 　　fritto di gamberi e verdure\n");
                printf("4.　特上天もり　　 fritto misto speciale\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                switch(y)
                {
                    case 1:
                        printf("\n商品名：とりのからあげ　数量：　");
                        scanf("%d",&z);
                        amount=amount+8*z;
                        strcpy(set[a].sc,"とりのからあげ");
                        set[a].sn=z;
                        set[a].sp=8;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：野菜の天ぷら　数量：　");
                        scanf("%d",&z);
                        amount=amount+12*z;
                        strcpy(set[a].sc,"野菜の天ぷら");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    case 3:
                        printf("\n商品名：海老天もり　数量：　");
                        scanf("%d",&z);
                        amount=amount+16*z;
                        strcpy(set[a].sc,"海老天もり");
                        set[a].sn=z;
                        set[a].sp=16;
                        a++;
                        break;
                    case 4:
                        printf("\n商品名：特上天もり　数量：　");
                        scanf("%d",&z);
                        amount=amount+24*z;
                        strcpy(set[a].sc,"特上天もり");
                        set[a].sn=z;
                        set[a].sp=24;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 10:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\n蒸し物: <<商品番号>>\n\n");
                printf("1.　季節野菜　　　 verdura di stagione\n");
                printf("2.　ひめじの酒蒸し　triglia di scoglio cotta al vapore con sake\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                switch(y)
                {
                    case 1:
                        printf("\n商品名：季節野菜 　数量：　");
                        scanf("%d",&z);
                        amount=amount+18*z;
                        strcpy(set[a].sc,"季節野菜");
                        set[a].sn=z;
                        set[a].sp=18;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：ひめじの酒蒸し　数量：　");
                        scanf("%d",&z);
                        amount=amount+18*z;
                        strcpy(set[a].sc,"ひめじの酒蒸し");
                        set[a].sn=z;
                        set[a].sp=18;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 11:
                printf("\n\n◎STEP3: オーダーの商品名を選択してください。\n");
                printf("\nデザート: <<商品番号>>\n\n");
                printf("1.　くり大福 　　　daifuku con castagna\n");
                printf("2.　はぶたえもち　　habutae mochi\n");
                printf("3.　ティラミス　　　　tiramisu\n");
                printf("4.　セミフレッド　　　semifreddo\n");
                printf("5.　そるべっと　　　　sorbetto\n");
                printf("6.　どらやき　　　　　dorayaki\n");
                printf("7.　ジェラート　　　　gelato\n");
                printf("\n\n商品番号: ");
                scanf("%d",&y);
                printf("\n\n◎STEP4: オーダーの商品数を入力してください。\n");
                printf("　※商品名を選び間違えてしまった場合は、数量に0を入力してください。\n");
                switch(y)
                {
                    case 1:
                        printf("\n商品名：くり大福　数量：　");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"くり大福");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 2:
                        printf("\n商品名：はぶたえもち　数量：　");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"はぶたえもち");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 3:
                        printf("\n商品名：ティラミス　数量：　");
                        scanf("%d",&z);
                        amount=amount+8*z;
                        strcpy(set[a].sc,"ティラミス");
                        set[a].sn=z;
                        set[a].sp=8;
                        a++;
                        break;
                    case 4:
                        printf("\n商品名：セミフレッド　数量：　");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"セミフレッド");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 5:
                        printf("\n商品名：そるべっと　数量：　");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"そるべっと");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 6:
                        printf("\n商品名：どらやき　数量：　");
                        scanf("%d",&z);
                        amount=amount+6*z;
                        strcpy(set[a].sc,"どらやき");
                        set[a].sn=z;
                        set[a].sp=6;
                        a++;
                        break;
                    case 7:
                        printf("\n商品名：ジェラート　数量：　");
                        scanf("%d",&z);
                        amount=amount+5*z;
                        strcpy(set[a].sc,"ジェラート");
                        set[a].sn=z;
                        set[a].sp=5;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            default:
                  break;


        }
    }

    return 0;
}
