@class TTAdSplashModel, BDASplashControllerView, NSDictionary, UIWindow, TTAdSplashUDPManager, UIView, NSString;
@protocol BDASplashOriginalViewProtocol;

@interface BDASplashManager : NSObject <BDASplashManagerMarketingProtocol, BDASplashControllerViewProtocol>

@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) TTAdSplashUDPManager *udpManager;
@property (retain, nonatomic) BDASplashControllerView *controllerView;
@property (nonatomic) BOOL isWarmStart;
@property (retain, nonatomic) UIView<BDASplashOriginalViewProtocol> *originalView;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long requestStatus;
@property (nonatomic) unsigned long long breakReason;
@property (retain, nonatomic) TTAdSplashModel *selectedModel;
@property (nonatomic) BOOL isCheckUDPSwitch;
@property (retain, nonatomic) UIWindow *keyWindow;
@property (nonatomic) BOOL hasPickModel;
@property (retain, nonatomic) UIView *realTimeFakeLaunchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasPreloadOrRealtimeModel;
+ (void)updatePreloadInfoListWithModels:(id)a0;
+ (BOOL)getSwitchWithKey:(id)a0;
+ (long long)getSettingsNumberWithKey:(id)a0;
+ (void)initialize;
+ (id)sharedInstance;

- (void)downloadComplianceResourceWithComplianceArea:(id)a0 expires:(double)a1 netAllow:(BOOL)a2;
- (void)updateSelectedModel:(id /* block */)a0;
- (void)downloadComplianceResourceWithModuleInfo:(id)a0 expires:(double)a1 netAllow:(BOOL)a2;
- (id)getLaunchTimestamps;
- (void)updateStopSplashWithModel:(id)a0 method:(id)a1;
- (void)registerWithDelete:(id)a0 config:(id)a1 params:(id)a2;
- (id)pickModelWithBlock:(id /* block */)a0 isWarmStart:(BOOL)a1;
- (void)displaySplashOnWindow:(id)a0 showType:(long long)a1 isWarmStart:(BOOL)a2;
- (void)startRealTimeTask:(BOOL)a0 bidSplashControlInfo:(id)a1 completion:(id /* block */)a2;
- (void)clearSplashDataCache;
- (id)getAllAdModels;
- (void)startUDPRequestWithCommand:(BOOL)a0 ipList:(id)a1;
- (void)splashViewShowFinished;
- (void)publicDownloadResourceWithInfo:(id)a0 expires:(double)a1 type:(long long)a2;
- (void)clearResourceRegularly;
- (void)trackSDKSessionLaunch;
- (void)showSplashControllerViewOnKeyWindow:(id)a0 model:(id)a1;
- (BOOL)isNowInPenaltyPeriod;
- (void)updateStopSplashWithAdIds:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSplashFrameWithKeyWindow:(id)a0;
- (void)updateConfigWithKey:(id)a0 value:(id)a1;
- (id)resoucePathForSplashModel:(id)a0;
- (BOOL)shouldShowSplashAccordingToUDPAndPreloadData:(id)a0;
- (void)sendClickForFloatingWindowWithModel:(id)a0 extra:(id)a1 adExtraData:(id)a2;
- (void)openKeepSplash;
- (void)closeKeepSplash;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)enterBackground;
- (id)init;
- (void)clearCache;
- (void)dealloc;
- (id)sdkVersion;

@end
