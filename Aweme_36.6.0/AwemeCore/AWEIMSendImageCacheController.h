@class NSCache, YYMemoryCache;

@interface AWEIMSendImageCacheController : NSObject

@property (retain, nonatomic) YYMemoryCache *yyMemoryCache;
@property (retain, nonatomic) NSCache *exchangeMemoryCache;
@property (retain, nonatomic) NSCache *quoteMemoryCache;
@property (nonatomic) long long sequence;

+ (id)sharedInstance;

- (void)clearAllCache;
- (void)cacheImage:(id)a0 uniqueId:(id)a1;
- (id)requestImageWithUniqueId:(id)a0;
- (void)removeImageForUniqueId:(id)a0;
- (id)quoteRequestImageWithUniqueId:(id)a0;
- (void)quoteCacheImage:(id)a0 uniqueId:(id)a1;
- (id)exchangeRequestImageWithUniqueId:(id)a0;
- (void)quoteRemoveImageForUniqueId:(id)a0;
- (void)quoteClearAllCache;
- (void)exchangeCacheImage:(id)a0 uniqueId:(id)a1;
- (void)exchangeRemoveImageForUniqueId:(id)a0;
- (void)exchangeClearAllCache;
- (void).cxx_destruct;
- (id)init;

@end
