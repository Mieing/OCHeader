@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.CCMScriptModule : NSObject <JSModule> {
    void /* unknown type, empty encoding */ delegate;
}

@property (class, nonatomic, copy) NSString *name;
@property (class, nonatomic, copy) NSDictionary *methodLookup;

- (id)aes:(id)a0;
- (id)aes_cbc_nopadding:(id)a0;
- (id)aes_cbc_pkcs5padding:(id)a0;
- (id)aes_ecb_nopadding:(id)a0;
- (id)aes_ecb_pkcs5padding:(id)a0;
- (id)des:(id)a0;
- (id)des_cbc_nopadding:(id)a0;
- (id)des_cbc_pkcs5padding:(id)a0;
- (id)des_ecb_nopadding:(id)a0;
- (id)des_ecb_pkcs5padding:(id)a0;
- (id)tri_des:(id)a0;
- (id)tri_des_cbc_nopadding:(id)a0;
- (id)tri_des_cbc_pkcs5padding:(id)a0;
- (id)tri_des_ecb_nopadding:(id)a0;
- (id)tri_des_ecb_pkcs5padding:(id)a0;
- (id)base64:(id)a0;
- (id)md5:(id)a0;
- (id)hmac:(id)a0;
- (id)pboc_3des_mac:(id)a0;
- (id)sha1:(id)a0;
- (id)sm2:(id)a0;
- (id)sm2Verify:(id)a0;
- (id)sm3:(id)a0;
- (id)rsa_ecb_nopadding:(id)a0;
- (id)ecdsa:(id)a0;
- (id)utcTime:(id)a0;
- (id)getAppInfo:(id)a0;
- (id)getUserInfo:(id)a0;
- (id)log:(id)a0;
- (id)error:(id)a0;
- (id)sha256:(id)a0;
- (id)invokeWithMethod:(id)a0 params:(id)a1;
- (void)callbackResultWithId:(long long)a0 result:(id)a1;
- (void)callbackErrorWithId:(long long)a0 errCode:(long long)a1 result:(id)a2;
- (id)initWithParam:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
