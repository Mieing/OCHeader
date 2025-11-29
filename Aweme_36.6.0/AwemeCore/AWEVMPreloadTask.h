@class NSString;

@interface AWEVMPreloadTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupPreCachePreloadNextLaunch;
+ (id)fluencySlardarIssueOptConfig;
+ (void)settingsChanged;
+ (Class)aAWEInfraConfigModuleServiceCommonAdapterClass;
+ (void)endPreload;
+ (void)setupAssetImageOptimization;
+ (void)setupMPVolumeViewOpt;
+ (void)setupMethodSignatureForSelectorOpt;
+ (void)setupNotificationRemoveOpt;
+ (BOOL)asyncMPVolumeLoadRoutingControllerEnable;
+ (BOOL)asyncPreloadMPVolumeLoadRoutingControllerEnable;
+ (BOOL)methodSignatureForSelectorOptEnable;
+ (BOOL)notificationRemoveOptEnable;
+ (void)setupVMPreloadNextLaunch;
+ (void)setupInitializePreloadNextLaunch;
+ (void)setupBundleIOPreloadNextLaunch;
+ (void)setupBundleImagePreloadNextLaunch;
+ (void)setupMMKVPreloadNextLaunch;
+ (void)setupLtcPreloadNextLaunch;
+ (void)setupAweStoragePreloadNextLaunch;
+ (void)setupAssetPreloadNextLaunch;
+ (void)setupAsyncConstructorNextLaunch;
+ (void)setupSwizzleSetImpOptNextLaunch;
+ (void)setupSwizzleExchangeImpsOptNextLaunch;
+ (void)setupDyldLockOptimizeNextLaunch;
+ (void)setupBDFishHookOptNextLaunch;
+ (void)setupBootOptNextLaunch;
+ (void)setupCoreTextPreloadNextLaunch;
+ (void)setupUserInfoPreloadNextLaunch;
+ (void)setupAudioSessionPreloadNextLaunch;
+ (void)setupMPVolumeViewOptNextLaunch;
+ (void)setupMetalPreloadNextLaunch;
+ (void)setupImagePreloadNextLaunch;
+ (void)setupLabelPreloadNextLaunch;
+ (void)setupAttributedStringPreloadNextLaunch;
+ (void)setupSwiftRuntimePreloadNextLaunch;
+ (void)setupMainScreenPreloadNextLaunch;
+ (void)setupProtocolOptNextLaunch;
+ (void)setupMethodSignatureForSelectorOptNextLaunch;
+ (void)setupNotificationRemoveOptNextLaunch;
+ (id)p_getFileModifiedTimeWithPath:(id)a0;
+ (void)setupNewLtcPreloadNextLaunch;
+ (void)execute;

- (id)aAWEInfraConfigModuleServiceCommonAdapter;

@end
