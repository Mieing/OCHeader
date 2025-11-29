@class NSString;

@interface AWEZMCertManager : NSObject <BytedCertTrackEventDelegate, BytedCertMetaSecDelegate, BytedCertProgressDelegate, BytedCertManagerDelegate, AWEYAPAPIDelegateProtocol, AnnieContainerVCRouterInterceptProtocol>

@property (copy, nonatomic) id /* block */ authCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)realNameVerifyWithParams:(id)a0 identityParams:(id)a1 faceVerificationOnly:(BOOL)a2 completion:(id /* block */)a3;
+ (id)aLiYunMateInfo;
+ (BOOL)isCertModelDownloaded;
+ (void)preloadCertModelWith:(id)a0 completion:(id /* block */)a1;
+ (void)aLiYunFaceCheckWithCertifyId:(id)a0 viewController:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)fake_doFaceLivenessWith:(id)a0 extraParams:(id)a1 callback:(id /* block */)a2;
+ (Class)aAWEZLinkSDKManagerCommonAdapterClass;
+ (void)checkVerifyResult:(id)a0 completion:(id /* block */)a1;
+ (void)bytedFaceCheckWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)setupConfigIfNeeded;
+ (void)verifyWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)initCertSdk;
+ (void)bytedCertVerifyWithAliYapParams:(id)a0 completon:(id /* block */)a1;
+ (id)manager;

- (void)onResponse:(id)a0;
- (void)trackWithEvent:(id)a0 params:(id)a1;
- (void)progressFinishWithType:(unsigned long long)a0 params:(id)a1;
- (void)bytedCertManager:(id)a0 handlerWebEventForResultWithParams:(id)a1 completion:(id /* block */)a2;
- (void)metaSecReportForScene:(id)a0;
- (void)bytedCertManager:(id)a0 showToastOnView:(id)a1 text:(id)a2 type:(long long)a3;
- (void)bytedCertManager:(id)a0 showAlertOnViewController:(id)a1 title:(id)a2 message:(id)a3 actions:(id)a4;
- (id)aAWEZLinkSDKManagerCommonAdapter;
- (unsigned long long)liveAuthCallbackTypeWith:(long long)a0;
- (void)_initCertSdk:(id)a0;
- (void)accountFetch:(id)a0 completion:(id /* block */)a1;
- (void)processFetchResultWithResponseModel:(id)a0 feParams:(id)a1 responseError:(id)a2 TTHttpResponse:(id)a3 completion:(id /* block */)a4;
- (void)bytedCertManager:(id)a0 handleOpenSchema:(id)a1 completion:(id /* block */)a2;
- (BOOL)canHandleUrlString:(id)a0;
- (BOOL)customHandleWithParams:(id)a0;
- (void)realNameVerifyWithParams:(id)a0 ignoreResult:(BOOL)a1;
- (void).cxx_destruct;

@end
