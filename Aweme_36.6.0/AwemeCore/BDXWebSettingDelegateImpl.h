@class NSString;

@interface BDXWebSettingDelegateImpl : NSObject <BDWebKitSettingsDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)bdFixProcessTerminateCrash;
+ (BOOL)bdFixAddUpdateCrash;
+ (BOOL)bdWKWebViewFixEnable;
+ (BOOL)bdFixWKReloadFrameErrorRecoveryAttempter;
+ (BOOL)bdValidPointerCheckEnable;
+ (BOOL)bdValidObjectCheckEnable;
+ (BOOL)bdFixWebViewBackGroundTaskHangEnable;
+ (double)bdFixWebViewBackGroundTaskTimeout;
+ (BOOL)bdFixWebViewBackGroundTaskAfterReleaseEnable;
+ (BOOL)bdFixWebViewBackGroundNotifyHangEnable;
+ (BOOL)bdFixWebViewBackGroundNotifyTimeOutEnable;
+ (BOOL)bdFixRequestURLCrashEnable;
+ (BOOL)bdFixBlobCrashEnable;
+ (BOOL)bdFixWKScriptMessageCrash;
+ (BOOL)bdFixWKReleaseEarlyCrash;
+ (float)bdFixWKReleaseEarlyCrashKeeperTs;
+ (id)skipSSLCertificateList;
+ (BOOL)bdTTNetCacheControlEnable;
+ (double)bdFixTTNetTimeout;
+ (BOOL)bdEnablePrefetch;
+ (BOOL)bdAdblockEnable;
+ (id)bdAdblockDomainWhiteList;
+ (BOOL)bdAdblockPrecompileEnable;
+ (BOOL)bdCookieSecureEnable;
+ (id)bdSecureCookieList;
+ (BOOL)bdSyncCookieForMainFrameResponse;
+ (BOOL)allowRecursiveRequestFlagForDefaultSchemaHandler;
+ (BOOL)bdSchemaHandlerDefaultUsingTTNet;
+ (id)useTTNetForFalconWhiteList;
+ (BOOL)bdFixWKWebViewSchemeTaskCrash;
+ (BOOL)bdFixDelegateDeallocCrashEnable;
+ (BOOL)bdFixWKRecoveryAttempterCrash;
+ (BOOL)bdInSeclinkWhitelist:(id)a0;
+ (BOOL)bdUserSettingADBlockEnable;
+ (BOOL)bdXDebuggerEnable;
+ (BOOL)checkOfflineWholeLife:(id)a0;
+ (BOOL)checkOfflineChannelInterceptor;
+ (BOOL)checkOfflineChannelInterceptorInjectJS;
+ (BOOL)useTTNetForFalcon;
+ (BOOL)enablePrefix2Channel;
+ (BOOL)bdTTNetOriginOpitimise;
+ (BOOL)bdTTNetFixRedirect;
+ (BOOL)bdFixSyncAjaxCrashEnable;
+ (BOOL)bdTTNetAutoBlockListEnable;
+ (BOOL)bdTTNetBlobAutoBlackEnable;
+ (id)bdTTNetAutoBlockListErrorStatusCode;
+ (BOOL)useNewBlankCheck;
+ (BOOL)bdTTNetFixCors;
+ (BOOL)bdTTNetAvoidNoResponseException;
+ (BOOL)bdAddAcceptLanguageHeaderIfNeeded;
+ (long long)bdPIAJSEngine;
+ (BOOL)bdReportLastWebURL;
+ (BOOL)bdEnableUAFetch;
+ (long long)bdUAFetchTime;
+ (BOOL)bdEnableUAFetchWithKV;
+ (void)initialSettingDelegate;
+ (void)setupWebContainerSettings;


@end
