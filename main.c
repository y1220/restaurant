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
    printf("��STEP1: �I�[�_�[�̕i������͂��Ă��������B\n");
    printf("��=========================\n�@��������~�Q\n");
    printf(" �Ƃ�����~�R\n");
    printf(" �r�[���~�S\n");
    printf("�i��: �R\n");
    printf("===========================\n\n�i��: ");
    scanf("%s",s);
    n = atoi(s);


    for(i=1;i<n+2;i++)
    {
        printf("\n��STEP2: �I�[�_�[�ɓ��Ă͂܂鏤�i�ԍ�����͂��Ă��������B\n");
        printf("\n<<��ޔԍ�>>\n\n");
        printf("0.  ���v���z�v�Z�֐i�ށB\n");
        printf("1.  ��������        i norstri consigli del mese\n");
        printf("2.  �x�W�^���A�����j���[ menu degustazione vegetariano\n");
        printf("3.  �Z�b�g���j���[�@    menu degustazione\n");
        printf("4.  ���h�g�@       pesce crudo\n");
        printf("5.  �����@        kobachi\n");
        printf("6.  �����i�@       sushi\n");
        printf("7.  �����@         maki\n");
        printf("8.  �Z�R���h�@       secondi\n");
        printf("9.  �g����       �@fritto\n");
        printf("10. ������       �@vapore\n");
        printf("11. �f�U�[�g�@       i norstri dolci\n");
        printf("�@�����ׂẴI�[�_�[����͍ς݂ŁA���v���z���v�Z�������ꍇ��0����͂��Ă��������B\n");
        printf("\n\n�I�[�_�[%d: ��ޔԍ�: ",i);
        scanf("%s",s);
        x = atoi(s);

        switch(x)
        {
            case 0:
                for(i=0;i<n;i++){
                    p=set[i].sn*set[i].sp;
                    printf("menu%d: %20s %d�� %d euro\n",i+1,set[i].sc,set[i].sn,p);
                }
                printf("\n�h�����N����̏ꍇ�͂��̋��z���A�Ȃ���΁w�O�x����͂��Ă��������B\n");
                printf("�h�����N���z�F");
                scanf("%d",&dp);
                amount=amount+dp;
                printf("\n���v���z�F%d euro",amount);
                return 1;
            case 1:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n��������: <<���i�ԍ�>>\n\n");
                printf("1.�@���ܓ���       tofu al sesamo\n");
                printf("2.�@�T�[�����X�y�V���� carpaccio di salmone\n");
                printf("3. �L���s��        kimpira di topinambur\n");
                printf("4. ����           agello cotto\n");
                printf("5. �A�T���X�[�v      crema di cavolfiori vongole\n");
                printf("6. �g���b�p         trippa con tofu\n");
                printf("7. �݂��`         zuppa di miso gamberi e verdura\n");
                printf("8. ���D�ݏĂ�      okonomiyaki\n");
                printf("9. ���[����        ramen\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
               // break;
                switch(y)
                {
                    case 1:
                        printf("\n���i���F���ܓ����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"���ܓ���");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F�T�[�����X�y�V�����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"�T�[�����X�y�V����");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 3:
                        printf("\n���i���F�L���s���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+5*z;
                        strcpy(set[a].sc,"�L���s��");
                        set[a].sn=z;
                        set[a].sp=5;
                        a++;
                        break;
                    case 4:
                        printf("\n���i���F�����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"����");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 5:
                        printf("\n���i���F�A�T���X�[�v�@���ʁF�@");
                        scanf("%d",&y);
                        amount=amount+ 10*y;
                        strcpy(set[a].sc,"�A�T���X�[�v");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 6:
                        printf("\n���i���F�g���b�p�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+ 10*z;
                        strcpy(set[a].sc,"�g���b�p");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 7:
                        printf("\n���i���F�݂��`�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+ 4*z;
                        strcpy(set[a].sc,"�݂��`");
                        set[a].sn=z;
                        set[a].sp=4;
                        a++;
                        break;
                    case 8:
                        printf("\n���i���F���D�ݏĂ��@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+ 10*z;
                        strcpy(set[a].sc,"���D�ݏĂ�");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 9:
                        printf("\n���i���F���[�����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+ 12*z;
                        strcpy(set[a].sc,"���[����");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    default:
                        break;
                }
                break;

            case 2:
                printf("\n\n��STEP3: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                printf("\n���i���F�x�W�^���A�����j���[�@���ʁF�@");
                scanf("%d",&z);
                amount=amount+ 33*z;
                strcpy(set[a].sc,"�x�W�^���A�����j���[");
                set[a].sn=z;
                set[a].sp=33;
                a++;
                break;
            case 3:
                printf("\n\n��STEP3: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                printf("\n���i���F�Z�b�g���j���[�@���ʁF�@");
                scanf("%d",&z);
                amount=amount+ 38*z;
                strcpy(set[a].sc,"�Z�b�g���j���[");
                set[a].sn=z;
                set[a].sp=38;
                a++;
                break;
            case 4:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n���h�g: <<���i�ԍ�>>\n\n");
                printf("1. �O�����      sanshumori carpaccio di tonno, salmone, branzino\n");
                printf("2. �܎����      goshumori\n");
                printf("3. ���}�O��      carpaccio di tonno\n");
                printf("4. ������������    carpaccio di salmone con uova di salone\n");
                printf("5. ���т䂸�R�V���E carpaccio di gamberi con yuzu piccante\n");
                printf("6.�@�C�N�T���_    insalata pesce crudo con salsa ponzu\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                switch(y)
                {
                    case 1:
                        printf("\n���i���F�O�����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+22*z;
                        strcpy(set[a].sc,"�O�����");
                        set[a].sn=z;
                        set[a].sp=22;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F�܎����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+28*z;strcpy(set[a].sc,"�܎����");
                        set[a].sn=z;
                        set[a].sp=28;
                        a++;
                        break;
                    case 3:
                        printf("\n���i���F���}�O���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"���}�O��");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 4:
                        printf("\n���i���F������������@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+12*z;
                        strcpy(set[a].sc,"������������");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    case 5:
                        printf("\n���i���F���т䂸�R�V���E�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+12*z;
                        strcpy(set[a].sc,"���т䂸�R�V���E");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    case 6:
                        printf("\n���i���F�C�N�T���_�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+12*z;
                        strcpy(set[a].sc,"�C�N�T���_");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    default:
                        break;
                }
                break;

            case 5:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n����: <<���i�ԍ�>>\n\n");
                printf("1.�@�����܂�    fagioli di soia\n");
                printf("2.�@�Ђ���      alghe hijiki\n");
                printf("3. �[���@     fagioli di soia fermentati\n");
                printf("4.�@�����      tofu con zenzero e katsuobushi\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                switch(y)
                {
                    case 1:
                        printf("\n���i���F�����܂߁@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+4*z;
                        strcpy(set[a].sc,"�����܂�");
                        set[a].sn=z;
                        set[a].sp=4;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F�Ђ����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+4*z;
                        strcpy(set[a].sc,"�Ђ���");
                        set[a].sn=z;
                        set[a].sp=4;
                        a++;
                        break;
                    case 3:
                        printf("\n���i���F�[���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+5*z;
                        strcpy(set[a].sc,"�[��");
                        set[a].sn=z;
                        set[a].sp=5;
                        a++;
                        break;
                    case 4:
                        printf("\n���i���F������@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+5*z;
                        strcpy(set[a].sc,"�����");
                        set[a].sn=z;
                        set[a].sp=5;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 6:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n�����i: <<���i�ԍ�>>\n\n");
                printf("1.�@��������@   10pz di sushi misto\n");
                printf("2.�@�Ƃ�����@    tokumori\n");
                printf("3.�@�C�N���@   carpaccio misto su riso condito\n");
                printf("4.�@���������瘥 �@carpaccio di salmone e uova di salmone su riso\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                switch(y)
                {
                    case 1:
                        printf("\n���i���F��������@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+18*z;
                        strcpy(set[a].sc,"��������");
                        set[a].sn=z;
                        set[a].sp=18;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F�Ƃ�����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+26*z;
                        strcpy(set[a].sc,"�Ƃ�����");
                        set[a].sn=z;
                        set[a].sp=26;
                        a++;
                        break;
                    case 3:
                        printf("\n���i���F�C�N���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+20*z;
                        strcpy(set[a].sc,"�C�N��");
                        set[a].sn=z;
                        set[a].sp=20;
                        a++;
                        break;
                    case 4:
                        printf("\n���i���F���������瘥�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+16*z;
                        strcpy(set[a].sc,"���������瘥");
                        set[a].sn=z;
                        set[a].sp=16;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 7:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n����: <<���i�ԍ�>>\n\n");
                printf("1.�@���܂���     tonno marinato e wasabi grattugiato\n");
                printf("2.�@�Â���+����    carpaccio di gamberi e shiso\n");
                printf("3.�@�䂸�z�^�e     capesante e yuzu\n");
                printf("4.�@�C�V�V       tempra di gamberi\n");
                printf("5.�@�Ƃ�̂��炠��   pollo fritto\n");
                printf("6. ���Ԃ�a���@   vitello giapponese grigliato con salsa BBQ\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                switch(y)
                {
                    case 1:
                        printf("\n���i���F���܂���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"���܂���");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F�Â���+�����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"�Â���+����");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 3:
                        printf("\n���i���F�䂸�z�^�e�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"�䂸�z�^�e");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 4:
                        printf("\n���i���F�C�V�V�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+16*z;
                        strcpy(set[a].sc,"�C�V�V");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 5:
                        printf("\n���i���F�Ƃ�̂��炠���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+16*z;
                        strcpy(set[a].sc,"�Ƃ�̂��炠��");
                        set[a].sn=z;
                        set[a].sp=16;
                        a++;
                        break;
                    case 6:
                        printf("\n���i���F���Ԃ�a���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+20*z;
                        strcpy(set[a].sc,"���Ԃ�a��");
                        set[a].sn=z;
                        set[a].sp=20;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 8:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n�Z�R���h: <<���i�ԍ�>>\n\n");
                printf("1. �V�V����     �@�@ shishamo con limone\n");
                printf("2. �z�^�e�����@ �@�@ capesante vestite con arare\n");
                printf("3. �����䂠��@   �@�@salmone marinato e agrumi giapponese\n");
                printf("4.�@���������R���@ �@�@branzino grigliato con sansho\n");
                printf("5.�@���傤���@    �@�@ gyoza alla piastra\n");
                printf("6.�@�Ƃ�̂Ă�₫�@ �@�@pollo grigliato con salsa teriyaki\n");
                printf("7.�@���Ԃ�`���[�V���[�@coppa di maiale allostita\n");
                printf("8.�@�a�����Ă��@�@�@�@spiedino di vitello giapponese\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                switch(y)
                {
                    case 1:
                        printf("\n���i���F�V�V�����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"�V�V����");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F�z�^�e�����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+13*z;
                        strcpy(set[a].sc,"�z�^�e�����");
                        set[a].sn=z;
                        set[a].sp=13;
                        a++;
                        break;
                    case 3:
                        printf("\n���i���F�����䂠��@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+13*z;
                        strcpy(set[a].sc,"�����䂠��");
                        set[a].sn=z;
                        set[a].sp=13;
                        a++;
                        break;
                    case 4:
                        printf("\n���i���F���������R���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+18*z;
                        strcpy(set[a].sc,"���������R��");
                        set[a].sn=z;
                        set[a].sp=18;
                        a++;
                        break;
                    case 5:
                        printf("\n���i���F���傤���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+8*z;
                        strcpy(set[a].sc,"���傤��");
                        set[a].sn=z;
                        set[a].sp=8;
                        a++;
                        break;
                    case 6:
                        printf("\n���i���F�Ƃ�̂Ă�₫�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"�Ƃ�̂Ă�₫");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 7:
                        printf("\n���i���F���Ԃ�`���[�V���[�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"���Ԃ�`���[�V���[");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    case 8:
                        printf("\n���i���F�a�����Ă��@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+10*z;
                        strcpy(set[a].sc,"�a�����Ă�");
                        set[a].sn=z;
                        set[a].sp=10;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 9:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n�g����: <<���i�ԍ�>>\n\n");
                printf("1.�@�Ƃ�̂��炠�� �@pollo fritto\n");
                printf("2.�@��؂̓V�Ղ� �@fritto di verdera\n");
                printf("3.�@�C�V�V���� �@�@fritto di gamberi e verdure\n");
                printf("4.�@����V����@�@ fritto misto speciale\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                switch(y)
                {
                    case 1:
                        printf("\n���i���F�Ƃ�̂��炠���@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+8*z;
                        strcpy(set[a].sc,"�Ƃ�̂��炠��");
                        set[a].sn=z;
                        set[a].sp=8;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F��؂̓V�Ղ�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+12*z;
                        strcpy(set[a].sc,"��؂̓V�Ղ�");
                        set[a].sn=z;
                        set[a].sp=12;
                        a++;
                        break;
                    case 3:
                        printf("\n���i���F�C�V�V����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+16*z;
                        strcpy(set[a].sc,"�C�V�V����");
                        set[a].sn=z;
                        set[a].sp=16;
                        a++;
                        break;
                    case 4:
                        printf("\n���i���F����V����@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+24*z;
                        strcpy(set[a].sc,"����V����");
                        set[a].sn=z;
                        set[a].sp=24;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 10:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n������: <<���i�ԍ�>>\n\n");
                printf("1.�@�G�ߖ�؁@�@�@ verdura di stagione\n");
                printf("2.�@�Ђ߂��̎������@triglia di scoglio cotta al vapore con sake\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                switch(y)
                {
                    case 1:
                        printf("\n���i���F�G�ߖ�� �@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+18*z;
                        strcpy(set[a].sc,"�G�ߖ��");
                        set[a].sn=z;
                        set[a].sp=18;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F�Ђ߂��̎������@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+18*z;
                        strcpy(set[a].sc,"�Ђ߂��̎�����");
                        set[a].sn=z;
                        set[a].sp=18;
                        a++;
                        break;
                    default:
                        break;
                }
                break;
            case 11:
                printf("\n\n��STEP3: �I�[�_�[�̏��i����I�����Ă��������B\n");
                printf("\n�f�U�[�g: <<���i�ԍ�>>\n\n");
                printf("1.�@����啟 �@�@�@daifuku con castagna\n");
                printf("2.�@�͂Ԃ��������@�@habutae mochi\n");
                printf("3.�@�e�B���~�X�@�@�@�@tiramisu\n");
                printf("4.�@�Z�~�t���b�h�@�@�@semifreddo\n");
                printf("5.�@����ׂ��Ɓ@�@�@�@sorbetto\n");
                printf("6.�@�ǂ�₫�@�@�@�@�@dorayaki\n");
                printf("7.�@�W�F���[�g�@�@�@�@gelato\n");
                printf("\n\n���i�ԍ�: ");
                scanf("%d",&y);
                printf("\n\n��STEP4: �I�[�_�[�̏��i������͂��Ă��������B\n");
                printf("�@�����i����I�ъԈႦ�Ă��܂����ꍇ�́A���ʂ�0����͂��Ă��������B\n");
                switch(y)
                {
                    case 1:
                        printf("\n���i���F����啟�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"����啟");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 2:
                        printf("\n���i���F�͂Ԃ��������@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"�͂Ԃ�������");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 3:
                        printf("\n���i���F�e�B���~�X�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+8*z;
                        strcpy(set[a].sc,"�e�B���~�X");
                        set[a].sn=z;
                        set[a].sp=8;
                        a++;
                        break;
                    case 4:
                        printf("\n���i���F�Z�~�t���b�h�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"�Z�~�t���b�h");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 5:
                        printf("\n���i���F����ׂ��Ɓ@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+7*z;
                        strcpy(set[a].sc,"����ׂ���");
                        set[a].sn=z;
                        set[a].sp=7;
                        a++;
                        break;
                    case 6:
                        printf("\n���i���F�ǂ�₫�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+6*z;
                        strcpy(set[a].sc,"�ǂ�₫");
                        set[a].sn=z;
                        set[a].sp=6;
                        a++;
                        break;
                    case 7:
                        printf("\n���i���F�W�F���[�g�@���ʁF�@");
                        scanf("%d",&z);
                        amount=amount+5*z;
                        strcpy(set[a].sc,"�W�F���[�g");
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
