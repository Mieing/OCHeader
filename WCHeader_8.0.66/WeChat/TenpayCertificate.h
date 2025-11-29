@class NSString;

@interface TenpayCertificate : NSObject {
    struct { unsigned short bits; unsigned char modulus[256]; unsigned char exponent[256]; } m_keyPublic;
    struct { unsigned short bits; unsigned char modulus[256]; unsigned char publicExponent[256]; unsigned char exponent[256]; unsigned char prime[2][128]; unsigned char primeExponent[2][128]; unsigned char coefficient[128]; } m_keyPrivate;
}

@property (retain, nonatomic) NSString *myToken;
@property (nonatomic) int lastError;

- (id)init;
- (id)stringByEscapingForURLQuery:(id)a0;
- (id)getCSR:(id)a0 structureName:(id)a1 csrType:(int)a2;
- (BOOL)importCert:(id)a0;
- (id)certSign:(id)a0 message:(id)a1;
- (id)certDecrypt:(id)a0 message:(id)a1;
- (BOOL)delCert:(id)a0;
- (BOOL)isCertExist:(id)a0;
- (id)privateDecrypt:(id)a0 message:(id)a1;
- (BOOL)setToken:(id)a0 certId:(id)a1 useSM4:(BOOL)a2 sm4Key:(id)a3;
- (long long)getRemainTokenNum:(id)a0;
- (void)cleanToken:(id)a0;
- (id)getToken:(id)a0;
- (double)getExpireTime:(id)a0;
- (id)tokenEncode:(id)a0 message:(id)a1;
- (void)checkCertPath;

@end
