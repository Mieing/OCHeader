@class NSMutableDictionary;

@interface IESVSVideoPlayerPreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *preloadTasks;

+ (id)sharedInstance;

- (long long)liveVsShowPreloadEpisodeSize;
- (void)preloadVideoModel:(id)a0 resolution:(unsigned long long)a1 preloadSize:(long long)a2 preloadOffset:(long long)a3;
- (id)videoEngineModelFrom:(id)a0;
- (void)preloadVideoEngineModel:(id)a0 resolution:(unsigned long long)a1 preloadSize:(long long)a2 preloadOffset:(long long)a3;
- (void)checkCacheExistWithVideoEngineModel:(id)a0 resolution:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)preloadEpisode:(id)a0 resolution:(unsigned long long)a1 preloadSize:(long long)a2 preloadOffset:(long long)a3;
- (void)checkCacheExistWithEpisode:(id)a0 resolution:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)videoIDFrom:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllTasks;

@end
