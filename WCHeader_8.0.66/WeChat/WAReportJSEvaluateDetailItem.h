@class NSString;

@interface WAReportJSEvaluateDetailItem : WAReportBaseItem

@property (nonatomic) BOOL hasPreload;
@property (nonatomic) unsigned int launchCostTimeInMs;
@property (nonatomic) unsigned int codeCacheVersion;
@property (copy, nonatomic) NSString *preloadTop1File;
@property (nonatomic) unsigned int preloadTop1FileSize;
@property (nonatomic) unsigned int preloadTop1FileCostTimeInMs;
@property (nonatomic) unsigned int preloadTop1FileUseCodeCache;
@property (nonatomic) unsigned int preloadTop1FileCodeCacheSize;
@property (copy, nonatomic) NSString *preloadTop2File;
@property (nonatomic) unsigned int preloadTop2FileSize;
@property (nonatomic) unsigned int preloadTop2FileCostTimeInMs;
@property (nonatomic) unsigned int preloadTop2FileUseCodeCache;
@property (nonatomic) unsigned int preloadTop2FileCodeCacheSize;
@property (copy, nonatomic) NSString *preloadTop3File;
@property (nonatomic) unsigned int preloadTop3FileSize;
@property (nonatomic) unsigned int preloadTop3FileCostTimeInMs;
@property (nonatomic) unsigned int preloadTop3FileUseCodeCache;
@property (nonatomic) unsigned int preloadTop3FileCodeCacheSize;
@property (copy, nonatomic) NSString *launchTop1File;
@property (nonatomic) unsigned int launchTop1FileSize;
@property (nonatomic) unsigned int launchTop1FileCostTimeInMs;
@property (nonatomic) unsigned int launchTop1FileUseCodeCache;
@property (nonatomic) unsigned int launchTop1FileCodeCacheSize;
@property (copy, nonatomic) NSString *launchTop2File;
@property (nonatomic) unsigned int launchTop2FileSize;
@property (nonatomic) unsigned int launchTop2FileCostTimeInMs;
@property (nonatomic) unsigned int launchTop2FileUseCodeCache;
@property (nonatomic) unsigned int launchTop2FileCodeCacheSize;
@property (copy, nonatomic) NSString *launchTop3File;
@property (nonatomic) unsigned int launchTop3FileSize;
@property (nonatomic) unsigned int launchTop3FileCostTimeInMs;
@property (nonatomic) unsigned int launchTop3FileUseCodeCache;
@property (nonatomic) unsigned int launchTop3FileCodeCacheSize;
@property (copy, nonatomic) NSString *preloadAllFileEvaluateDetailBase64;
@property (copy, nonatomic) NSString *launchAllFileEvaluateDetailBase64;
@property (nonatomic) BOOL isDownloadCode;
@property (nonatomic) BOOL isPatch;
@property (nonatomic) BOOL isHeadlessLaunch;
@property (nonatomic) unsigned int preloadFileCount;
@property (nonatomic) unsigned int preloadFileHitCodeCacheCount;
@property (nonatomic) unsigned int preloadFileHitCodeCacheRatio;
@property (nonatomic) unsigned int coldLaunchFileCount;
@property (nonatomic) unsigned int coldLaunchFileHitCodeCacheCount;
@property (nonatomic) unsigned int coldLaunchFileHitCodeCacheRatio;
@property (nonatomic) unsigned int webViewType;
@property (nonatomic) unsigned int coldLaunchFileEvaluateTotalTime;
@property (nonatomic) unsigned int coldLaunchFileEvaluateTotalRatio;
@property (nonatomic) unsigned int coldLaunchFileSizeReachCodeCacheSizeDemandCount;
@property (nonatomic) unsigned int coldLaunchFileSizeReachCodeCacheSizeDemaindRatio;
@property (nonatomic) unsigned int gcTimes;
@property (nonatomic) unsigned int gcDuration;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
