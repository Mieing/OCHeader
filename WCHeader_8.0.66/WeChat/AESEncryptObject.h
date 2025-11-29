@class NSString;

@interface AESEncryptObject : NSObject

@property (retain, nonatomic) NSString *m_aesKey;
@property (retain, nonatomic) NSString *m_rsaEncryptedKey;

- (id)initWithAesKey:(id)a0 withRSAEncryptedKey:(id)a1;
- (id)rsaEncryptedKey;
- (id)encryptWithSourceString:(id)a0;
- (void).cxx_destruct;

@end
