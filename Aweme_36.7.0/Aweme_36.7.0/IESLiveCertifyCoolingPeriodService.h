@class IESLiveCertifySMSVerifyService;
@protocol IESLiveVerifyConfig;

@interface IESLiveCertifyCoolingPeriodService : IESLiveCertifyBaseService

@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;
@property (retain, nonatomic) IESLiveCertifySMSVerifyService *smsService;

- (void)handleCertifyWithParamsModel:(id)a0 withCompleteBlock:(id /* block */)a1;
- (BOOL)needCertifyProcess:(id)a0;
- (void)processFaceVerify:(id)a0 elementsVerified:(BOOL)a1 message:(id)a2;
- (void)processSMSVerify:(id)a0 message:(id)a1;
- (void)processToast:(id)a0;
- (void)arouseCertifyProcessWithError:(id)a0;
- (void)pr_distributeCertifyProcess:(id)a0 elementsVerified:(BOOL)a1;
- (void).cxx_destruct;

@end
