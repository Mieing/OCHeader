@class NSString;

@interface SecurityGuardOpenStaticKeyEncrypt : NSObject <ISecurityGuardOpenStaticKeyEncrypt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getMetaClass;
- (int)saveSecret:(id)a0 value:(id)a1;
- (BOOL)isSecretExist:(id)a0;
- (int)removeSecret:(id)a0;
- (id)encrypt:(long long)a0 key:(id)a1 data:(id)a2;
- (id)decrypt:(long long)a0 key:(id)a1 data:(id)a2;
- (id)encryptSecretData:(long long)a0 key:(id)a1 dataKey:(id)a2;
- (struct { void *x0; unsigned int x1; } *)cryptorServiceWithKey:(id)a0 value:(id)a1 mode:(long long)a2 option:(long long)a3 keyOption:(long long)a4;
- (id)getSeedValue:(id)a0;

@end
