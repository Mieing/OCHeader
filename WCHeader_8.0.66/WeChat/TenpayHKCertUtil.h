@class NSString;

@interface TenpayHKCertUtil : NSObject {
    int gErrorCode;
    struct { unsigned short bits; unsigned char modulus[256]; unsigned char exponent[256]; } m_keyPublic;
    struct { unsigned short bits; unsigned char modulus[256]; unsigned char publicExponent[256]; unsigned char exponent[256]; unsigned char prime[2][128]; unsigned char primeExponent[2][128]; unsigned char coefficient[128]; } m_keyPrivate;
    NSString *_deviceId;
    NSString *_businessId;
    NSString *_userId;
}

- (id)initWithDeviceId:(id)a0 businessId:(id)a1 userId:(id)a2;
- (void)dealloc;
- (int)getError;
- (id)getCsr:(long long)a0;
- (BOOL)importCert:(id)a0 cert:(id)a1;
- (BOOL)hasCert:(id)a0;
- (double)getExpireTime:(id)a0;
- (id)certSign:(id)a0 message:(id)a1;
- (id)certDecrypt:(id)a0 cipher:(id)a1;
- (id)certDecrypt:(id)a0 base64Message:(id)a1;
- (id)certEncrypt:(id)a0 base64Message:(id)a1;
- (BOOL)clearCert:(id)a0;
- (BOOL)clearAllCert;
- (id)getAlgoToken:(id)a0 type:(int)a1 uid:(int)a2 seed:(id)a3 seedTime:(unsigned long long)a4 currentTime:(unsigned long long)a5 baseStep:(unsigned int)a6 timeStepSize:(int)a7;
- (void)checkCertPath;

@end
