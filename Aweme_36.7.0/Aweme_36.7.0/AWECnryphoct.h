@class NSObject, NSString, AWECnryphoctConfig, NSDate, MSManagerML;
@protocol OS_dispatch_queue, AWECnryphoctDelegate;

@interface AWECnryphoct : NSObject <BDUGTwiceVerifyDelegate, BytedCertProgressDelegate, InstallAndDeviceIDMessage, AWEUserMessage>

@property (retain, nonatomic) AWECnryphoctConfig *config;
@property (weak, nonatomic) id<AWECnryphoctDelegate> delegate;
@property (retain, nonatomic) MSManagerML *msManager;
@property (retain, nonatomic) NSDate *beginDate;
@property (nonatomic) BOOL isGenerateMetaTokenSuccess;
@property (nonatomic) long long mssdkCollectMode;
@property (nonatomic) long long modeChangeTimes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<AWECnryphoctDelegate> securityDelegate;
@property (nonatomic) BOOL isCameraPermissionNeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showTwiceVerifyAlertView:(id)a0 cancelBlock:(id /* block */)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3 enterMethod:(id)a4;
+ (void)startForScene:(id)a0;
+ (void)showTwiceVerifyAlertView:(id)a0 cancelBlock:(id /* block */)a1 goToVerifyBlock:(id /* block */)a2 enterMethod:(id)a3;
+ (void)showNewTwiceVerifyAlertView:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2 enterMethod:(id)a3;
+ (void)uploadDataForEvent:(id)a0;
+ (void)registerScenePageNameCallback:(long long)a0 cb:(id)a1;
+ (void)manualScheduleSelas;
+ (double)currentMaxWindowLevel;
+ (void)startMSManager;
+ (void)configTwiceVerify;
+ (void)dismissPublishAlertView;
+ (id)licenseForAppId:(id)a0;
+ (void)startWithConfig:(id)a0 delegate:(id)a1;
+ (void)startAutoSafeGuard;
+ (id)encryptURL:(id)a0 formData:(id)a1;
+ (id)config;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)dismissLoading;
- (id)apiDomain;
- (void)progressFinishWithType:(unsigned long long)a0 params:(id)a1;
- (void)didUpdateInstallIDFrom:(id)a0 to:(id)a1;
- (void)didUpdateDeviceIDFrom:(id)a0 to:(id)a1;
- (void)startSMSVerifyWithCompletionBlock:(id /* block */)a0;
- (void)updateCollectMode:(long long)a0;
- (void)observeDeviceDidRegistered;
- (void)observeUserDidLogin;
- (void)reportColdStart;
- (void)showToastWithTitle:(id)a0;
- (void)showLoadingWithTitle:(id)a0;
- (id)sgm_customDeviceID;
- (id)sgm_installID;
- (id)sgm_sessionID;
- (id)sgm_installChannel;
- (void)metaTokenDidUpdate;
- (id)webCommonParams;
- (void)openAuthVerifyWithParams:(id)a0;
- (void)openLiveAuthWithParams:(id)a0;
- (BOOL)isUseTTNet;
- (BOOL)sgm_needConfigSelas;
- (void).cxx_destruct;
- (id)appId;

@end
