@protocol IESLiveVerifyConfig;

@interface IESLiveCertifySMSVerifyService : IESLiveCertifyBaseService

@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;

- (void)handleCertifyWithParamsModel:(id)a0 withCompleteBlock:(id /* block */)a1;
- (BOOL)needCertifyProcess:(id)a0;
- (void)handleCertifyWithParamsModel:(id)a0 message:(id)a1 withCompleteBlock:(id /* block */)a2;
- (void)p_smsAuthenticationWithParamsModel:(id)a0 completeBlock:(id /* block */)a1;
- (void)p_handleTwiceVerifyResponse:(id)a0;
- (void)p_sendTicketWithTicket:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
