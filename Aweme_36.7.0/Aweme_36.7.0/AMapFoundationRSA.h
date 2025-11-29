@interface AMapFoundationRSA : NSObject {
    struct __SecKey { } *publicKey;
    struct __SecCertificate { } *certificate;
    struct __SecPolicy { } *policy;
    struct __SecTrust { } *trust;
    unsigned long long maxPlainLen;
}

+ (id)stripPublicKeyHeader:(id)a0;
+ (struct __SecKey { } *)addPublicKey:(id)a0;

- (id)initWithPublicKeyData:(id)a0;
- (id)encryptWithData:(id)a0;
- (id)encryptWithString:(id)a0;
- (id)initWithPublicKeyString:(id)a0;
- (id)initWithPublicKeyPath:(id)a0;
- (id)encryptToString:(id)a0;
- (BOOL)verifyBytesSHA256withRSA:(id)a0 signature:(id)a1;
- (void)dealloc;

@end
