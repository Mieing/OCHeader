@interface WxSmCertUtil : NSObject {
    struct { char root_path[512]; char device_id[65]; char business_id[65]; char user_id[65]; int flag; } baseCtx;
    int gErrorCode;
}

- (id)initWithRootPath:(id)a0 deviceId:(id)a1 businessId:(id)a2 userId:(id)a3;
- (int)getCaCertVersion;
- (BOOL)updateCaCert:(int)a0 certs:(id)a1;
- (id)makeCsr:(id)a0 commonName:(id)a1;
- (BOOL)importCert:(id)a0 cert:(id)a1 verify:(BOOL)a2;
- (BOOL)hasCert:(id)a0;
- (id)getCertValidTime:(id)a0;
- (id)certSign:(id)a0 message:(id)a1 userId:(id)a2;
- (BOOL)certVerify:(id)a0 message:(id)a1 userId:(id)a2 sign:(id)a3;
- (id)certEncrypt:(id)a0 plain:(id)a1;
- (id)certDecrypt:(id)a0 cipher:(id)a1;
- (BOOL)clearCert:(id)a0;
- (BOOL)clearAllCert;
- (int)getError;
- (BOOL)setToken:(id)a0 token:(id)a1;
- (id)getToken:(id)a0;
- (int)getTokenCount:(id)a0;
- (BOOL)clearToken:(id)a0;
- (BOOL)setTokenSeed:(id)a0 seed:(id)a1;
- (id)getTokenSeed:(id)a0;
- (BOOL)cleanTokenSeed:(id)a0;

@end
