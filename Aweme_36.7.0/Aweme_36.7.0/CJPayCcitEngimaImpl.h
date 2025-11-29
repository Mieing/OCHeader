@class NSString;

@interface CJPayCcitEngimaImpl : NSObject <CJPayEngimaProtocol, CJPayLocalDigitalCertProtocol>

@property (copy, nonatomic) NSString *customCert;
@property (copy, nonatomic) NSString *customPIN;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getEngimaProtocolBy:(id)a0 useCert:(id)a1;
+ (id)getEngimaProtocolBy:(id)a0;

- (id)encryptWith:(id)a0 errorCode:(int *)a1;
- (id)p_currentPublicSM2Cert;
- (id)p_currentCertPIN;
- (id)p_resultByCcitModel:(id)a0;
- (id)p_certResultCodeMap;
- (id)defaultSM2Cert;
- (id)p_userPIN;
- (id)encryptWithData:(id)a0 errorCode:(int *)a1;
- (id)decryptWith:(id)a0 errorCode:(int *)a1;
- (id)sm4Decrypt:(id)a0 key:(id)a1 errorCode:(int *)a2;
- (id)sm4Encrypt:(id)a0 key:(id)a1 errorCode:(int *)a2;
- (id)initialDigitalCert;
- (id)genPartPublicKeyWithData:(id)a0 q1id:(id)a1;
- (id)genCSRWithData:(id)a0;
- (id)importCert:(id)a0;
- (id)signData:(id)a0 q1:(id)a1 q1Id:(id)a2;
- (id)deleteCert;
- (id)analysisLocalCert;
- (id)currentPIN;
- (void).cxx_destruct;

@end
