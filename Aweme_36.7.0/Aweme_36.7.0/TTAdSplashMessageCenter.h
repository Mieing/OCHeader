@class NSString;
@protocol TTAdSplashDelegate;

@interface TTAdSplashMessageCenter : NSObject <TTAdSplashDelegate>

@property (weak, nonatomic) id<TTAdSplashDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)trackURLs:(id)a0 model:(id)a1;
- (void)didFetchSplashModels:(id)a0;
- (unsigned long long)logoAreaHeight;
- (void)requestWithUrl:(id)a0 requestType:(unsigned long long)a1 method:(unsigned long long)a2 headers:(id)a3 body:(id)a4 param:(id)a5 responseBlock:(id /* block */)a6;
- (id)splashBaseUrl;
- (id)splashLogoViewWithColor:(unsigned long long)a0;
- (id)splashBGViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 logoColor:(unsigned long long)a1;
- (id)splashFakeLaunchView;
- (void)splashActionWithCondition:(id)a0 animationBlock:(id /* block */)a1;
- (BOOL)getSplashEnableShake:(id)a0;
- (void)shakeSetting;
- (void)trackWithTag:(id)a0 label:(id)a1 extra:(id)a2;
- (void)trackNoAdEvent:(id)a0 params:(id)a1;
- (void)trackMonitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (id)splashExtraView;
- (long long)splashShakeEffectEnable;
- (long long)splashShakeTimeAfter;
- (BOOL)canShowSemiRealtimeSplashWithModel:(id)a0;
- (void)canShowSplashWithModel:(id)a0 callback:(id /* block */)a1;
- (void)splashViewDidSemiRealtimeFetch;
- (void)splashViewSemiRealtimeFetchWithModel:(id)a0 reason:(long long)a1;
- (void)splashViewWillAppearWithAdModel:(id)a0;
- (void)splashViewDidAppearWithAdModel:(id)a0;
- (void)splashViewWillDisappearWithAdModel:(id)a0;
- (void)splashViewWillDisappearWithAdModel:(id)a0 splashView:(id)a1 removeBlock:(id /* block */)a2;
- (void)splashViewDidDisappearWithAdModel:(id)a0;
- (void)splashViewDidSkipWithAdModel:(id)a0;
- (id)splashArrowImage;
- (BOOL)enableSplashAudioSessionStalledOptimization;
- (unsigned long long)skipButtonBottomOffsetWithBannerMode:(unsigned long long)a0;
- (void)reportInfoWithAdInfo:(id)a0;
- (id)splashOpenAppString;
- (id)splashReadMoreString;
- (BOOL)topViewSDKPreloadEnable;
- (void)preloadVideoWithCondition:(id)a0 completionBlock:(id /* block */)a1;
- (void)removeTopViewResource:(id)a0;
- (BOOL)isVideoPreloadSuccess:(id)a0 videoId:(id)a1;
- (void)splashDebugLog:(id)a0;
- (BOOL)shouldDisplayPersonalizedAd;
- (void)shakeViewSkipButtonClicked;
- (BOOL)isSupportLandscape;
- (BOOL)shouldOriginSplashCheckResource;
- (void)readyToExcuteRealtimeSplashTask;
- (id)getHasCachedTopviewResourceSplashAdIdsWithModels:(id)a0;
- (id)splashDynamicParamsWithType:(long long)a0;
- (void)storeTopviewList:(id)a0;
- (void)trackALogWithLevel:(int)a0 tag:(id)a1 log:(id)a2;
- (long long)canShowSplashInHostWithModel:(id)a0;
- (id)onlineFontWithName:(id)a0 size:(double)a1 defaultFont:(id)a2;
- (id)getHasModelCachedTopviewSplashAidsWithAidList:(id)a0;
- (BOOL)canClientRespondsToSelector:(SEL)a0;
- (id)requestUseAdSDKWithUrl:(id)a0 requestType:(unsigned long long)a1 method:(unsigned long long)a2 headers:(id)a3 body:(id)a4 param:(id)a5 responseBlock:(id /* block */)a6;
- (void).cxx_destruct;
- (double)appLaunchTimestamp;

@end
