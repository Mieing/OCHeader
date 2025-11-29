@class NSData, NSNumber;

@interface BDLEMessageCodec : NSObject

@property (copy, nonatomic) NSData *localPriKeyData;
@property (copy, nonatomic) NSData *localPubKeyData;
@property (copy, nonatomic) NSData *remotePubKeyData;
@property (copy, nonatomic) NSData *sharedKeyData;
@property (nonatomic) long long encryptConfig;
@property (retain, nonatomic) NSNumber *remoteBitmap;

- (id)initWithContextId:(id)a0;
- (BOOL)isEncryptEnabled;
- (id)encryptWithString:(id)a0 error:(id *)a1;
- (id)decryptWithString:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)localPublicKey;
- (void)setRemotePublicKey:(id)a0;

@end
