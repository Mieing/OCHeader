@class NSString, NSTimer, BDASplashMiniTask, BDPUniqueID, UIView;

@interface BDPSplashAdManager : NSObject <BDPBootLifeCycleMessage, BDASplashMiniDelegate, BDPSplashAdProtocol>

@property (retain, nonatomic) NSTimer *loadTimer;
@property (retain, nonatomic) NSTimer *renderTimer;
@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) BDASplashMiniTask *splashTask;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (weak, nonatomic) UIView *splashView;
@property (nonatomic) double requestTimeInterval;
@property (nonatomic) double renderTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)applicationMetaFinishWithUniqueID:(id)a0 model:(id)a1 launchParam:(id)a2 schema:(id)a3 error:(id)a4;
- (void)applicationLoadFinishWithUniqueID:(id)a0 error:(id)a1 content:(id)a2 extraParams:(id)a3;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (BOOL)p_hasVaildLaunchFromWithSchema:(id)a0;
- (id)p_getLibraConfig;
- (void)p_layoutToolBarView:(id)a0 parentView:(id)a1;
- (void)p_skipSplashAd;
- (void)p_trackerSplashAdShowResultWithErrCode:(long long)a0 errMsg:(id)a1;
- (void)p_trackerSplashAdRenderResultWithErrCode:(long long)a0 errMsg:(id)a1;
- (void)p_trackerSplashAdRequestResultWithErrCode:(long long)a0 errMsg:(id)a1;
- (void)p_setupSplashAdView:(id)a0 timeOut:(long long)a1;
- (void)p_loadSplashAdIfNeedWithUniqueId:(id)a0 model:(id)a1 launchParam:(id)a2 schema:(id)a3;
- (void)splashLoadWithView:(id)a0 errorCode:(long long)a1;
- (void)splashTaskWithStatus:(long long)a0 extraInfo:(id)a1;
- (void)splashClickWithSplashModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
