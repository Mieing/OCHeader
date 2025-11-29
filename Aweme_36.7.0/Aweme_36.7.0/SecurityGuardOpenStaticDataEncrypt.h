@class NSString;

@interface SecurityGuardOpenStaticDataEncrypt : NSObject <ISecurityGuardOpenStaticDataEncrypt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getMetaClass;
- (id)staticSafeEncrypt:(long long)a0 forKey:(id)a1 forNeedProcessValue:(id)a2 authCode:(id)a3;
- (id)staticSafeDecrypt:(long long)a0 forKey:(id)a1 forNeedProcessValue:(id)a2 authCode:(id)a3;
- (id)staticBinarySafeEncrypt:(long long)a0 forKey:(id)a1 forNeedProcessValue:(id)a2 authCode:(id)a3;
- (id)staticBinarySafeDecrypt:(long long)a0 forKey:(id)a1 forNeedProcessValue:(id)a2 authCode:(id)a3;
- (id)staticBinarySafeEncryptNoB64:(long long)a0 forKey:(id)a1 forNeedProcessValue:(id)a2 authCode:(id)a3;
- (id)staticBinarySafeDecryptNoB64:(long long)a0 forKey:(id)a1 forNeedProcessValue:(id)a2 authCode:(id)a3;
- (id)staticBinarySafeEncrypt:(long long)a0 forKey:(id)a1 forNeedProcessValue:(id)a2 mask:(id)a3 base64:(unsigned char)a4;
- (id)staticBinarySafeDecrypt:(long long)a0 forKey:(id)a1 forNeedProcessValue:(id)a2 mask:(id)a3 base64:(unsigned char)a4;

@end
