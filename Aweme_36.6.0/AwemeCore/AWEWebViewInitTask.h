@class NSString;

@interface AWEWebViewInitTask : NSObject <HTSBootTask, BDWebKitSettingsDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)bdFixAddUpdateCrash;
+ (BOOL)bdFixWKReloadFrameErrorRecoveryAttempter;
+ (BOOL)bdFixBlobCrashEnable;
+ (BOOL)bdFixWKScriptMessageCrash;
+ (BOOL)bdAdblockEnable;
+ (BOOL)bdAdblockPrecompileEnable;
+ (BOOL)bdCookieSecureEnable;
+ (id)bdSecureCookieList;
+ (BOOL)allowRecursiveRequestFlagForDefaultSchemaHandler;
+ (id)useTTNetForFalconWhiteList;
+ (BOOL)bdInSeclinkWhitelist:(id)a0;
+ (BOOL)bdUserSettingADBlockEnable;
+ (BOOL)bdReportLastWebURL;
+ (BOOL)bdEnableUAFetch;
+ (long long)bdUAFetchTime;
+ (BOOL)bdEnableUAFetchWithKV;
+ (id)authDomain;
+ (void)registerAuthConfigFromGeckoBuilder:(id)a0 deviceId:(id)a1 delay:(long long)a2 extraChannels:(id)a3 builtinAuthInfosEnabled:(BOOL)a4;
+ (BOOL)shouldDelay;
+ (void)tabBarControllerViewDidAppear;
+ (void)registerPIAPlugin;
+ (void)configWebViewMonitors;
+ (void)registerBDXBridgeAuthConfig:(BOOL)a0;
+ (BOOL)fixWKReleaseEarlyCrash;
+ (float)fixWKReleaseEarlyCrashKeeperTs;
+ (void)execute;


@end
