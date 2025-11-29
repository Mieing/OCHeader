@class TTVideoEngineVideoInfo;

@interface TTVideoEnginePlayInfoSource : TTVideoEnginePlayVidSource

@property (retain, nonatomic) TTVideoEngineVideoInfo *videoInfo;

- (long long)retryStrategyForRetryCount:(long long)a0;
- (BOOL)preloadDataIsExpire;
- (void)fetchUrlWithApiString:(id /* block */)a0 auth:(id /* block */)a1 params:(id /* block */)a2 apiVersion:(id /* block */)a3 result:(id /* block */)a4;
- (void).cxx_destruct;
- (id)deepCopy;
- (BOOL)isEqual:(id)a0;

@end
