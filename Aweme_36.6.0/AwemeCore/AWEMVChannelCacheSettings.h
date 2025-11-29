@interface AWEMVChannelCacheSettings : NSObject

@property (class, readonly, nonatomic) BOOL enableFirstRenderCache;
@property (class, readonly, nonatomic) double cacheExpirationTime;
@property (class, readonly, nonatomic) long long strategyForFirstRenderCache;
@property (class, readonly, nonatomic) BOOL disableAutoPlayCacheCellInReplaceCacheStrategy;
@property (class, readonly, nonatomic) BOOL disablePreloadInReplaceCacheStrategy;
@property (class, readonly, nonatomic) double forceInsertTimeOut;
@property (class, readonly, nonatomic) BOOL shouldUseExposedCache;
@property (class, readonly, nonatomic) BOOL saveToDiskOnlyBackground;
@property (class, readonly, nonatomic) BOOL preReadCacheEnable;
@property (class, readonly, nonatomic) BOOL preReadCacheEnableV2;
@property (class, readonly, nonatomic) long long cacheAvailableMinCount;
@property (class, readonly, nonatomic) long long useCacheMaxCount;
@property (class, readonly, nonatomic) BOOL readInHighPriorityQueueEnable;
@property (class, readonly, nonatomic) unsigned int readInHighPriorityQueueQos;
@property (class, readonly, nonatomic) BOOL isReadOptimize;
@property (class, readonly, nonatomic) BOOL acquireCacheAsyncCallback;
@property (class, readonly, nonatomic) BOOL fixRepeatedReadCacheFromDisk;
@property (class, readonly, nonatomic) BOOL stopCacheReadIfLaunchFinished;
@property (class, readonly, nonatomic) BOOL useRefreshResponseCacheEnable;
@property (class, readonly, nonatomic) long long refreshResponseCacheSaveMaxItemCount;
@property (class, readonly, nonatomic) BOOL refreshResponseCacheOnlySaveFirst;
@property (class, readonly, nonatomic) double refreshResponseCacheSaveMinTimeIntervalSec;
@property (class, readonly, nonatomic) double refreshResponseCacheWriteDiskDelaySeconds;
@property (class, readonly, nonatomic) BOOL replaceCacheWithAnimation;
@property (class, readonly, nonatomic) BOOL replaceCacheWithAnimationFix;
@property (class, readonly, nonatomic) BOOL replaceCacheAnimationStartWhenWillAppear;
@property (class, readonly, nonatomic) BOOL enableCacheVideoContinuePlay;
@property (class, readonly, nonatomic) BOOL preloadImageEnable;
@property (class, readonly, nonatomic) BOOL preloadImageWifiOnly;
@property (class, readonly, nonatomic) long long preloadImageMaxCount;
@property (class, readonly, nonatomic) BOOL preloadImageOptionsOptimize;
@property (class, readonly, nonatomic) BOOL enableLaunchCachePrefetchIcon;
@property (class, readonly, nonatomic) BOOL enableFeedDataAndImageSyncStore;
@property (class, readonly, nonatomic) BOOL allowUseExpiredCacheIfHasCoverCache;
@property (class, readonly, nonatomic) BOOL coverImageBitmapCacheEnable;
@property (class, readonly, nonatomic) double coverImageBitmapCacheSaveDelayTime;
@property (class, readonly, nonatomic) long long coverImageBitmapCacheMaxLoadCount;
@property (class, readonly, nonatomic) BOOL coverImageBitmapCacheWriteIsolate;
@property (class, readonly, nonatomic) BOOL coverImageDisableFadeAnimationWhenHitMemoryCache;
@property (class, readonly, nonatomic) BOOL insulatedImageCacheEnable;
@property (class, readonly, nonatomic) long long insulatedImageCacheSeparatedMode;
@property (class, readonly, nonatomic) long long insulatedImageCacheCountLimitInMemory;
@property (class, readonly, nonatomic) long long insulatedImageCacheCountLimitInDisk;
@property (class, readonly, nonatomic) double insulatedImageCacheDiskAgeLimit;
@property (class, readonly, nonatomic) BOOL preloadVideoEnable;
@property (class, readonly, nonatomic) long long preloadVideoSizeKB;
@property (class, readonly, nonatomic) BOOL preloadVideoWifiOnly;
@property (class, readonly, nonatomic) long long preloadVideoPriorityLevel;
@property (class, readonly, nonatomic) long long firstCacheDirectoryMaxSizeMB;

+ (id)cacheConfig;
+ (id)preloadVideoConfig;
+ (BOOL)enableAppendCache;
+ (BOOL)enableInsertCompatibleCache;
+ (BOOL)preloadVideoTiming:(unsigned long long)a0;

@end
