#ifndef __JSE_CONSTANT 
#define __JSE_CONSTANT 

/**Master jadual sholat setahun
	setiap row berisi jadual sehari, relatif terhadap hari sebelumnya
	setiap waktu sholat terdiri 2 bit, 11 berarti -1
	Urutan: [S][D][A][M][I]
*/
unsigned int jadualSetahun[31*12] PROGMEM =
{	0b0000000000,	//	0            		            
  	0b0000000000,  //  ;1 Januari.DB ;1  
	0b0000010101,  //  ;2  
	0b0101000000,  //  ;3  
	0b0100000100,  //  ;4  
	0b0001010001,  //  ;5  
	0b0100000000,  //  ;6  
	0b0001000100,  //  ;7  
	0b0100010001,  //  ;8  
	0b0101000000,  //  ;9  
	0b0000000100,  //  ;10 
	0b0100000000,  //  ;11 
	0b0001010001,  //  ;12 
	0b0100000100,  //  ;13 
	0b0000000000,  //  ;14 
	0b0101000000,  //  ;15 
	0b0100000000,  //  ;16 
	0b0001000100,  //  ;17 
	0b0100010000,  //  ;18 
	0b0000000000,  //  ;19 
	0b0100000001,  //  ;20 
	0b0001000000,  //  ;21 
	0b0100000100,  //  ;22 
	0b0000000000,  //  ;23 
	0b0101000000,  //  ;24 
	0b0000000000,  //  ;25 
	0b0100110000,  //  ;26 
	0b0000000000,  //  ;27 
	0b0100000011,  //  ;28 
	0b0001000000,  //  ;29 
	0b0100000000,  //  ;30 
	0b0000000000,  //  ;31 
	0b0100110000, //   ;32 1 //february						
	0b0000000000, //   ;33 2  
	0b0000000000, //   ;34 3  
	0b0100000000, //   ;35 4  
	0b0001110011, //   ;36 5  
	0b0100000000, //   ;37 6  
	0b0000000000, //   ;38 7  
	0b0000110000, //   ;39 8  
	0b0100000011, //   ;40 9  
	0b0000111100, //   ;41 10 
	0b0000000000, //   ;42 11 
	0b0000110000, //   ;43 12 
	0b0100000011, //   ;44 13 
	0b0000110000, //   ;45 14 
	0b0000110000, //   ;46 15 
	0b0000001111, //   ;47 16 
	0b0100110000, //   ;48 17 
	0b0000110000, //   ;49 18 
	0b0011000011, //   ;50 19 
	0b0000111100, //   ;51 20 
	0b0000110000, //   ;52 21 
	0b0100000011, //   ;53 22 
	0b0000111100, //   ;54 23 
	0b0000110011, //   ;55 24 
	0b0000110000, //   ;56 25 
	0b0000111100, //   ;57 26 
	0b0011110011, //   ;58 27 
	0b0000110000, //   ;59 28 
	0b0000111111, //   ;60 29 
    0b0000000000, //       30      
    0b0000000000, //         31 
	0b0000110000, //   ;61 1    //Maret
	0b0000110011, //   ;62 2 
	0b0011111100, //   ;63 3 
	0b0000110011, //   ;64 4 
	0b0000001100, //   ;65 5 
	0b0000010000, //   ;66 6 
	0b0011000011, //   ;67 7 
	0b0000011100, //   ;68 8 
	0b0000000011, //   ;69 9 
	0b0000001100, //   ;70 10
	0b0011010011, //   ;71 11
	0b0000000000, //   ;72 12
	0b0000001111, //   ;73 13
	0b0000010000, //   ;74 14
	0b0011001111, //   ;75 15
	0b0000000000, //   ;76 16
	0b0000011111, //   ;77 17
	0b0000000000, //   ;78 18
	0b0011001111, //   ;79 19
	0b1100000000, //   ;80 20
	0b0000001111, //   ;81 21
	0b0011000000, //   ;82 22
	0b0000011111, //   ;83 23
	0b0000000000, //   ;84 24
	0b0011001100, //   ;85 25
	0b0000000011, //   ;86 26
	0b1100000000, //   ;87 27
	0b0000001111, //   ;88 28
	0b0011000000, //   ;89 29
	0b0000001111, //   ;90 30
	0b0000000000, //   ;91 31
	0b0011001111, //  ;92  1 	//April
	0b0000010000, //  ;93  2 
	0b1100001100, //  ;94  3 
	0b0011000011, //  ;95  4 
	0b0000001100, //  ;96  5 
	0b0000000011, //  ;97  6 
	0b0000000000, //  ;98  7 
	0b1111001100, //  ;99  8 
	0b0000000011, //  ;100 9 
	0b0000001100, //  ;101 10
	0b0011000000, //  ;102 11
	0b0000111111, //  ;103 12
	0b0000000000, //  ;104 13
	0b1100000000, //  ;105 14
	0b0011001111, //  ;106 15
	0b0000000000, //  ;107 16
	0b0000001100, //  ;108 17
	0b0000000011, //  ;109 18
	0b0000000000, //  ;110 19
	0b1111001100, //  ;111 20
	0b0000000000, //  ;112 21
	0b0000000011, //  ;113 22
	0b0000001100, //  ;114 23
	0b0000000000, //  ;115 24
	0b0011000000, //  ;116 25
	0b0000001111, //  ;117 26
	0b0000000000, //  ;118 27
	0b1100000000, //  ;119 28
	0b0000000000, //  ;120 29
	0b0000001100, //  ;121 30   
    0b0000000000, //       31   
	0b0000000000, //   ;122  1 	MEI   
	0b0011000011, //   ;123  2 
	0b0000000000, //   ;124  3 
	0b0000001100, //   ;125  4 
	0b0000000000, //   ;126  5 
	0b0000000000, //   ;127  6 
	0b0000000000, //   ;128  7 
	0b0000000000, //   ;129  8 
	0b0000000000, //   ;130  9 
	0b0000001100, //   ;131  10
	0b0000000000, //   ;132  11
	0b0000000000, //   ;133  12
	0b0000000000, //   ;134  13
	0b0000000000, //   ;135  14
	0b0000000000, //   ;136  15
	0b0000000000, //   ;137  16
	0b0000000000, //   ;138  17
	0b0000000000, //   ;139  18
	0b0000000000, //   ;140  19
	0b0000000000, //   ;141  20
	0b0000000000, //   ;142  21
	0b0000000000, //   ;143  22
	0b0000000000, //   ;144  23
	0b0000000000, //   ;145  24
	0b0000010000, //   ;146  25
	0b0001000001, //   ;147  26
	0b0000000000, //   ;148  27
	0b0000000000, //   ;149  28
	0b0100000000, //   ;150  29
	0b0000000000, //   ;151  30
	0b0000000000, //   ;152  31
	0b0000000000, //   ;153  1 	//Juni
	0b0001010001, //   ;154  2 
	0b0000000000, //   ;155  3 
	0b0000000000, //   ;156  4 
	0b0100000100, //   ;157  5 
	0b0000000000, //   ;158  6 
	0b0000000000, //   ;159  7 
	0b0001010001, //   ;160  8 
	0b0000000000, //   ;161  9 
	0b0000000000, //   ;162  10
	0b0100000000, //   ;163  11
	0b0000000101, //   ;164  12
	0b0001010000, //   ;165  13
	0b0000000000, //   ;166  14
	0b0000000000, //   ;167  15
	0b0100000000, //   ;168  16
	0b0000010101, //   ;169  17
	0b0001000000, //   ;170  18
	0b0000000000, //   ;171  19
	0b0100000000, //   ;172  20
	0b0000000000, //   ;173  21
	0b0001010101, //   ;174  22
	0b0000000000, //   ;175  23
	0b0000000000, //   ;176  24
	0b0100000000, //   ;177  25
	0b0000010101, //   ;178  26
	0b0001000000, //   ;179  27
	0b0000000000, //   ;180  28
	0b0000000000, //   ;181  29
	0b0100000100, //   ;182  30
    0b0000000000, //         31
	0b0000010000, //   ;183  1       //Juli
	0b0001000001, //   ;184  2 
	0b0000000000, //   ;185  3 
	0b0000000000, //   ;186  4 
	0b0100000100, //   ;187  5 
	0b0000010000, //   ;188  6 
	0b0000000000, //   ;189  7 
	0b0001000001, //   ;190  8 
	0b0000000000, //   ;191  9 
	0b0000000100, //   ;192  10
	0b0100000000, //   ;193  11
	0b0000010000, //   ;194  12
	0b0000000000, //   ;195  13
	0b0000000000, //   ;196  14
	0b0000000100, //   ;197  15
	0b0001000000, //   ;198  16
	0b0000000001, //   ;199  17
	0b0000000000, //   ;200  18
	0b0000000000, //   ;201  19
	0b0000000000, //   ;202  20
	0b0100000000, //   ;203  21
	0b0000000100, //   ;204  22
	0b0000000000, //   ;205  23
	0b0000000000, //   ;206  24
	0b0000000000, //   ;207  25
	0b0000000000, //   ;208  26
	0b0000000000, //   ;209  27
	0b0000000000, //   ;210  28
	0b0000000000, //   ;211  29
	0b0000000000, //   ;212  30
	0b1100000000, //   ;213  31
	0b0000000000, //   ;214  1       //Agustus
	0b0000000000, //   ;215  2 
	0b0000000011, //   ;216  3 
	0b0011000000, //   ;217  4 
	0b0000000000, //   ;218  5 
	0b0000110000, //   ;219  6 
	0b0000000000, //   ;220  7 
	0b0000000000, //   ;221  8 
	0b1100000000, //   ;222  9 
	0b0000000000, //   ;223  10
	0b0000110000, //   ;224  11
	0b0011000011, //   ;225  12
	0b0000000000, //   ;226  13
	0b1100110000, //   ;227  14
	0b0000000000, //   ;228  15
	0b0000000000, //   ;229  16
	0b0011110000, //   ;230  17
	0b1100000011, //   ;231  18
	0b0000000000, //   ;232  19
	0b0000110000, //   ;233  20
	0b0011000000, //   ;234  21
	0b1100000000, //   ;235  22
	0b0000111100, //   ;236  23
	0b0000000011, //   ;237  24
	0b1111110000, //   ;238  25
	0b0000000000, //   ;239  26
	0b0000110000, //   ;240  27
	0b1100000000, //   ;241  28
	0b0011110011, //   ;242  29
	0b1100001100, //   ;243  30
	0b0000110000, //   ;244  31
	0b0011000000, //   ;245  1 	//September
	0b1100110011, //   ;246  2 
	0b0000110000, //   ;247  3 
	0b1111000000, //   ;248  4 
	0b0000111100, //   ;249  5 
	0b1100110000, //   ;250  6 
	0b0011000011, //   ;251  7 
	0b0000110000, //   ;252  8 
	0b1100110000, //   ;253  9 
	0b0011001100, //   ;254  10
	0b1100110011, //   ;255  11
	0b0000110000, //   ;256  12
	0b1111000000, //   ;257  13
	0b0000110000, //   ;258  14
	0b1100110000, //   ;259  15
	0b0011111111, //   ;260  16
	0b1100000000, //   ;261  17
	0b0011110000, //   ;262  18
	0b1100110000, //   ;263  19
	0b0000110000, //   ;264  20
	0b1111111111, //   ;265  21
	0b1100000000, //   ;266  22
	0b0000110000, //   ;267  23
	0b1111110000, //   ;268  24
	0b0000110000, //   ;269  25
	0b1100110000, //   ;270  26
	0b0011111100, //   ;271  27
	0b1100110011, //   ;272  28
	0b0000110000, //   ;273  29
	0b1111110000, //   ;274  30
    0b0000000000, //         31
	0b0000000000, //   ;275  1   //Oktober
	0b1100110000, //   ;276  2 
	0b0011111100, //   ;277  3 
	0b1100110000, //   ;278  4 
	0b0000110000, //   ;279  5 
	0b1100110000, //   ;280  6 
	0b0011110000, //   ;281  7 
	0b1100110000, //   ;282  8 
	0b0000000000, //   ;283  9 
	0b1111010000, //   ;284  10
	0b1100010011, //   ;285  11
	0b0000000000, //   ;286  12
	0b0000011101, //   ;287  13
	0b1111000000, //   ;288  14
	0b0000010000, //   ;289  15
	0b1100000000, //   ;290  16
	0b0000010000, //   ;291  17
	0b1100000000, //   ;292  18
	0b0011010000, //   ;293  19
	0b1100000000, //   ;294  20
	0b0000000000, //   ;295  21
	0b1100010000, //   ;296  22
	0b0000000000, //   ;297  23
	0b0000010000, //   ;298  24
	0b1100000001, //   ;299  25
	0b0011010000, //   ;300  26
	0b1100000100, //   ;301  27
	0b0000010000, //   ;302  28
	0b0000000000, //   ;303  29
	0b1100010001, //   ;304  30
	0b0000000000, //   ;305  31
	0b0000010000, //   ;306  1   //November
	0b0000000000, //   ;307  2 
	0b1100010001, //   ;308  3 
	0b0000000100, //   ;309  4 
	0b0000000000, //   ;310  5 
	0b1100010001, //   ;311  6 
	0b0000000000, //   ;312  7 
	0b0000010000, //   ;313  8 
	0b0000000101, //   ;314  9 
	0b0001010000, //   ;315  10
	0b0000000000, //   ;316  11
	0b1100010001, //   ;317  12
	0b0000000100, //   ;318  13
	0b0000010001, //   ;319  14
	0b0000000000, //   ;320  15
	0b0000010100, //   ;321  16
	0b0001000001, //   ;322  17
	0b0000010000, //   ;323  18
	0b0000000101, //   ;324  19
	0b0000010000, //   ;325  20
	0b0001000001, //   ;326  21
	0b0000010100, //   ;327  22
	0b0000000001, //   ;328  23
	0b0000010100, //   ;329  24
	0b0001000001, //   ;330  25
	0b0000010000, //   ;331  26
	0b0000010101, //   ;332  27
	0b0001000000, //   ;333  28
	0b0100010101, //   ;334  29
	0b0000000001, //   ;335  30
    0b0000000000, //         31
	0b0001010100, //   ;336  1    //desember
	0b0000000001, //   ;337  2 
	0b0001010100, //   ;338  3 
	0b0100000001, //   ;339  4 
	0b0000010100, //   ;340  5 
	0b0001000001, //   ;341  6 
	0b0100010100, //   ;342  7 
	0b0001010001, //   ;343  8 
	0b0000000101, //   ;344  9 
	0b0001010000, //   ;345  10
	0b0100000101, //   ;346  11
	0b0000010000, //   ;347  12
	0b0101000101, //   ;348  13
	0b0000010000, //   ;349  14
	0b0001000101, //   ;350  15
	0b0100010000, //   ;351  16
	0b0001000101, //   ;352  17
	0b0100010000, //   ;353  18
	0b0001000101, //   ;354  19
	0b0100010000, //   ;355  20
	0b0001010101, //   ;356  21
	0b0100000000, //   ;357  22
	0b0001000101, //   ;358  23
	0b0100010000, //   ;359  24
	0b0001000101, //   ;360  25
	0b0100010000, //   ;361  26
	0b0001000001, //   ;362  27
	0b0100010100, //   ;363  28
	0b0101000001, //   ;364  29
	0b0000010100, //   ;365  30
	0b0101000000 //   ;366  31
};
#endif