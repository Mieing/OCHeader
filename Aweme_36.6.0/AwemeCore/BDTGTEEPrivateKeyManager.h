@interface BDTGTEEPrivateKeyManager : BDTGPrivateKeyManager

+ (long long)checkLocalCertWithPrivateKey:(struct __SecKey { } *)a0;
+ (id)sharedInstance;

- (void)getPrivateKeyDidFail;
- (void)getPrivateKeyDidSuccess:(struct __SecKey { } *)a0;
- (id)keyType;

@end
