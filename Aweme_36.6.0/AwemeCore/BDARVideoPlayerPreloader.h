@class NSMutableDictionary;

@interface BDARVideoPlayerPreloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *preloadedDict;

+ (id)sharedInstance;

- (void)preloadVideo:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasVideoPreloaded:(id)a0;
- (void)configureEngine;
- (void)preloadWithVideoModel:(id)a0 completion:(id /* block */)a1;
- (void)preloadWithVideoId:(id)a0 completion:(id /* block */)a1;
- (void)monitorUsingUrlInfoEventWithInfos:(id)a0;
- (void)monitorPreloadEndEventWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
