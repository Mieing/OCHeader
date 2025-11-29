@interface BDTGREEPrivateKeyManager : BDTGPrivateKeyManager

+ (id)sharedInstance;

- (void)getPrivateKeyDidFail;
- (void)getPrivateKeyDidSuccess:(struct __SecKey { } *)a0;
- (id)keyType;

@end
