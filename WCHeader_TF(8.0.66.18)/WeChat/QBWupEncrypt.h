@interface QBWupEncrypt : NSObject

+ (id)sharedInstance;

- (id)generateEncryptKey:(BOOL)a0;
- (id)keyAppendToWupRequestUrl:(id)a0;
- (void)saveWupToken:(id)a0;
- (id)getWupTokenInfo;
- (void)removeWupTokenInfo;
- (id)generateAESKey;
- (id)encryptAESKeyWithRSA1024:(id)a0;

@end
