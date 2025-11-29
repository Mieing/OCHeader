@interface AWEMVClientABTestRegister : NSObject

+ (BOOL)enableListVideoPreloaderWithRefer:(id)a0 exposure:(BOOL)a1;
+ (BOOL)clearMemoryWhenEnteringBackground;
+ (BOOL)shouldUseWeakMemoryCache;
+ (double)diskSizeLimit;
+ (double)diskTrimmingRate;
+ (double)diskAgeLimit;
+ (void)_aweLazyRegisterStaticLoad;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (long long)maxUnconsumedItemCount;
+ (long long)minUnconsumedScreenCount;
+ (BOOL)scrollVelocityDetectEnabled;
+ (BOOL)innerCacheEnabledWithExposure:(BOOL)a0;
+ (BOOL)enableCoverAndAvatarOptions;
+ (unsigned long long)avatarImageOptions;
+ (BOOL)diskImageCacheOptEnabled;
+ (BOOL)shouldUseCustomImageCache;
+ (BOOL)memoryImageCacheOptEnabled;
+ (long long)cacheSeparatedMode;
+ (double)smallImageMemorySizeLimit;
+ (unsigned long long)imageSizeThresholdWillBeIgnored;
+ (double)largeImageMemorySizeLimit;
+ (unsigned long long)largeImageSizeThreshold;
+ (long long)innerCacheCount;
+ (id)refreshUseUnconsumedDataConfig;
+ (BOOL)preloadCoverAfterLoadMore;
+ (BOOL)smartLoadMoreEnabledWithExposure:(BOOL)a0;
+ (BOOL)preloadIgnoreDecode;
+ (BOOL)enableSwitchNetWithExposure:(BOOL)a0;
+ (BOOL)enableSwitchNetRegisterPlugin;
+ (unsigned long long)coverImageOptions;
+ (BOOL)autoReloadFailedCoverEnabledWithExposure:(BOOL)a0;
+ (long long)multiSectionCoverPreloadCount;
+ (BOOL)fastLoadMoreEnabledWithExposure:(BOOL)a0;
+ (long long)fastLoadMoreBufferSize;
+ (BOOL)innerPreLoadMoreOptEnabled;
+ (long long)innerPreLoadMoreCount;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;

@end
