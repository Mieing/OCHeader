@class _TTVideoEnginePreloadTask;

@interface _TTVideoEnginePreloadTaskGroup : _TTVideoEnginePreloadTask

@property (retain, nonatomic) _TTVideoEnginePreloadTask *nextPreloadTask;

+ (id)preloadTask:(id)a0 videoId:(id)a1 preloadOffset:(long long)a2 preSize:(long long)a3 videoModeltem:(id)a4 nextTask:(id)a5;

- (void).cxx_destruct;

@end
