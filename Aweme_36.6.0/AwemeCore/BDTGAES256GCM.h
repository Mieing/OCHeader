@interface BDTGAES256GCM : NSObject

+ (id)encryptData:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)decryptData:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)encryptString:(id)a0 hexKey:(id)a1 error:(id *)a2;
+ (id)decryptHexString:(id)a0 hexKey:(id)a1 error:(id *)a2;

@end
