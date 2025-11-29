@class NSString;

@interface AWEOfflineVideoCenter : NSObject <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasUserDownloadedVideo;
+ (void)setVideoWatched:(id)a0 watched:(BOOL)a1;
+ (BOOL)isVideoWatched:(id)a0;
+ (id)singleModelWithAwemeModel:(id)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)downloadVideoWithAwemeModel:(id)a0 enterFrom:(id)a1;
- (void)downloadVideoWithAwemeModels:(id)a0 enterFrom:(id)a1;
- (id)downloadVideoList;
- (BOOL)hasCachedAwemeModel:(id)a0;
- (BOOL)hasDownloadedAwemeModel:(id)a0;
- (long long)videoSizeMBWithAwemodels:(id)a0;
- (long long)availableStorageGB;
- (unsigned long long)allDownloadingCount;
- (id)downloadVideoListWithMixInfo:(id)a0;
- (id)awemeModelFromSingleSourceModel:(id)a0;
- (id)videoCenterModel;
- (id)configRootPath;
- (double)diskUsedSize;
- (long long)videoSizeMBWithAwemodel:(id)a0;
- (void)clearOfflineModeCache;
- (id)init;
- (id)rootPath;
- (void)setup;
- (id)downloadFilePath;
- (id)currentUserID;

@end
