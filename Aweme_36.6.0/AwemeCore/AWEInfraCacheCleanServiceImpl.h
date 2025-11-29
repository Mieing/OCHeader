@class NSString;

@interface AWEInfraCacheCleanServiceImpl : NSObject <AWEInfraCacheCleanService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (long long)tempFilesSize;
- (void)cleanCacheIfNeeded;
- (void)cleanCacheForce;
- (void)cleanCacheForceWithScene:(id)a0;
- (void)cleanTempCache;
- (void)cleanResourceCache;
- (void)cleanResourceCacheWithScene:(id)a0;
- (void)cleanUpLegacyFiles;
- (void)cleanTmpDirectory;
- (void)calculateCacheSizeStrWithCompletion:(id /* block */)a0;
- (void)calculateCacheSizeWithCompletion:(id /* block */)a0;
- (void)cleanCacheRegularly;
- (BOOL)shouldCleanCacheGracefully;
- (void)cleanCacheGracefully;
- (void)cleanTmpDirectoryRegularly;
- (void)cleanGeckoResource:(BOOL)a0;
- (void)cleanIronManResourceAutomatically:(BOOL)a0;
- (void)cleanPitayaResourceForce;
- (void)cleanWKWebViewCache;
- (id)autoCleanSemaphore;
- (void)cleanUpLegacyFilesInternal;
- (long long)autoCleanCacheForLowStorageSizeWithExposure:(BOOL)a0;
- (BOOL)enableAutoCleanCacheForLowStoragePreciseWithExposure:(BOOL)a0;
- (BOOL)inLowStorage;
- (BOOL)useAllocatedDiskSize;
- (void)cleanAllNetworkServiceCaches;
- (void)cleanupStudioEffectLegacyStorage;
- (void)removeOldDirectory;
- (void)checkAutoCleanDisk;
- (void)cleanUpSharedVideo;
- (void)cleanUpFinalVideo;
- (void)cleanUpLegacyLogs;
- (void)cleanUpLegacyStorage;
- (void)cleanAlbumFaceCache;
- (void)cleanUpLiveEffects;
- (void)cleanUpLiveScreenRecords;
- (void)cleanUpWallpaperCaches;
- (void)cleanUpUnKnowCaches;
- (void)cleanFinalAudioFiles;
- (void)cleanTMPFiles;
- (void)cleanIMIntermediateVideoCaches;
- (void)cleanUpWithDirectory:(id)a0 regex:(id)a1 includeDirectory:(BOOL)a2;
- (void)cleanUpWithDirectory:(id)a0 regex:(id)a1;
- (void)cleanUpWithDirectory:(id)a0 regex:(id)a1 includeDirectory:(BOOL)a2 safely:(BOOL)a3;
- (BOOL)enableEnumeratorCrashFix;

@end
