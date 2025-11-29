@class YYCache, YYDiskCache, YYMemoryCache;

@interface BDWebViewPreloadManager : NSObject

@property (retain, nonatomic) YYCache *yyCache;
@property (copy, nonatomic) YYMemoryCache *taskCaches;
@property (readonly, nonatomic) YYDiskCache *diskCache;

+ (id)MD5HashString:(id)a0;
+ (id)sharedInstance;

- (void)fetchDataForURLString:(id)a0 headerField:(id)a1 useHttpCaches:(BOOL)a2 cacheDuration:(double)a3 queuePriority:(long long)a4 completion:(id /* block */)a5;
- (id)responseForURLString:(id)a0;
- (void)saveResponse:(id)a0 forURLString:(id)a1;
- (void)setTask:(id)a0 URLString:(id)a1;
- (void)fetchDataForURLString:(id)a0 headerField:(id)a1 useHttpCaches:(BOOL)a2 cacheDuration:(double)a3 queuePriority:(long long)a4 preloadWillStartCallback:(id /* block */)a5 completion:(id /* block */)a6;
- (void)clearDataForURLString:(id)a0;
- (void)fetchDataForURLString:(id)a0 headerField:(id)a1 useHttpCaches:(BOOL)a2 cacheDuration:(double)a3 queuePriority:(long long)a4 chunkCompletion:(id /* block */)a5 dataCompletion:(id /* block */)a6;
- (void)fetchDataForURLString:(id)a0 headerField:(id)a1 useHttpCaches:(BOOL)a2 cacheDuration:(double)a3 queuePriority:(long long)a4 dataCompletion:(id /* block */)a5;
- (void)fetchDataForURLString:(id)a0 headerField:(id)a1 cacheDuration:(double)a2 queuePriority:(long long)a3 completion:(id /* block */)a4;
- (id)taskForURLString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
