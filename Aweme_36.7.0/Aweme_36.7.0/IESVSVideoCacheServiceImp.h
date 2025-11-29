@class NSString, IESLiveCacheItem;
@protocol IESVSVideoCacheServiceDelegate;

@interface IESVSVideoCacheServiceImp : NSObject <TTVideoEngineDownloaderDelegate, IESVSVideoCacheService>

@property (copy, nonatomic) id /* block */ getAllTasksHandler;
@property (nonatomic) BOOL isGettingAllTasks;
@property (nonatomic) BOOL isTTVideoEngineSetuped;
@property (nonatomic) BOOL hasCacheVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESVSVideoCacheServiceDelegate> delegate;
@property (readonly, nonatomic) IESLiveCacheItem *cacheItem;
@property (nonatomic) BOOL isWWANNetworkToasted;

+ (id)sharedInstance;

- (void)VideoEngineDownloader:(id)a0 downloadTask:(id)a1 stateChanged:(long long)a2;
- (void)VideoEngineDownloader:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void)VideoEngineDownloader:(id)a0 downloadTask:(id)a1 didCompleteWithError:(id)a2;
- (void)VideoEngineDownloader:(id)a0 downloadTask:(id)a1 writeData:(long long)a2 timeInterval:(double)a3;
- (void)videoCacheSetup;
- (void)startDownloadWithVideoModel:(id)a0 resolution:(long long)a1;
- (void)pauseDownloadWithVideoModel:(id)a0;
- (void)getCacheVideoFromLocalWithEpisodeId:(id)a0 completion:(id /* block */)a1;
- (void)getAllCacheTaskWithCompletionHandler:(id /* block */)a0;
- (void)removeCacheVideoModel:(id)a0;
- (void)removeCacheVideoModel:(id)a0 resolutionTypes:(id)a1;
- (void)clearCacheVideoWithEpisode:(id)a0;
- (BOOL)isVsVideoCacheEnabled;
- (id)createRoomModelFromEpisodeId:(id)a0;
- (void)setHasMyCacheVideo:(BOOL)a0;
- (BOOL)isVsVideoCacheEntryEnabled;
- (BOOL)enableShowThisVideoCacheByUidCheck:(id)a0;
- (void)p_downloadWithVideoModel:(id)a0 resolution:(unsigned long long)a1;
- (void)p_getCacheVideoFromLocalWithEpisodeId:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_realRemoveCacheVideo:(id)a0;
- (void)p_kvStoreRemoveCurrentUserIdFromUidList:(id)a0;
- (void).cxx_destruct;

@end
