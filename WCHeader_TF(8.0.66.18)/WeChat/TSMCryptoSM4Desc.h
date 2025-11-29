@interface TSMCryptoSM4Desc : NSObject

+ (id)ECBEncrypt:(id)a0 desc:(id)a1 error:(id *)a2;
+ (id)ECBDecrypt:(id)a0 desc:(id)a1 error:(id *)a2;
+ (id)CBCEncrypt:(id)a0 desc:(id)a1 iv:(id)a2 error:(id *)a3;
+ (id)CBCDecrypt:(id)a0 desc:(id)a1 iv:(id)a2 error:(id *)a3;
+ (id)CTREncrypt:(id)a0 desc:(id)a1 iv:(id)a2 error:(id *)a3;
+ (id)CTRDecrypt:(id)a0 desc:(id)a1 iv:(id)a2 error:(id *)a3;
+ (id)GCMEncrypt:(id)a0 desc:(id)a1 taglen:(unsigned int)a2 iv:(id)a3 aad:(id)a4 error:(id *)a5;
+ (id)GCMDecrypt:(id)a0 desc:(id)a1 tag:(id)a2 iv:(id)a3 aad:(id)a4 error:(id *)a5;

@end
