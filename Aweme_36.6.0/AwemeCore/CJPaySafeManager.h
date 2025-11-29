@interface CJPaySafeManager : NSObject

+ (id)cj_objDecryptWith:(id)a0 engimaEngine:(id)a1 errorCode:(int *)a2;
+ (id)buildEngimaEngine:(id)a0;
+ (id)secureInfo;
+ (id)cj_objEncryptWith:(id)a0 errorCode:(int *)a1 engimaEngine:(id)a2;
+ (BOOL)supportEngimaCcit;
+ (unsigned long long)defaultEngimaType;
+ (BOOL)isEngimaISec;
+ (id)secureInfoVersion;
+ (id)encryptMediaData:(id)a0 tfccCert:(id)a1 iSecCert:(id)a2 engimaVersion:(id *)a3;
+ (id)buildEngimaEngine:(id)a0 useCert:(id)a1 engimaType:(unsigned long long)a2;
+ (id)secureInfoWithEngimaType:(unsigned long long)a0;
+ (id)isecClass;
+ (id)ccitClass;
+ (id)buildEngimaEngine:(id)a0 useCert:(id)a1;
+ (id)tfccClass;
+ (id)p_secureInfoVersionMap;
+ (BOOL)supportUseDigitalCert;
+ (id)certImpl;
+ (id)cj_encryptWith:(id)a0 errorCode:(int *)a1;
+ (void)cj_encryptWith:(id)a0 errorCode:(int *)a1 completion:(id /* block */)a2;
+ (id)cj_encryptWith:(id)a0 token:(id)a1 errorCode:(int *)a2;
+ (id)cj_decryptWith:(id)a0 errorCode:(int *)a1;
+ (void)cj_objEncryptWith:(id)a0 errorCode:(int *)a1 engimaEngine:(id)a2 completion:(id /* block */)a3;

@end
