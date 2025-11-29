@class NSData;

@interface FBSDKCrypto : NSObject {
    NSData *_encryptionKeyData;
    NSData *_macKeyData;
}

+ (id)makeMasterKey;
+ (id)randomBytes:(unsigned long long)a0;
+ (id)randomString:(unsigned long long)a0;

- (id)initWithMasterKey:(id)a0;
- (id)initWithEncryptionKey:(id)a0 macKey:(id)a1;
- (void)dealloc;
- (id)encrypt:(id)a0 additionalDataToSign:(id)a1;
- (id)decrypt:(id)a0 additionalSignedData:(id)a1;
- (id)_macForIV:(id)a0 cipherData:(id)a1 additionalDataToSign:(id)a2;
- (void).cxx_destruct;

@end
