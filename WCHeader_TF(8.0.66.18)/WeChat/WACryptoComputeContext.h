@class NSString, NSMutableData, NSData;

@interface WACryptoComputeContext : NSObject {
    NSString *_keyTag;
    NSString *_algorithm;
    NSData *_publicKeyData;
    NSData *_signature;
}

@property (nonatomic) unsigned int identifier;
@property (copy, nonatomic) NSString *keyAlias;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableData *data;
@property (retain, nonatomic) NSData *cachedComputeResult;

- (id)initWithId:(unsigned int)a0 type:(id)a1 algorithm:(id)a2 keyAlias:(id)a3 publicKey:(id)a4 signature:(id)a5 appId:(id)a6;
- (void)updateWithData:(id)a0;
- (id)encryptWithData:(id)a0 error:(id *)a1;
- (id)decryptWithData:(id)a0 error:(id *)a1;
- (id)signWithData:(id)a0 error:(id *)a1;
- (BOOL)verifyWithData:(id)a0 error:(id *)a1;
- (struct __CFString { } *)secKeyAlgorithmWithAlgorithmStr:(id)a0;
- (void).cxx_destruct;

@end
