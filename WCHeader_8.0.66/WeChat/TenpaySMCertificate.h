@interface TenpaySMCertificate : NSObject {
    struct { char root_path[512]; char device_id[65]; char business_id[65]; char user_id[65]; int flag; } baseCtx;
    int gErrorCode;
}

- (id)initWithRootPath:(id)a0 deviceId:(id)a1 businessId:(id)a2 userId:(id)a3;
- (id)passwordEncryptWithCertPem:(id)a0 pass:(id)a1 salt:(id)a2 timestamp:(unsigned long long)a3 nonce:(id)a4 headType:(int)a5 verify:(BOOL)a6;
- (id)payPasswordEncrypt:(id)a0 salt:(id)a1 timestamp:(unsigned long long)a2 nonce:(id)a3 headType:(int)a4;
- (int)getError;

@end
