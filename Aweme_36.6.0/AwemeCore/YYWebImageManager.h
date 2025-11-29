@class NSOperationQueue, NSDictionary, YYImageCache;

@interface YYWebImageManager : NSObject

@property (retain, nonatomic) YYImageCache *cache;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ sharedTransformBlock;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) id /* block */ headersFilter;
@property (copy, nonatomic) id /* block */ cacheKeyFilter;

+ (void)setDownloadKernel:(long long)a0;
+ (void)decrementNetworkActivityCount;
+ (void)incrementNetworkActivityCount;
+ (id)_networkIndicatorInfo;
+ (void)_setNetworkIndicatorInfo:(id)a0;
+ (void)_delaySetActivity:(id)a0;
+ (void)_changeNetworkActivityCount:(long long)a0;
+ (long long)downloadKernel;
+ (long long)currentNetworkActivityCount;
+ (id)sharedManager;

- (id)cacheKeyForURL:(id)a0;
- (id)initWithCache:(id)a0 queue:(id)a1;
- (id)headersForURL:(id)a0;
- (id)requestImageWithURL:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 transform:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
