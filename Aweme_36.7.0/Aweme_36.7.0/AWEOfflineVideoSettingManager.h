@interface AWEOfflineVideoSettingManager : NSObject

+ (BOOL)enableOfflineListProgress;
+ (BOOL)enableOfflineCenterDownloadOptimization;
+ (BOOL)enableOfflineCenterSetPlayerDirectory;
+ (BOOL)enableOfflineCenterDownloadProcessOptimization;
+ (BOOL)enableOfflineMixRevisit;
+ (long long)playFailedTimeInterval;
+ (BOOL)enableOfflineCoverBugfix;
+ (BOOL)enableOfflineCenterDownloadFileLostReport;
+ (BOOL)serializationOptimizeEnable;
+ (double)offlineCenterDownloadDiskSpaceThreshold;
+ (BOOL)enableOfflineStoreOptimization;
+ (BOOL)enableOfflineCenterFeedInsertFilterLostFileVideo;
+ (BOOL)enableLoginOfflineCacheDisappearBugfix;
+ (BOOL)enableOfflineTabOpt;
+ (BOOL)filterErrorCode_1003;
+ (double)cacheVideoCDNRetryMaxTime;
+ (BOOL)enableOfflineMixRelayBugfix;
+ (BOOL)enableOfflineOpenMixPanel;
+ (BOOL)enableCacheVideoSizeCheck;
+ (double)cacheVideoMaxSizeWhenShowPopup;
+ (double)cacheVideoMaxSize;
+ (double)cacheLeftSpaceMinSize;
+ (id)offlineCenterDownloadSizeConfig;
+ (id)offlineCenterDownloadOptimizationConfig;
+ (id)offlineCenterDownloadProcessOptimizationConfig;
+ (id)offlineListOptConfig;
+ (id)offlineListBugFixConfig;

@end
