#include <stdio.h>

int main ()
{
    int task;
    int c;
    long double balance;
    float dtol;
    float etol;
    char t;
    char currency;
    float amount;
    int x;


    scanf("%d", &task);
    scanf("%Lf %f %f",&balance,&etol,&dtol);
    scanf("%d",&c);

    if(task == 1) {
            for (x=0;x<c;x++) {
                    scanf(" %c %c %f",&t,&currency,&amount);
                    if (t=='W' && currency == 'E') {
                           balance -= etol*amount;
                    }
                    else if (t=='W' && currency == 'D') {
                           balance -= dtol*amount;
                    }
                    else if (t=='D' && currency == 'E') {
                           balance += etol*amount;
                    }
                    else if (t=='D' && currency == 'D') {
                           balance += dtol*amount;
                    }
            }
        printf("Final balance: %.2Lf TL.",balance);
        }
    else if (task == 2) {
        char exam_type;
        char subtype;
        int cor_1,cor_2,cor_3,cor_4;
        float penalty,val_1,val_2,val_3,val_4,score1,score2,score3,score4,res;
        scanf(" %c",&exam_type);
        if (exam_type=='T') {
            scanf("%f",&penalty);
            scanf("%d %f %d %f %d %f %d %f",&cor_1,&val_1,&cor_2,&val_2,&cor_3,&val_3,&cor_4,&val_4);
            score1 = (cor_1*val_1)-((40-cor_1)*val_1*penalty);
            score2 = (cor_2*val_2)-((40-cor_2)*val_2*penalty);
            score3 = (cor_3*val_3)-((40-cor_3)*val_3*penalty);
            score4 = (cor_4*val_4)-((40-cor_4)*val_4*penalty);
            res = score1+score2+score3+score4;
            printf("T result: %.2f points.",res);
        }
        else if (exam_type=='A') {
            scanf(" %c",&subtype);
            if (subtype=='C') {
                scanf("%f",&penalty);
                scanf("%d %f %d %f",&cor_1,&val_1,&cor_2,&val_2);
                score1 = (cor_1*val_1)-((30-cor_1)*val_1*penalty);
                score2 = (cor_2*val_2)-((30-cor_2)*val_2*penalty);
                res = score1 + score2;
                printf("A-C result: %.2f points.",res);
            }
            else if (subtype=='E') {
                scanf("%f",&penalty);
                scanf("%d %f %d %f %d %f %d %f",&cor_1,&val_1,&cor_2,&val_2,&cor_3,&val_3,&cor_4,&val_4);
                score1 = (cor_1*val_1)-((30-cor_1)*val_1*penalty);
                score2 = (cor_2*val_2)-((30-cor_2)*val_2*penalty);
                score3 = (cor_3*val_3)-((30-cor_3)*val_3*penalty);
                score4 = (cor_4*val_4)-((30-cor_4)*val_4*penalty);
                res = score1+score2+score3+score4;
                printf("A-E result: %.2f points.",res);
            }
            else if (subtype=='O') {
                scanf("%f",&penalty);
                scanf("%d %f %d %f",&cor_1,&val_1,&cor_2,&val_2);
                score1 = (cor_1*val_1)-((30-cor_1)*val_1*penalty);
                score2 = (cor_2*val_2)-((30-cor_2)*val_2*penalty);
                res = score1 + score2;
                printf("A-O result: %.2f points.",res);
            }

            }
        }    

    
    

    return 0;
}
