@class NSString;

@interface AWEOfflineVideoCenterModuleService : HTSService <AWEOfflineVideoCenterModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)videoCenterCacheInit;
+ (BOOL)enableShowCacheVideoEntranceWithModel:(id)a0;
+ (BOOL)enableShowCacheVideoEntrance;
+ (void)canDownloadVideoWithAwemeModel:(id)a0 completion:(id /* block */)a1;
+ (void)canDownloadVideoWithAwemeModels:(id)a0 completion:(id /* block */)a1;
+ (void)downloadVideoWithAwemeModel:(id)a0 enterFrom:(id)a1;
+ (void)downloadVideoWithAwemeModels:(id)a0 enterFrom:(id)a1;
+ (BOOL)hasUserDownloadedVideo;
+ (id)downloadVideoList;
+ (BOOL)hasCachedAwemeModel:(id)a0;
+ (BOOL)hasDownloadedAwemeModel:(id)a0;
+ (BOOL)isFromCacheWithAwemeModel:(id)a0;
+ (BOOL)offlineCenterEnabled;
+ (long long)offlineCenterCanUseMaxStorageGB;
+ (void)showCacheSuccessBottomNotification:(id)a0;
+ (void)showCacheSuccessToast:(id)a0;
+ (long long)videoSizeMBWithAwemodels:(id)a0;
+ (long long)availableStorageGB;
+ (unsigned long long)allDownloadingCount;
+ (BOOL)hasEnoughStorageWithModels:(id)a0;
+ (id)downloadVideoListWithMixInfo:(id)a0;
+ (BOOL)hasWatchedVideo:(id)a0;
+ (void)setVideoWatched:(id)a0 watched:(BOOL)a1;
+ (void)setShouldHideFeedErrorPage:(BOOL)a0;
+ (Class)offlineDetailBottomBarClass;
+ (id)cacheVideoViewControllerConfig;
+ (id)cacheVideoViewControllerWithDataController:(id)a0 enterFrom:(id)a1 config:(id)a2;
+ (double)offlineCenterDiskUsedSize;
+ (BOOL)offlineModeInsertFeedEnable;
+ (BOOL)offlineModeInsertToHideErrorPageEnable;
+ (BOOL)offlineModeWeakNetInsertTaskDelayInitEnable;
+ (BOOL)offlineCenterPersonalEnable;
+ (Class)offlineConfigUtils;
+ (Class)offlineSettings;
+ (BOOL)enableOfflineCenterDownloadOptimization;
+ (BOOL)isOfflineCenterDownloadedModel:(id)a0;
+ (id)offlineCenterFilePath;
+ (BOOL)enableOfflineCenterSetPlayerDirectory;
+ (BOOL)enableOfflineCenterDownloadProcessOptimization;
+ (void)realDownloadVideoWithAwemeModel:(id)a0 enterFrom:(id)a1;


@end
