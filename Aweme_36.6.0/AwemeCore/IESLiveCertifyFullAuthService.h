@protocol IESLiveVerifyConfig;

@interface IESLiveCertifyFullAuthService : IESLiveCertifyBaseService

@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;

- (void)handleCertifyWithParamsModel:(id)a0 withCompleteBlock:(id /* block */)a1;
- (BOOL)needCertifyProcess:(id)a0;
- (void)arouseNewCertifyProcessWithError:(id)a0 withCompleteBlock:(id /* block */)a1;
- (void)arouseNewFullAuthCertifyProcessWithScene:(id)a0 flow:(id)a1 error:(id)a2 withCompleteBlock:(id /* block */)a3;
- (BOOL)shouldUseLynxFullAuthWithURL:(id)a0;
- (void)arouseCertifyProcessWithError:(id)a0 withCompleteBlock:(id /* block */)a1;
- (void)handleVerifyResult:(BOOL)a0 withError:(id)a1 isV3:(BOOL)a2;
- (void).cxx_destruct;

@end
