@class NSMutableArray;

@interface IESLivePlaybackVideoPreloadManager : NSObject

@property (retain, nonatomic) NSMutableArray *preloadVids;

+ (id)sharedInstance;

- (void)preloadVideoWithEpisode:(id)a0 resolution:(unsigned long long)a1 preloadSize:(long long)a2 checkStartLocation:(BOOL)a3;
- (id)videoEngineModelFrom:(id)a0;
- (void)preloadVideoEngineModel:(id)a0 resolution:(unsigned long long)a1 preloadSize:(long long)a2 preloadOffset:(long long)a3;
- (void).cxx_destruct;
- (void)cancelAllTasks;

@end
