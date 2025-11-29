@class NSString;

@interface AWEHybridHostAdapterImpl : NSObject <HunterHostAbilityProtocol, HunterHostTrackerProtocol, HunterHostJSBExecuterProtocol, HunterHostGurdProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)rootDirectoryForAccessKey:(id)a0 channel:(id)a1;
- (BOOL)hasCacheForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (id)viewControllerForURLString:(id)a0;
- (id)getCurrentThemeName;
- (id)bizGlobalPropsWithSchema:(id)a0;
- (id)liteOfflinePrefix;
- (id)customerComponentKeyClassPairToRegister;
- (void)configWithContainerWillDestrory:(id)a0;
- (void)invokeGetUserInfo:(id)a0 withParams:(id)a1;
- (void)invokeGetSettings:(id)a0 withParams:(id)a1;
- (void)invokeGetAppInfo:(id)a0 withParams:(id)a1;
- (void)invokeGetAuthStorageAndUid:(id)a0 withParams:(id)a1;
- (void)invokeGetMovieLocate:(id)a0 withParams:(id)a1;
- (void)invokeGetLiveSettings:(id)a0 withParams:(id)a1;
- (void)invokeGlobalJSB:(id)a0 withParams:(id)a1;
- (void)invokeGetSettings:(id)a0 withParams:(id)a1 name:(id)a2;
- (id)accesskey:(id)a0;
- (void)processDefaultBulletStyleWithSchema:(id)a0 context:(id)a1;
- (id)hostSettingInstance;
- (void)configController:(id)a0 fullScreenPopGestureDisable:(BOOL)a1;
- (id)queryDictForSchema:(id)a0;
- (void)logWithModule:(id)a0 format:(id)a1;
- (void)captureScreenshotInDebug:(id)a0;
- (void)captureViewScreenshotInDebug:(id)a0;
- (id)ugAccesskey;
- (id)liveAccesskey;
- (id)lifeAccesskey;
- (BOOL)canExecuterJSBWithParams:(id)a0;
- (void)invokeJSBMethodWithResultDict:(id)a0 params:(id)a1;
- (void)downloadChannel:(id)a0;
- (id)init;
- (void)addObserver;
- (id)accessKey;
- (id)loadingView;

@end
