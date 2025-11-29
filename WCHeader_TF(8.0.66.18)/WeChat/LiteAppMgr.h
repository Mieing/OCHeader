@class NSString, NSMutableDictionary, WxaRouterConfig;
@protocol LiteAppCallback;

@interface LiteAppMgr : NSObject

@property (retain, nonatomic) WxaRouterConfig *config;
@property (nonatomic) BOOL hasLoadBaseLib;
@property (retain, nonatomic) NSString *baseLibPath;
@property (retain, nonatomic) NSString *entryPoint;
@property (nonatomic) long long setPathResult;
@property (retain, nonatomic) id<LiteAppCallback> callbackDelegate;
@property (nonatomic) BOOL fontScaleFollowSystem;
@property (nonatomic) float fontScale;
@property (nonatomic) float statusBarHeight;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) BOOL localeFollowSystem;
@property (retain, nonatomic) NSMutableDictionary *reporters;

+ (id)sharedInstance;

- (id)init;
- (unsigned int)genLiteAppUuid;
- (void)setFlutterEntryPoint:(id)a0;
- (id)preparedRouter;
- (int)preloadBaseLib;
- (int)preloadBaseLibWithExtends:(id)a0;
- (int)loadBaseLib:(id)a0;
- (void)releaseBaseLib;
- (id)initialRoute;
- (void)releaseFlutterEngine;
- (void)releaseFlutterEngine:(BOOL)a0;
- (void)updateDarkMode:(BOOL)a0;
- (void)onOrientationChanged:(int)a0;
- (void)updateLowPower:(BOOL)a0;
- (void)updateLowPowerMode:(BOOL)a0;
- (void)updateVolume:(float)a0;
- (int)dispatchStore:(id)a0 actionName:(id)a1 json:(id)a2;
- (int)dispatchStore:(id)a0 actionName:(id)a1 obj:(id)a2;
- (void)addGlobalStore:(id)a0 clz:(Class)a1;
- (void)addGlobalStore:(id)a0 store:(id)a1;
- (void)removeGlobalStore:(id)a0;
- (id)getGlobalStore:(id)a0;
- (void)setJsApiViewController:(id)a0 ForAppId:(id)a1;
- (void)removeJsApiViewControllerForAppId:(id)a0;
- (id)getJsApiViewControllerForAppId:(id)a0;
- (id)getViewController:(unsigned int)a0;
- (void).cxx_destruct;

@end
