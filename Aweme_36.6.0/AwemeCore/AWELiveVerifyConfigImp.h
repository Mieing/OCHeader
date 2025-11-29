@class AWELiveZMCertManager, NSString, AWELiveVerifyReportApi, AWELiveVerifyApi;

@interface AWELiveVerifyConfigImp : NSObject <IESLiveVerifyConfig>

@property (retain, nonatomic) AWELiveVerifyApi *verifyApi;
@property (retain, nonatomic) AWELiveZMCertManager *zmCertManager;
@property (retain, nonatomic) AWELiveVerifyReportApi *verifyReportApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transitionToLiveVerifyPageFrom:(id)a0 params:(id)a1 enableOptimization:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isPhoneBinded;
- (void)needIdentityAuthenticationWithCompleteBlock:(id /* block */)a0;
- (void)needIdentityAuthenticationWithController:(id)a0 enterFrom:(id)a1;
- (void)needPhoneAuthenticationWithController:(id)a0;
- (void)needZMAssertWithCompleteBlock:(id /* block */)a0;
- (void)needZMAuthenticationWithController:(id)a0;
- (void)needZMAuthenticationWithController:(id)a0 withCompleteBlock:(id /* block */)a1;
- (void)needIdentityAuthenticationWithController:(id)a0 enterTrack:(id)a1 completionBlock:(id /* block */)a2;
- (void)needWithdrawAuthenticationWithController:(id)a0;
- (void)needReChargeAuthenticationWithController:(id)a0;
- (void)multiIDAuth:(id /* block */)a0;
- (void)verifyForMultiID:(id /* block */)a0;
- (void)antispamDownSMSVerifyTraceURL:(id)a0 completion:(id /* block */)a1;
- (void)openLiveCertWithParams:(id)a0 identifyParams:(id)a1 faceOnly:(BOOL)a2 paramsBuilder:(id /* block */)a3 completion:(id /* block */)a4;
- (void)openZYLivingBodyAuthenticationWithParams:(id)a0 withCompleteBlock:(id /* block */)a1;
- (void)reportVerifyResult:(id)a0 params:(id)a1 uniqueId:(id)a2;
- (void).cxx_destruct;

@end
