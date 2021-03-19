uint32_t abdcPortVectors8_2pole[] = {
	0,4,0,2,       //0 === 0 4 0 4
	0,1,0,1,       //1 === 0 8 0 8
	0,5,0,3,       //2 === 0 12 0 12
	0,2,32,0,       //3 === 0 16 0 16
	0,6,32,2,       //4 === 0 20 0 20
	0,3,32,1,       //5 === 0 24 0 24
	0,7,32,3,       //6 === 0 28 0 28
	0,524289,4,1,       //7 === 4 8 4 8
	0,524293,4,3,       //8 === 4 12 4 12
	0,524290,36,0,       //9 === 4 16 4 16
	0,524294,36,2,       //10 === 4 20 4 20
	0,524291,36,1,       //11 === 4 24 4 24
	0,524295,36,3,       //12 === 4 28 4 28
	16,262149,0,3,       //13 === 8 12 8 12
	16,262146,32,0,       //14 === 8 16 8 16
	16,262150,32,2,       //15 === 8 20 8 20
	16,262147,32,1,       //16 === 8 24 8 24
	16,262151,32,3,       //17 === 8 28 8 28
	16,786434,36,0,       //18 === 12 16 12 16
	16,786438,36,2,       //19 === 12 20 12 20
	16,786435,36,1,       //20 === 12 24 12 24
	16,786439,36,3,       //21 === 12 28 12 28
	32,6,160,2,       //22 === 16 20 16 20
	32,3,160,1,       //23 === 16 24 16 24
	32,7,160,3,       //24 === 16 28 16 28
	32,524291,164,1,       //25 === 20 24 20 24
	32,524295,164,3,       //26 === 20 28 20 28
	48,262151,160,3       //27 === 24 28 24 28
};

uint32_t abdcPortVectors16_2pole[] = {
	0,8,2,0,       //0 === 0 2 0 2
	0,4,0,2,       //1 === 0 4 0 4
	0,12,2,2,       //2 === 0 6 0 6
	0,1,0,1,       //3 === 0 8 0 8
	0,9,2,1,       //4 === 0 10 0 10
	0,5,0,3,       //5 === 0 12 0 12
	0,13,2,3,       //6 === 0 14 0 14
	0,2,32,0,       //7 === 0 16 0 16
	0,10,34,0,       //8 === 0 18 0 18
	0,6,32,2,       //9 === 0 20 0 20
	0,14,34,2,       //10 === 0 22 0 22
	0,3,32,1,       //11 === 0 24 0 24
	0,11,34,1,       //12 === 0 26 0 26
	0,7,32,3,       //13 === 0 28 0 28
	0,15,34,3,       //14 === 0 30 0 30
	8192,4,8,2,       //15 === 2 4 2 4
	8192,12,10,2,       //16 === 2 6 2 6
	8192,1,8,1,       //17 === 2 8 2 8
	8192,9,10,1,       //18 === 2 10 2 10
	8192,5,8,3,       //19 === 2 12 2 12
	8192,13,10,3,       //20 === 2 14 2 14
	8192,2,40,0,       //21 === 2 16 2 16
	8192,10,42,0,       //22 === 2 18 2 18
	8192,6,40,2,       //23 === 2 20 2 20
	8192,14,42,2,       //24 === 2 22 2 22
	8192,3,40,1,       //25 === 2 24 2 24
	8192,11,42,1,       //26 === 2 26 2 26
	8192,7,40,3,       //27 === 2 28 2 28
	8192,15,42,3,       //28 === 2 30 2 30
	0,524300,6,2,       //29 === 4 6 4 6
	0,524289,4,1,       //30 === 4 8 4 8
	0,524297,6,1,       //31 === 4 10 4 10
	0,524293,4,3,       //32 === 4 12 4 12
	0,524301,6,3,       //33 === 4 14 4 14
	0,524290,36,0,       //34 === 4 16 4 16
	0,524298,38,0,       //35 === 4 18 4 18
	0,524294,36,2,       //36 === 4 20 4 20
	0,524302,38,2,       //37 === 4 22 4 22
	0,524291,36,1,       //38 === 4 24 4 24
	0,524299,38,1,       //39 === 4 26 4 26
	0,524295,36,3,       //40 === 4 28 4 28
	0,524303,38,3,       //41 === 4 30 4 30
	8192,524289,12,1,       //42 === 6 8 6 8
	8192,524297,14,1,       //43 === 6 10 6 10
	8192,524293,12,3,       //44 === 6 12 6 12
	8192,524301,14,3,       //45 === 6 14 6 14
	8192,524290,44,0,       //46 === 6 16 6 16
	8192,524298,46,0,       //47 === 6 18 6 18
	8192,524294,44,2,       //48 === 6 20 6 20
	8192,524302,46,2,       //49 === 6 22 6 22
	8192,524291,44,1,       //50 === 6 24 6 24
	8192,524299,46,1,       //51 === 6 26 6 26
	8192,524295,44,3,       //52 === 6 28 6 28
	8192,524303,46,3,       //53 === 6 30 6 30
	16,262153,2,1,       //54 === 8 10 8 10
	16,262149,0,3,       //55 === 8 12 8 12
	16,262157,2,3,       //56 === 8 14 8 14
	16,262146,32,0,       //57 === 8 16 8 16
	16,262154,34,0,       //58 === 8 18 8 18
	16,262150,32,2,       //59 === 8 20 8 20
	16,262158,34,2,       //60 === 8 22 8 22
	16,262147,32,1,       //61 === 8 24 8 24
	16,262155,34,1,       //62 === 8 26 8 26
	16,262151,32,3,       //63 === 8 28 8 28
	16,262159,34,3,       //64 === 8 30 8 30
	8208,262149,8,3,       //65 === 10 12 10 12
	8208,262157,10,3,       //66 === 10 14 10 14
	8208,262146,40,0,       //67 === 10 16 10 16
	8208,262154,42,0,       //68 === 10 18 10 18
	8208,262150,40,2,       //69 === 10 20 10 20
	8208,262158,42,2,       //70 === 10 22 10 22
	8208,262147,40,1,       //71 === 10 24 10 24
	8208,262155,42,1,       //72 === 10 26 10 26
	8208,262151,40,3,       //73 === 10 28 10 28
	8208,262159,42,3,       //74 === 10 30 10 30
	16,786445,6,3,       //75 === 12 14 12 14
	16,786434,36,0,       //76 === 12 16 12 16
	16,786442,38,0,       //77 === 12 18 12 18
	16,786438,36,2,       //78 === 12 20 12 20
	16,786446,38,2,       //79 === 12 22 12 22
	16,786435,36,1,       //80 === 12 24 12 24
	16,786443,38,1,       //81 === 12 26 12 26
	16,786439,36,3,       //82 === 12 28 12 28
	16,786447,38,3,       //83 === 12 30 12 30
	8208,786434,44,0,       //84 === 14 16 14 16
	8208,786442,46,0,       //85 === 14 18 14 18
	8208,786438,44,2,       //86 === 14 20 14 20
	8208,786446,46,2,       //87 === 14 22 14 22
	8208,786435,44,1,       //88 === 14 24 14 24
	8208,786443,46,1,       //89 === 14 26 14 26
	8208,786439,44,3,       //90 === 14 28 14 28
	8208,786447,46,3,       //91 === 14 30 14 30
	32,10,162,0,       //92 === 16 18 16 18
	32,6,160,2,       //93 === 16 20 16 20
	32,14,162,2,       //94 === 16 22 16 22
	32,3,160,1,       //95 === 16 24 16 24
	32,11,162,1,       //96 === 16 26 16 26
	32,7,160,3,       //97 === 16 28 16 28
	32,15,162,3,       //98 === 16 30 16 30
	8224,6,168,2,       //99 === 18 20 18 20
	8224,14,170,2,       //100 === 18 22 18 22
	8224,3,168,1,       //101 === 18 24 18 24
	8224,11,170,1,       //102 === 18 26 18 26
	8224,7,168,3,       //103 === 18 28 18 28
	8224,15,170,3,       //104 === 18 30 18 30
	32,524302,166,2,       //105 === 20 22 20 22
	32,524291,164,1,       //106 === 20 24 20 24
	32,524299,166,1,       //107 === 20 26 20 26
	32,524295,164,3,       //108 === 20 28 20 28
	32,524303,166,3,       //109 === 20 30 20 30
	8224,524291,172,1,       //110 === 22 24 22 24
	8224,524299,174,1,       //111 === 22 26 22 26
	8224,524295,172,3,       //112 === 22 28 22 28
	8224,524303,174,3,       //113 === 22 30 22 30
	48,262155,162,1,       //114 === 24 26 24 26
	48,262151,160,3,       //115 === 24 28 24 28
	48,262159,162,3,       //116 === 24 30 24 30
	8240,262151,168,3,       //117 === 26 28 26 28
	8240,262159,170,3,       //118 === 26 30 26 30
	48,786447,166,3       //119 === 28 30 28 30
};


uint32_t abdcPortVectors32_2pole[] = {
	0,0,65,0,       //0 === 0 1 0 1
	0,8,2,0,       //1 === 0 2 0 2
	0,8,67,0,       //2 === 0 3 0 3
	0,4,0,2,       //3 === 0 4 0 4
	0,4,65,2,       //4 === 0 5 0 5
	0,12,2,2,       //5 === 0 6 0 6
	0,12,67,2,       //6 === 0 7 0 7
	0,1,0,1,       //7 === 0 8 0 8
	0,1,65,1,       //8 === 0 9 0 9
	0,9,2,1,       //9 === 0 10 0 10
	0,9,67,1,       //10 === 0 11 0 11
	0,5,0,3,       //11 === 0 12 0 12
	0,5,65,3,       //12 === 0 13 0 13
	0,13,2,3,       //13 === 0 14 0 14
	0,13,67,3,       //14 === 0 15 0 15
	0,2,32,0,       //15 === 0 16 0 16
	0,2,97,0,       //16 === 0 17 0 17
	0,10,34,0,       //17 === 0 18 0 18
	0,10,99,0,       //18 === 0 19 0 19
	0,6,32,2,       //19 === 0 20 0 20
	0,6,97,2,       //20 === 0 21 0 21
	0,14,34,2,       //21 === 0 22 0 22
	0,14,99,2,       //22 === 0 23 0 23
	0,3,32,1,       //23 === 0 24 0 24
	0,3,97,1,       //24 === 0 25 0 25
	0,11,34,1,       //25 === 0 26 0 26
	0,11,99,1,       //26 === 0 27 0 27
	0,7,32,3,       //27 === 0 28 0 28
	0,7,97,3,       //28 === 0 29 0 29
	0,15,34,3,       //29 === 0 30 0 30
	0,15,99,3,       //30 === 0 31 0 31
	4096,8,18,0,       //31 === 1 2 1 2
	4096,8,83,0,       //32 === 1 3 1 3
	4096,4,16,2,       //33 === 1 4 1 4
	4096,4,81,2,       //34 === 1 5 1 5
	4096,12,18,2,       //35 === 1 6 1 6
	4096,12,83,2,       //36 === 1 7 1 7
	4096,1,16,1,       //37 === 1 8 1 8
	4096,1,81,1,       //38 === 1 9 1 9
	4096,9,18,1,       //39 === 1 10 1 10
	4096,9,83,1,       //40 === 1 11 1 11
	4096,5,16,3,       //41 === 1 12 1 12
	4096,5,81,3,       //42 === 1 13 1 13
	4096,13,18,3,       //43 === 1 14 1 14
	4096,13,83,3,       //44 === 1 15 1 15
	4096,2,48,0,       //45 === 1 16 1 16
	4096,2,113,0,       //46 === 1 17 1 17
	4096,10,50,0,       //47 === 1 18 1 18
	4096,10,115,0,       //48 === 1 19 1 19
	4096,6,48,2,       //49 === 1 20 1 20
	4096,6,113,2,       //50 === 1 21 1 21
	4096,14,50,2,       //51 === 1 22 1 22
	4096,14,115,2,       //52 === 1 23 1 23
	4096,3,48,1,       //53 === 1 24 1 24
	4096,3,113,1,       //54 === 1 25 1 25
	4096,11,50,1,       //55 === 1 26 1 26
	4096,11,115,1,       //56 === 1 27 1 27
	4096,7,48,3,       //57 === 1 28 1 28
	4096,7,113,3,       //58 === 1 29 1 29
	4096,15,50,3,       //59 === 1 30 1 30
	4096,15,115,3,       //60 === 1 31 1 31
	8192,8,75,0,       //61 === 2 3 2 3
	8192,4,8,2,       //62 === 2 4 2 4
	8192,4,73,2,       //63 === 2 5 2 5
	8192,12,10,2,       //64 === 2 6 2 6
	8192,12,75,2,       //65 === 2 7 2 7
	8192,1,8,1,       //66 === 2 8 2 8
	8192,1,73,1,       //67 === 2 9 2 9
	8192,9,10,1,       //68 === 2 10 2 10
	8192,9,75,1,       //69 === 2 11 2 11
	8192,5,8,3,       //70 === 2 12 2 12
	8192,5,73,3,       //71 === 2 13 2 13
	8192,13,10,3,       //72 === 2 14 2 14
	8192,13,75,3,       //73 === 2 15 2 15
	8192,2,40,0,       //74 === 2 16 2 16
	8192,2,105,0,       //75 === 2 17 2 17
	8192,10,42,0,       //76 === 2 18 2 18
	8192,10,107,0,       //77 === 2 19 2 19
	8192,6,40,2,       //78 === 2 20 2 20
	8192,6,105,2,       //79 === 2 21 2 21
	8192,14,42,2,       //80 === 2 22 2 22
	8192,14,107,2,       //81 === 2 23 2 23
	8192,3,40,1,       //82 === 2 24 2 24
	8192,3,105,1,       //83 === 2 25 2 25
	8192,11,42,1,       //84 === 2 26 2 26
	8192,11,107,1,       //85 === 2 27 2 27
	8192,7,40,3,       //86 === 2 28 2 28
	8192,7,105,3,       //87 === 2 29 2 29
	8192,15,42,3,       //88 === 2 30 2 30
	8192,15,107,3,       //89 === 2 31 2 31
	12288,4,24,2,       //90 === 3 4 3 4
	12288,4,89,2,       //91 === 3 5 3 5
	12288,12,26,2,       //92 === 3 6 3 6
	12288,12,91,2,       //93 === 3 7 3 7
	12288,1,24,1,       //94 === 3 8 3 8
	12288,1,89,1,       //95 === 3 9 3 9
	12288,9,26,1,       //96 === 3 10 3 10
	12288,9,91,1,       //97 === 3 11 3 11
	12288,5,24,3,       //98 === 3 12 3 12
	12288,5,89,3,       //99 === 3 13 3 13
	12288,13,26,3,       //100 === 3 14 3 14
	12288,13,91,3,       //101 === 3 15 3 15
	12288,2,56,0,       //102 === 3 16 3 16
	12288,2,121,0,       //103 === 3 17 3 17
	12288,10,58,0,       //104 === 3 18 3 18
	12288,10,123,0,       //105 === 3 19 3 19
	12288,6,56,2,       //106 === 3 20 3 20
	12288,6,121,2,       //107 === 3 21 3 21
	12288,14,58,2,       //108 === 3 22 3 22
	12288,14,123,2,       //109 === 3 23 3 23
	12288,3,56,1,       //110 === 3 24 3 24
	12288,3,121,1,       //111 === 3 25 3 25
	12288,11,58,1,       //112 === 3 26 3 26
	12288,11,123,1,       //113 === 3 27 3 27
	12288,7,56,3,       //114 === 3 28 3 28
	12288,7,121,3,       //115 === 3 29 3 29
	12288,15,58,3,       //116 === 3 30 3 30
	12288,15,123,3,       //117 === 3 31 3 31
	0,524292,69,2,       //118 === 4 5 4 5
	0,524300,6,2,       //119 === 4 6 4 6
	0,524300,71,2,       //120 === 4 7 4 7
	0,524289,4,1,       //121 === 4 8 4 8
	0,524289,69,1,       //122 === 4 9 4 9
	0,524297,6,1,       //123 === 4 10 4 10
	0,524297,71,1,       //124 === 4 11 4 11
	0,524293,4,3,       //125 === 4 12 4 12
	0,524293,69,3,       //126 === 4 13 4 13
	0,524301,6,3,       //127 === 4 14 4 14
	0,524301,71,3,       //128 === 4 15 4 15
	0,524290,36,0,       //129 === 4 16 4 16
	0,524290,101,0,       //130 === 4 17 4 17
	0,524298,38,0,       //131 === 4 18 4 18
	0,524298,103,0,       //132 === 4 19 4 19
	0,524294,36,2,       //133 === 4 20 4 20
	0,524294,101,2,       //134 === 4 21 4 21
	0,524302,38,2,       //135 === 4 22 4 22
	0,524302,103,2,       //136 === 4 23 4 23
	0,524291,36,1,       //137 === 4 24 4 24
	0,524291,101,1,       //138 === 4 25 4 25
	0,524299,38,1,       //139 === 4 26 4 26
	0,524299,103,1,       //140 === 4 27 4 27
	0,524295,36,3,       //141 === 4 28 4 28
	0,524295,101,3,       //142 === 4 29 4 29
	0,524303,38,3,       //143 === 4 30 4 30
	0,524303,103,3,       //144 === 4 31 4 31
	4096,524300,22,2,       //145 === 5 6 5 6
	4096,524300,87,2,       //146 === 5 7 5 7
	4096,524289,20,1,       //147 === 5 8 5 8
	4096,524289,85,1,       //148 === 5 9 5 9
	4096,524297,22,1,       //149 === 5 10 5 10
	4096,524297,87,1,       //150 === 5 11 5 11
	4096,524293,20,3,       //151 === 5 12 5 12
	4096,524293,85,3,       //152 === 5 13 5 13
	4096,524301,22,3,       //153 === 5 14 5 14
	4096,524301,87,3,       //154 === 5 15 5 15
	4096,524290,52,0,       //155 === 5 16 5 16
	4096,524290,117,0,       //156 === 5 17 5 17
	4096,524298,54,0,       //157 === 5 18 5 18
	4096,524298,119,0,       //158 === 5 19 5 19
	4096,524294,52,2,       //159 === 5 20 5 20
	4096,524294,117,2,       //160 === 5 21 5 21
	4096,524302,54,2,       //161 === 5 22 5 22
	4096,524302,119,2,       //162 === 5 23 5 23
	4096,524291,52,1,       //163 === 5 24 5 24
	4096,524291,117,1,       //164 === 5 25 5 25
	4096,524299,54,1,       //165 === 5 26 5 26
	4096,524299,119,1,       //166 === 5 27 5 27
	4096,524295,52,3,       //167 === 5 28 5 28
	4096,524295,117,3,       //168 === 5 29 5 29
	4096,524303,54,3,       //169 === 5 30 5 30
	4096,524303,119,3,       //170 === 5 31 5 31
	8192,524300,79,2,       //171 === 6 7 6 7
	8192,524289,12,1,       //172 === 6 8 6 8
	8192,524289,77,1,       //173 === 6 9 6 9
	8192,524297,14,1,       //174 === 6 10 6 10
	8192,524297,79,1,       //175 === 6 11 6 11
	8192,524293,12,3,       //176 === 6 12 6 12
	8192,524293,77,3,       //177 === 6 13 6 13
	8192,524301,14,3,       //178 === 6 14 6 14
	8192,524301,79,3,       //179 === 6 15 6 15
	8192,524290,44,0,       //180 === 6 16 6 16
	8192,524290,109,0,       //181 === 6 17 6 17
	8192,524298,46,0,       //182 === 6 18 6 18
	8192,524298,111,0,       //183 === 6 19 6 19
	8192,524294,44,2,       //184 === 6 20 6 20
	8192,524294,109,2,       //185 === 6 21 6 21
	8192,524302,46,2,       //186 === 6 22 6 22
	8192,524302,111,2,       //187 === 6 23 6 23
	8192,524291,44,1,       //188 === 6 24 6 24
	8192,524291,109,1,       //189 === 6 25 6 25
	8192,524299,46,1,       //190 === 6 26 6 26
	8192,524299,111,1,       //191 === 6 27 6 27
	8192,524295,44,3,       //192 === 6 28 6 28
	8192,524295,109,3,       //193 === 6 29 6 29
	8192,524303,46,3,       //194 === 6 30 6 30
	8192,524303,111,3,       //195 === 6 31 6 31
	12288,524289,28,1,       //196 === 7 8 7 8
	12288,524289,93,1,       //197 === 7 9 7 9
	12288,524297,30,1,       //198 === 7 10 7 10
	12288,524297,95,1,       //199 === 7 11 7 11
	12288,524293,28,3,       //200 === 7 12 7 12
	12288,524293,93,3,       //201 === 7 13 7 13
	12288,524301,30,3,       //202 === 7 14 7 14
	12288,524301,95,3,       //203 === 7 15 7 15
	12288,524290,60,0,       //204 === 7 16 7 16
	12288,524290,125,0,       //205 === 7 17 7 17
	12288,524298,62,0,       //206 === 7 18 7 18
	12288,524298,127,0,       //207 === 7 19 7 19
	12288,524294,60,2,       //208 === 7 20 7 20
	12288,524294,125,2,       //209 === 7 21 7 21
	12288,524302,62,2,       //210 === 7 22 7 22
	12288,524302,127,2,       //211 === 7 23 7 23
	12288,524291,60,1,       //212 === 7 24 7 24
	12288,524291,125,1,       //213 === 7 25 7 25
	12288,524299,62,1,       //214 === 7 26 7 26
	12288,524299,127,1,       //215 === 7 27 7 27
	12288,524295,60,3,       //216 === 7 28 7 28
	12288,524295,125,3,       //217 === 7 29 7 29
	12288,524303,62,3,       //218 === 7 30 7 30
	12288,524303,127,3,       //219 === 7 31 7 31
	16,262145,65,1,       //220 === 8 9 8 9
	16,262153,2,1,       //221 === 8 10 8 10
	16,262153,67,1,       //222 === 8 11 8 11
	16,262149,0,3,       //223 === 8 12 8 12
	16,262149,65,3,       //224 === 8 13 8 13
	16,262157,2,3,       //225 === 8 14 8 14
	16,262157,67,3,       //226 === 8 15 8 15
	16,262146,32,0,       //227 === 8 16 8 16
	16,262146,97,0,       //228 === 8 17 8 17
	16,262154,34,0,       //229 === 8 18 8 18
	16,262154,99,0,       //230 === 8 19 8 19
	16,262150,32,2,       //231 === 8 20 8 20
	16,262150,97,2,       //232 === 8 21 8 21
	16,262158,34,2,       //233 === 8 22 8 22
	16,262158,99,2,       //234 === 8 23 8 23
	16,262147,32,1,       //235 === 8 24 8 24
	16,262147,97,1,       //236 === 8 25 8 25
	16,262155,34,1,       //237 === 8 26 8 26
	16,262155,99,1,       //238 === 8 27 8 27
	16,262151,32,3,       //239 === 8 28 8 28
	16,262151,97,3,       //240 === 8 29 8 29
	16,262159,34,3,       //241 === 8 30 8 30
	16,262159,99,3,       //242 === 8 31 8 31
	4112,262153,18,1,       //243 === 9 10 9 10
	4112,262153,83,1,       //244 === 9 11 9 11
	4112,262149,16,3,       //245 === 9 12 9 12
	4112,262149,81,3,       //246 === 9 13 9 13
	4112,262157,18,3,       //247 === 9 14 9 14
	4112,262157,83,3,       //248 === 9 15 9 15
	4112,262146,48,0,       //249 === 9 16 9 16
	4112,262146,113,0,       //250 === 9 17 9 17
	4112,262154,50,0,       //251 === 9 18 9 18
	4112,262154,115,0,       //252 === 9 19 9 19
	4112,262150,48,2,       //253 === 9 20 9 20
	4112,262150,113,2,       //254 === 9 21 9 21
	4112,262158,50,2,       //255 === 9 22 9 22
	4112,262158,115,2,       //256 === 9 23 9 23
	4112,262147,48,1,       //257 === 9 24 9 24
	4112,262147,113,1,       //258 === 9 25 9 25
	4112,262155,50,1,       //259 === 9 26 9 26
	4112,262155,115,1,       //260 === 9 27 9 27
	4112,262151,48,3,       //261 === 9 28 9 28
	4112,262151,113,3,       //262 === 9 29 9 29
	4112,262159,50,3,       //263 === 9 30 9 30
	4112,262159,115,3,       //264 === 9 31 9 31
	8208,262153,75,1,       //265 === 10 11 10 11
	8208,262149,8,3,       //266 === 10 12 10 12
	8208,262149,73,3,       //267 === 10 13 10 13
	8208,262157,10,3,       //268 === 10 14 10 14
	8208,262157,75,3,       //269 === 10 15 10 15
	8208,262146,40,0,       //270 === 10 16 10 16
	8208,262146,105,0,       //271 === 10 17 10 17
	8208,262154,42,0,       //272 === 10 18 10 18
	8208,262154,107,0,       //273 === 10 19 10 19
	8208,262150,40,2,       //274 === 10 20 10 20
	8208,262150,105,2,       //275 === 10 21 10 21
	8208,262158,42,2,       //276 === 10 22 10 22
	8208,262158,107,2,       //277 === 10 23 10 23
	8208,262147,40,1,       //278 === 10 24 10 24
	8208,262147,105,1,       //279 === 10 25 10 25
	8208,262155,42,1,       //280 === 10 26 10 26
	8208,262155,107,1,       //281 === 10 27 10 27
	8208,262151,40,3,       //282 === 10 28 10 28
	8208,262151,105,3,       //283 === 10 29 10 29
	8208,262159,42,3,       //284 === 10 30 10 30
	8208,262159,107,3,       //285 === 10 31 10 31
	12304,262149,24,3,       //286 === 11 12 11 12
	12304,262149,89,3,       //287 === 11 13 11 13
	12304,262157,26,3,       //288 === 11 14 11 14
	12304,262157,91,3,       //289 === 11 15 11 15
	12304,262146,56,0,       //290 === 11 16 11 16
	12304,262146,121,0,       //291 === 11 17 11 17
	12304,262154,58,0,       //292 === 11 18 11 18
	12304,262154,123,0,       //293 === 11 19 11 19
	12304,262150,56,2,       //294 === 11 20 11 20
	12304,262150,121,2,       //295 === 11 21 11 21
	12304,262158,58,2,       //296 === 11 22 11 22
	12304,262158,123,2,       //297 === 11 23 11 23
	12304,262147,56,1,       //298 === 11 24 11 24
	12304,262147,121,1,       //299 === 11 25 11 25
	12304,262155,58,1,       //300 === 11 26 11 26
	12304,262155,123,1,       //301 === 11 27 11 27
	12304,262151,56,3,       //302 === 11 28 11 28
	12304,262151,121,3,       //303 === 11 29 11 29
	12304,262159,58,3,       //304 === 11 30 11 30
	12304,262159,123,3,       //305 === 11 31 11 31
	16,786437,69,3,       //306 === 12 13 12 13
	16,786445,6,3,       //307 === 12 14 12 14
	16,786445,71,3,       //308 === 12 15 12 15
	16,786434,36,0,       //309 === 12 16 12 16
	16,786434,101,0,       //310 === 12 17 12 17
	16,786442,38,0,       //311 === 12 18 12 18
	16,786442,103,0,       //312 === 12 19 12 19
	16,786438,36,2,       //313 === 12 20 12 20
	16,786438,101,2,       //314 === 12 21 12 21
	16,786446,38,2,       //315 === 12 22 12 22
	16,786446,103,2,       //316 === 12 23 12 23
	16,786435,36,1,       //317 === 12 24 12 24
	16,786435,101,1,       //318 === 12 25 12 25
	16,786443,38,1,       //319 === 12 26 12 26
	16,786443,103,1,       //320 === 12 27 12 27
	16,786439,36,3,       //321 === 12 28 12 28
	16,786439,101,3,       //322 === 12 29 12 29
	16,786447,38,3,       //323 === 12 30 12 30
	16,786447,103,3,       //324 === 12 31 12 31
	4112,786445,22,3,       //325 === 13 14 13 14
	4112,786445,87,3,       //326 === 13 15 13 15
	4112,786434,52,0,       //327 === 13 16 13 16
	4112,786434,117,0,       //328 === 13 17 13 17
	4112,786442,54,0,       //329 === 13 18 13 18
	4112,786442,119,0,       //330 === 13 19 13 19
	4112,786438,52,2,       //331 === 13 20 13 20
	4112,786438,117,2,       //332 === 13 21 13 21
	4112,786446,54,2,       //333 === 13 22 13 22
	4112,786446,119,2,       //334 === 13 23 13 23
	4112,786435,52,1,       //335 === 13 24 13 24
	4112,786435,117,1,       //336 === 13 25 13 25
	4112,786443,54,1,       //337 === 13 26 13 26
	4112,786443,119,1,       //338 === 13 27 13 27
	4112,786439,52,3,       //339 === 13 28 13 28
	4112,786439,117,3,       //340 === 13 29 13 29
	4112,786447,54,3,       //341 === 13 30 13 30
	4112,786447,119,3,       //342 === 13 31 13 31
	8208,786445,79,3,       //343 === 14 15 14 15
	8208,786434,44,0,       //344 === 14 16 14 16
	8208,786434,109,0,       //345 === 14 17 14 17
	8208,786442,46,0,       //346 === 14 18 14 18
	8208,786442,111,0,       //347 === 14 19 14 19
	8208,786438,44,2,       //348 === 14 20 14 20
	8208,786438,109,2,       //349 === 14 21 14 21
	8208,786446,46,2,       //350 === 14 22 14 22
	8208,786446,111,2,       //351 === 14 23 14 23
	8208,786435,44,1,       //352 === 14 24 14 24
	8208,786435,109,1,       //353 === 14 25 14 25
	8208,786443,46,1,       //354 === 14 26 14 26
	8208,786443,111,1,       //355 === 14 27 14 27
	8208,786439,44,3,       //356 === 14 28 14 28
	8208,786439,109,3,       //357 === 14 29 14 29
	8208,786447,46,3,       //358 === 14 30 14 30
	8208,786447,111,3,       //359 === 14 31 14 31
	12304,786434,60,0,       //360 === 15 16 15 16
	12304,786434,125,0,       //361 === 15 17 15 17
	12304,786442,62,0,       //362 === 15 18 15 18
	12304,786442,127,0,       //363 === 15 19 15 19
	12304,786438,60,2,       //364 === 15 20 15 20
	12304,786438,125,2,       //365 === 15 21 15 21
	12304,786446,62,2,       //366 === 15 22 15 22
	12304,786446,127,2,       //367 === 15 23 15 23
	12304,786435,60,1,       //368 === 15 24 15 24
	12304,786435,125,1,       //369 === 15 25 15 25
	12304,786443,62,1,       //370 === 15 26 15 26
	12304,786443,127,1,       //371 === 15 27 15 27
	12304,786439,60,3,       //372 === 15 28 15 28
	12304,786439,125,3,       //373 === 15 29 15 29
	12304,786447,62,3,       //374 === 15 30 15 30
	12304,786447,127,3,       //375 === 15 31 15 31
	32,2,225,0,       //376 === 16 17 16 17
	32,10,162,0,       //377 === 16 18 16 18
	32,10,227,0,       //378 === 16 19 16 19
	32,6,160,2,       //379 === 16 20 16 20
	32,6,225,2,       //380 === 16 21 16 21
	32,14,162,2,       //381 === 16 22 16 22
	32,14,227,2,       //382 === 16 23 16 23
	32,3,160,1,       //383 === 16 24 16 24
	32,3,225,1,       //384 === 16 25 16 25
	32,11,162,1,       //385 === 16 26 16 26
	32,11,227,1,       //386 === 16 27 16 27
	32,7,160,3,       //387 === 16 28 16 28
	32,7,225,3,       //388 === 16 29 16 29
	32,15,162,3,       //389 === 16 30 16 30
	32,15,227,3,       //390 === 16 31 16 31
	4128,10,178,0,       //391 === 17 18 17 18
	4128,10,243,0,       //392 === 17 19 17 19
	4128,6,176,2,       //393 === 17 20 17 20
	4128,6,241,2,       //394 === 17 21 17 21
	4128,14,178,2,       //395 === 17 22 17 22
	4128,14,243,2,       //396 === 17 23 17 23
	4128,3,176,1,       //397 === 17 24 17 24
	4128,3,241,1,       //398 === 17 25 17 25
	4128,11,178,1,       //399 === 17 26 17 26
	4128,11,243,1,       //400 === 17 27 17 27
	4128,7,176,3,       //401 === 17 28 17 28
	4128,7,241,3,       //402 === 17 29 17 29
	4128,15,178,3,       //403 === 17 30 17 30
	4128,15,243,3,       //404 === 17 31 17 31
	8224,10,235,0,       //405 === 18 19 18 19
	8224,6,168,2,       //406 === 18 20 18 20
	8224,6,233,2,       //407 === 18 21 18 21
	8224,14,170,2,       //408 === 18 22 18 22
	8224,14,235,2,       //409 === 18 23 18 23
	8224,3,168,1,       //410 === 18 24 18 24
	8224,3,233,1,       //411 === 18 25 18 25
	8224,11,170,1,       //412 === 18 26 18 26
	8224,11,235,1,       //413 === 18 27 18 27
	8224,7,168,3,       //414 === 18 28 18 28
	8224,7,233,3,       //415 === 18 29 18 29
	8224,15,170,3,       //416 === 18 30 18 30
	8224,15,235,3,       //417 === 18 31 18 31
	12320,6,184,2,       //418 === 19 20 19 20
	12320,6,249,2,       //419 === 19 21 19 21
	12320,14,186,2,       //420 === 19 22 19 22
	12320,14,251,2,       //421 === 19 23 19 23
	12320,3,184,1,       //422 === 19 24 19 24
	12320,3,249,1,       //423 === 19 25 19 25
	12320,11,186,1,       //424 === 19 26 19 26
	12320,11,251,1,       //425 === 19 27 19 27
	12320,7,184,3,       //426 === 19 28 19 28
	12320,7,249,3,       //427 === 19 29 19 29
	12320,15,186,3,       //428 === 19 30 19 30
	12320,15,251,3,       //429 === 19 31 19 31
	32,524294,229,2,       //430 === 20 21 20 21
	32,524302,166,2,       //431 === 20 22 20 22
	32,524302,231,2,       //432 === 20 23 20 23
	32,524291,164,1,       //433 === 20 24 20 24
	32,524291,229,1,       //434 === 20 25 20 25
	32,524299,166,1,       //435 === 20 26 20 26
	32,524299,231,1,       //436 === 20 27 20 27
	32,524295,164,3,       //437 === 20 28 20 28
	32,524295,229,3,       //438 === 20 29 20 29
	32,524303,166,3,       //439 === 20 30 20 30
	32,524303,231,3,       //440 === 20 31 20 31
	4128,524302,182,2,       //441 === 21 22 21 22
	4128,524302,247,2,       //442 === 21 23 21 23
	4128,524291,180,1,       //443 === 21 24 21 24
	4128,524291,245,1,       //444 === 21 25 21 25
	4128,524299,182,1,       //445 === 21 26 21 26
	4128,524299,247,1,       //446 === 21 27 21 27
	4128,524295,180,3,       //447 === 21 28 21 28
	4128,524295,245,3,       //448 === 21 29 21 29
	4128,524303,182,3,       //449 === 21 30 21 30
	4128,524303,247,3,       //450 === 21 31 21 31
	8224,524302,239,2,       //451 === 22 23 22 23
	8224,524291,172,1,       //452 === 22 24 22 24
	8224,524291,237,1,       //453 === 22 25 22 25
	8224,524299,174,1,       //454 === 22 26 22 26
	8224,524299,239,1,       //455 === 22 27 22 27
	8224,524295,172,3,       //456 === 22 28 22 28
	8224,524295,237,3,       //457 === 22 29 22 29
	8224,524303,174,3,       //458 === 22 30 22 30
	8224,524303,239,3,       //459 === 22 31 22 31
	12320,524291,188,1,       //460 === 23 24 23 24
	12320,524291,253,1,       //461 === 23 25 23 25
	12320,524299,190,1,       //462 === 23 26 23 26
	12320,524299,255,1,       //463 === 23 27 23 27
	12320,524295,188,3,       //464 === 23 28 23 28
	12320,524295,253,3,       //465 === 23 29 23 29
	12320,524303,190,3,       //466 === 23 30 23 30
	12320,524303,255,3,       //467 === 23 31 23 31
	48,262147,225,1,       //468 === 24 25 24 25
	48,262155,162,1,       //469 === 24 26 24 26
	48,262155,227,1,       //470 === 24 27 24 27
	48,262151,160,3,       //471 === 24 28 24 28
	48,262151,225,3,       //472 === 24 29 24 29
	48,262159,162,3,       //473 === 24 30 24 30
	48,262159,227,3,       //474 === 24 31 24 31
	4144,262155,178,1,       //475 === 25 26 25 26
	4144,262155,243,1,       //476 === 25 27 25 27
	4144,262151,176,3,       //477 === 25 28 25 28
	4144,262151,241,3,       //478 === 25 29 25 29
	4144,262159,178,3,       //479 === 25 30 25 30
	4144,262159,243,3,       //480 === 25 31 25 31
	8240,262155,235,1,       //481 === 26 27 26 27
	8240,262151,168,3,       //482 === 26 28 26 28
	8240,262151,233,3,       //483 === 26 29 26 29
	8240,262159,170,3,       //484 === 26 30 26 30
	8240,262159,235,3,       //485 === 26 31 26 31
	12336,262151,184,3,       //486 === 27 28 27 28
	12336,262151,249,3,       //487 === 27 29 27 29
	12336,262159,186,3,       //488 === 27 30 27 30
	12336,262159,251,3,       //489 === 27 31 27 31
	48,786439,229,3,       //490 === 28 29 28 29
	48,786447,166,3,       //491 === 28 30 28 30
	48,786447,231,3,       //492 === 28 31 28 31
	4144,786447,182,3,       //493 === 29 30 29 30
	4144,786447,247,3,       //494 === 29 31 29 31
	8240,786447,239,3       //495 === 30 31 30 31
};


