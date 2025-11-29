@protocol IESLiveVerifyConfig;

@interface IESLiveCertifyZhimaAuthService : IESLiveCertifyBaseService

@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;

- (void)handleCertifyWithParamsModel:(id)a0 withCompleteBlock:(id /* block */)a1;
- (void)addNotification;
- (void)removeNotification;
- (BOOL)needCertifyProcess:(id)a0;
- (void)arouseCertifyProcessWithError:(id)a0 withCompleteBlock:(id /* block */)a1;
- (void)p_sendTicketWithTicket:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
- (void)certifyNotification:(id)a0;
- (void)arouseNewCertifyProcessWithError:(id)a0 scene:(id)a1 flow:(id)a2 completionBlock:(id /* block */)a3;
- (void)alertActionTrack:(BOOL)a0;
- (void)showAlertTrack;
- (void)certifyResultTrack:(BOOL)a0 isminor:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
