@interface CKResourceConfiguration : NSObject

+ (BOOL)enableCKCache;
+ (id)getCKCacheAutoCleanNotificationKey;
+ (unsigned long long)getCKCacheThresholdSize;
+ (int)getCKCacheThresholdCleanIntervalDays;
+ (void)configCKResourceNetworkManager;
+ (void)configCKResourceCacheManager;
+ (int)getDownloadConcurrentFromAB;
+ (int)getDownloadTimeoutFromAB;
+ (BOOL)enableCKDownloader;
+ (BOOL)enableLokiEffectDownloadByRequestBinary;
+ (BOOL)enableLittleFileDownloadResume;
+ (unsigned long long)getLittleFileDownloadThreshold;
+ (BOOL)enableSupportCommonResource;
+ (int)getCommonResourceDataType;

@end
