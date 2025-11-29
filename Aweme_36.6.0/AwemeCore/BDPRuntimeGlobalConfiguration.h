@class NSArray, NSDictionary, NSString, BDPTmgMetaStabilityConfig;

@interface BDPRuntimeGlobalConfiguration : NSObject

@property (nonatomic) BOOL isInHouse;
@property (nonatomic) BOOL padFixDisable;
@property (nonatomic) BOOL isMenuHidden;
@property (nonatomic) long long maxWarmBootCacheCount;
@property (nonatomic) BOOL shouldDismissShareLoading;
@property (nonatomic) BOOL shouldAutoUpdateRelativeData;
@property (nonatomic) BOOL shouldAutoPreloadWebResource;
@property (nonatomic) BOOL shouldAutoPreloadNativeResource;
@property (nonatomic) BOOL shouldRestoreAudioSessionDeactive;
@property (nonatomic) BOOL shouldCancelPreloadWhenNotWifi;
@property (nonatomic) unsigned long long toolBarMenuHidden;
@property (nonatomic) BOOL shouldLoadingHidden;
@property (nonatomic) BOOL shouldLoadingToolBarMenuHidden;
@property (nonatomic) BOOL isSmartPreloadEnabled;
@property (nonatomic) BOOL enableJSThreadCrashProtection;
@property (retain, nonatomic) NSDictionary *InHousePPEBOEInfo;
@property (retain, nonatomic) NSArray *ironManOdrList;
@property (retain, nonatomic) NSArray *hgIronManOdrList;
@property (retain, nonatomic) NSString *odrVersion;
@property (retain, nonatomic) NSString *hgOdrVersion;
@property (nonatomic) BOOL extremelyPreloadDegrade;
@property (nonatomic) BOOL exitNotiReturnLastScreenShoot;
@property (nonatomic) BOOL disableIndustrySDK;
@property (retain, nonatomic) NSDictionary *engineConfigs;
@property (retain, nonatomic) BDPTmgMetaStabilityConfig *tmgMetaStabilityConfig;

+ (id)defaultConfiguration;

- (void)dealloc;
- (id)getODRVersionWithMetaURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
