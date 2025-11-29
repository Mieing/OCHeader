@interface AWEIMECDHKeyExchange : NSObject {
    struct __SecKey { } *_localPrivateKey;
    struct __SecKey { } *_localPublicKey;
    struct __SecKey { } *_remotePublicKey;
}

+ (id)hexStringFromData:(id)a0;
+ (id)dataFromBase64String:(id)a0;

- (void)generateKeyPair;
- (id)exportBase64PublicKey;
- (BOOL)importRemoteBase64PublicKey:(id)a0;
- (id)computeSharedSecretData;
- (id)init;
- (void)dealloc;

@end
