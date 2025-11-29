@class NSString;

@interface RSAEncryptObject : NSObject

@property (retain, nonatomic) NSString *m_publicPemKey;

- (id)initWithRSAPublicPemKey:(id)a0;
- (id)encryptWithSourceString:(id)a0;
- (void).cxx_destruct;

@end
