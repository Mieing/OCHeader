@interface AWEOfflineVideoSettingManager : NSObject

+ (BOOL)enableOfflineCenterDownloadOptimization;
+ (BOOL)enableOfflineCenterSetPlayerDirectory;
+ (BOOL)enableOfflineCenterDownloadProcessOptimization;
+ (long long)playFailedTimeInterval;
+ (BOOL)enableOfflineCenterDownloadFileLostReport;
+ (BOOL)serializationOptimizeEnable;
+ (double)offlineCenterDownloadDiskSpaceThreshold;
+ (BOOL)enableOfflineStoreOptimization;
+ (BOOL)enableOfflineCenterFeedInsertFilterLostFileVideo;
+ (BOOL)filterErrorCode_1003;
+ (double)cacheVideoCDNRetryMaxTime;
+ (BOOL)enableCacheVideoSizeCheck;
+ (double)cacheVideoMaxSizeWhenShowPopup;
+ (double)cacheVideoMaxSize;
+ (double)cacheLeftSpaceMinSize;
+ (id)offlineCenterDownloadSizeConfig;
+ (id)offlineCenterDownloadOptimizationConfig;
+ (id)offlineCenterDownloadProcessOptimizationConfig;

@end
