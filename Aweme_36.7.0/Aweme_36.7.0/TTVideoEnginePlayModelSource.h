@class TTVideoEngineModel;

@interface TTVideoEnginePlayModelSource : TTVideoEnginePlayVidSource

@property (retain, nonatomic) TTVideoEngineModel *videoModel;

- (BOOL)hasEmbeddedSubtitle;
- (id)subtitleInfos;
- (long long)retryStrategyForRetryCount:(long long)a0;
- (BOOL)preloadDataIsExpire;
- (void)fetchUrlWithApiString:(id /* block */)a0 auth:(id /* block */)a1 params:(id /* block */)a2 apiVersion:(id /* block */)a3 result:(id /* block */)a4;
- (void).cxx_destruct;
- (id)deepCopy;
- (BOOL)isEqual:(id)a0;

@end
