@class NSString, NSDictionary;

@interface TTVideoEnginePlayUrlSource : TTVideoEnginePlayBaseSource

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *mediaInfo;

+ (id)mediaInfo:(id)a0 key:(id)a1 urls:(id)a2 groupId:(id)a3;

- (id)currentUrl;
- (BOOL)isMainUrl;
- (id)urlForResolution:(unsigned long long)a0;
- (id)allUrlsForResolution:(unsigned long long *)a0;
- (long long)retryStrategyForRetryCount:(long long)a0;
- (BOOL)preloadDataIsExpire;
- (BOOL)isSingleUrl;
- (void).cxx_destruct;
- (id)deepCopy;
- (id)videoId;
- (BOOL)isEqual:(id)a0;

@end
