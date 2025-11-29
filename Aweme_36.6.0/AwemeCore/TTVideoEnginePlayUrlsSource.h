@class NSArray;

@interface TTVideoEnginePlayUrlsSource : TTVideoEnginePlayBaseSource

@property (nonatomic) long long urlIndex;
@property (retain, nonatomic) NSArray *urls;

- (id)currentUrl;
- (BOOL)isMainUrl;
- (id)urlForResolution:(unsigned long long)a0;
- (id)allUrlsForResolution:(unsigned long long *)a0;
- (BOOL)skipToNext;
- (long long)retryStrategyForRetryCount:(long long)a0;
- (BOOL)preloadDataIsExpire;
- (BOOL)_canSkipToNext;
- (BOOL)isSingleUrl;
- (void).cxx_destruct;
- (id)deepCopy;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
