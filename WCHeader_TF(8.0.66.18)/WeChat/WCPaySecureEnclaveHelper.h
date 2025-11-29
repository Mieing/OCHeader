@interface WCPaySecureEnclaveHelper : MMObject

+ (id)createQueryDict:(id)a0;
+ (id)createQueryDict:(id)a0 context:(id)a1;
+ (BOOL)getPrivateAndPublicKey:(id)a0 privateKey:(struct __SecKey **)a1 publicKey:(struct __SecKey **)a2;
+ (id)exportECPublicKeyToPEM:(id)a0;
+ (BOOL)querySEKey:(id)a0 context:(id)a1 privateKey:(struct __SecKey **)a2;
+ (long long)createSEKey:(id)a0;
+ (long long)deleteSEKey:(id)a0;
+ (id)signatureData:(id)a0 srcData:(id)a1 context:(id)a2 error:(id *)a3;
+ (id)keyToData:(id)a0;

@end
