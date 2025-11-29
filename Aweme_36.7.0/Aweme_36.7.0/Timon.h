@class TimonAppInfo, NSDictionary;
@protocol TimonDelegate;

@interface Timon : NSObject

@property (weak, nonatomic) id<TimonDelegate> delegate;
@property (retain, nonatomic) TimonAppInfo *appInfo;
@property (copy, nonatomic) NSDictionary *modules;

+ (BOOL)isTeenMode;
+ (id)hostAppID;
+ (BOOL)isBasicMode;
+ (BOOL)hasAgreedPrivacy;
+ (void)updateCustomEnvWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (BOOL)enableDowngrade;
+ (id)privacyProtocolWithKey:(id)a0;
+ (void)syncConfig;
+ (BOOL)isBackgroundMode;
+ (void)setUpWithAppInfo:(id)a0 delegate:(id)a1;
+ (BOOL)isElderMode;
+ (BOOL)enableAutoReadPasteboard;
+ (BOOL)enableReadExifLocation;
+ (BOOL)isInSplash;
+ (id)urlIfTopIsWebViewController;
+ (id)crossPlatformCallingInfos;
+ (BOOL)usePasteboardDevSuiteForRead;
+ (BOOL)usePasteboardDevSuiteForWrite;
+ (id)getModuleService:(id)a0;
+ (void)registerCustomEnvWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (void)registerCustomEnvWithKey:(id)a0 type:(unsigned long long)a1 builder:(id /* block */)a2;
+ (BOOL)tm_enableStrictBackgroundScene;
+ (unsigned long long)tm_enterBackgroundDurationThreshold;
+ (unsigned long long)tm_coldLaunchDurationThreshold;
+ (BOOL)tm_enableColdLaunchScene;
+ (unsigned long long)tm_coldLaunchSceneThreshold;
+ (BOOL)tm_enableHotLaunchScene;
+ (unsigned long long)tm_hotLaunchSceneThreshold;
+ (void)registerHasAgreedPrivacyBlock:(id /* block */)a0;
+ (void)registerIsBasicModeBlock:(id /* block */)a0;
+ (void)registerIsTeenModeBlock:(id /* block */)a0;
+ (void)registerIsElderModeBlock:(id /* block */)a0;
+ (void)registerEnableAutoReadPasteboardBlock:(id /* block */)a0;
+ (void)idfaMethodCall;
+ (void)registIdfaMethodCallBlock:(id /* block */)a0;
+ (void)tm_setColdLaunchTime;
+ (BOOL)tm_isStrictBackgroundScene;
+ (BOOL)tm_isEnterBackgroundThirtySeconds;
+ (BOOL)tm_isColdLaunchScene;
+ (BOOL)tm_isColdLaunchInThirtySeconds;
+ (void)tm_setHotLaunchTime;
+ (BOOL)tm_isHotLaunchInThirtySeconds;
+ (BOOL)tm_isHotLaunchScene;
+ (id)getModuleWithKey:(id)a0;
+ (void)setBackgroundMode:(BOOL)a0;
+ (id)userId;
+ (id)channel;
+ (id)rules;
+ (void)start;
+ (id)sharedInstance;
+ (void)appWillEnterForeground;
+ (void)appDidEnterBackground;

- (void)__setUpWithAppInfo:(id)a0 delegate:(id)a1;
- (void)__setupModules;
- (void)__handleConfigUpdate;
- (void)__autoSyncConfig;
- (id)__allModuleClasses;
- (void).cxx_destruct;
- (void)dealloc;
- (void)__start;

@end
