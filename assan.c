#include <stdio.h>
int main (void)
{
int reponse;
int password=123
int cpt;
int cpt=2;
printf("veuillez saisir un code secret");
scanf("%d",reponse);
if(reponse=password)
{
    printf("code secret correct");
}
{
while ((reponse==password)&&(cpt!=0))
    printf("code secret incorrect veuillez reessayer");
    scanf("%d",reponse);
    cpt=cpt-1;
    if(reponse==password)
    {
        printf("code secret correct";)
    }else
    {
        printf("code secret incorrect il vous reste %d tentative",cpt);
        scanf("%d",reponse);
        cpt=0;
    }

}  

printf("FIN TENTATIVE");
}