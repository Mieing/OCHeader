@class NSString;

@interface SoterSignHelper : NSObject

@property (retain, nonatomic) NSString *m_publicKey;
@property (retain, nonatomic) NSString *m_privateKey;

- (id)init;
- (id)getPublicKey;
- (id)getPrivateKey;
- (id)rawSignWithString:(id)a0;
- (BOOL)rawVerifyWithString:(id)a0 WithSignatureString:(id)a1;
- (void)genRsaKeyPair;
- (void).cxx_destruct;

@end
