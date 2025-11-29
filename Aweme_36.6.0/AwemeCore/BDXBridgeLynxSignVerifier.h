@class NSString, BDXBridgeAuthModelV2BizConfig, BDXBridgeLynxSignVerifierContext, BDXBridgeLynxSign;

@interface BDXBridgeLynxSignVerifier : NSObject

@property (retain, nonatomic) BDXBridgeLynxSignVerifierContext *context;
@property (retain, nonatomic) BDXBridgeLynxSign *lynxSign;
@property (nonatomic) BOOL isSignParsed;
@property (copy, nonatomic) NSString *authNamespace;
@property (copy, nonatomic) NSString *tasmFeId;
@property (copy, nonatomic) NSString *feID;
@property (copy, nonatomic) BDXBridgeAuthModelV2BizConfig *tasmBizConfig;
@property (copy, nonatomic) NSString *verifyUrl;
@property (nonatomic) unsigned long long tasmSignVerifyType;
@property (nonatomic) BOOL isDegrade;
@property (nonatomic) long long errorCode;

- (id)contentV2;
- (void)uploadSignFailedLynxFile:(id)a0 category:(id)a1;
- (id)bypassSignVerifyList;
- (id)authManager;
- (id)_degradedTasmBizAuthConfig;
- (BOOL)enableLynxSignVerify;
- (BOOL)internalVerify;
- (id)getFailedReason:(long long)a0;
- (void)reportWithEventName:(id)a0 metric:(id)a1 category:(id)a2;
- (id)_currentVerifyUrl;
- (id)_parseResourceSignData;
- (BOOL)_verifyWithSign;
- (BOOL)_verifyWithURL;
- (struct __SecKey { } *)_createSecKeyWithPublicKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)verify;
- (id)verifyResult;

@end
