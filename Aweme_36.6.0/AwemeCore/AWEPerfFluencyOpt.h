@interface AWEPerfFluencyOpt : NSObject

+ (BOOL)jatoImagePreloadOptimizeEnable;
+ (BOOL)awemeShowInfOptimizeEnable;
+ (BOOL)antiAddictedUserDefaultOptimizeEnable;
+ (BOOL)awemeMainModuleAsyncEnable;
+ (BOOL)awemeIMTrackerAsyncEnable;
+ (id)awemeBootOptimizeOnlineConfig;
+ (id)awemeBootOptimizeConfig;
+ (BOOL)draftDBOptimizeEnable;
+ (BOOL)draftCountOptimizeEnable;
+ (BOOL)mmkvOptimizeEnable;
+ (BOOL)metalCheckEnable;
+ (BOOL)activeAsyncEnable;
+ (BOOL)htsServiceGetServiceCacheOptimizeEnable;
+ (BOOL)htsServiceProtocolCacheOptimizeEnable;
+ (BOOL)abTestOptimizeEnable;
+ (BOOL)localePreferredLanguagesOptimizeEnable;
+ (BOOL)duxImageCacheOptimizeEnable;
+ (BOOL)jsonDictionaryOptimizeEnable;
+ (BOOL)awemeDraftCountAsyncEnable;
+ (id)awemeActivityPushConfig;
+ (BOOL)awemePremainDelayInitTaskAsyncEnable;
+ (BOOL)awemeLanguageInitTaskAsyncEnable;
+ (BOOL)awemeATSPrivacyBoostTaskAsyncEnable;
+ (BOOL)awemeVideoPlayerConfigurationInitTaskAsyncEnable;
+ (BOOL)awemeSecurityTaskAsyncEnable;
+ (BOOL)awemeStabilityAfterTrackerTaskAsyncEnable;
+ (BOOL)awemeXBridgeKitBootTaskAsyncEnable;
+ (id)awemeLazyRegisterConfig;
+ (id)config;

@end
