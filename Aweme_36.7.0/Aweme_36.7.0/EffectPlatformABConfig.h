@class NSString, NSArray, NSDictionary;

@interface EffectPlatformABConfig : NSObject

@property (nonatomic) BOOL enableV4FetchEffectCallbackOptimize;
@property (nonatomic) BOOL enableCheckUpdateGetVersionOptimize;
@property (nonatomic) BOOL enableUseNormalPreLoadResource;
@property (nonatomic) BOOL enableDownloadUseNonGlobalMainQueue;
@property BOOL enableDefaultGetEffectPathOptimize;
@property BOOL enableDiskCacheClearOptimize;
@property BOOL enableDiskCacheClearOptimizeV2;
@property (nonatomic) long long effectCacheCleanIntervalDays;
@property (nonatomic) long long racingTaskCountMax;
@property (nonatomic) long long requestLogFlag;
@property (copy, nonatomic) NSString *requestLogFilter;
@property (nonatomic) long long fixRemoteAssetDownloadFlag;
@property (nonatomic) long long algorithmCacheCleanIntervalDays;
@property (nonatomic) unsigned long long effectCacheReservedThresholdSize;
@property (nonatomic) unsigned long long algorithmCacheReservedThresholdSize;
@property (copy, nonatomic) NSArray *allowModelNameList;
@property (nonatomic) BOOL enableInsertFrontDownloadEffectOptimize;
@property (readonly, nonatomic) BOOL enableDownloadEffectByRequestBinary;
@property (copy) id /* block */ getEnableDownloadEffectByRequestBinaryBlock;
@property (copy, nonatomic) NSDictionary *insertFrontDownloadEffectOptimizeParams;
@property (nonatomic) BOOL enableEffectIconDownloadURLNotJoin;
@property (nonatomic) BOOL enableNotUsedCacheClean;
@property (nonatomic) BOOL enableUpdatedExpireCacheClean;
@property (nonatomic) BOOL enableEffectRemoteAssetDownload;
@property (nonatomic) BOOL enableGetNotHitCacheReason;
@property (copy, nonatomic) NSArray *supportEffectRemoteAssetUrlPaths;
@property (copy, nonatomic) id /* block */ sortTaskBlock;
@property (nonatomic) BOOL enableUnzipOpt;
@property (nonatomic) BOOL enableEpBuiltInModel;
@property (nonatomic) BOOL enableAssetBundle;
@property (nonatomic) BOOL unpackAssetBundle;
@property (nonatomic) BOOL cleanAssetBundle;
@property (copy, nonatomic) NSArray *assetBundleWhiteList;
@property (copy, nonatomic) NSArray *assetBundleBlackList;
@property (copy, nonatomic) NSArray *assetBundlePanelWhiteList;
@property (nonatomic) BOOL disableCancelExistDownloading;
@property (nonatomic) BOOL fixLruCrash;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
