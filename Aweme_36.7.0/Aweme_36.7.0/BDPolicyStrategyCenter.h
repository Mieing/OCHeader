@class BDCertLimitBinder, NSString;

@interface BDPolicyStrategyCenter : NSObject <BDPrivacyCertValidateProtocol, BDPrivacyCertValidateAndTranslateProtocol>

@property (readonly, nonatomic) BDCertLimitBinder *limitBinder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)validateAndTranslateCert:(id)a0 context:(id)a1;
- (void)recordCertInThreadContext:(id)a0;
- (id)validatePolicy:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
