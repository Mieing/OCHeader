@class NSString, NSArray;

@interface TTVideoEngineLoadProgress : NSObject <NSCopying>

@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) long long taskType;
@property (copy) NSArray *cacheInfos;
@property (readonly, nonatomic) long long cacheState;
@property (readonly, nonatomic, getter=isPreloadComplete) BOOL preloadComplete;
@property (readonly, nonatomic, getter=isCacheEnd) BOOL cacheEnd;

- (long long)getTotalCacheSize;
- (void)updateCacheInfo:(id)a0 filePath:(id)a1 cacheSize:(long long)a2 mediaSize:(long long)a3 preloadSize:(long long)a4;
- (void)receiveError:(id)a0 error:(id)a1;
- (id)getCahceInfo:(id)a0;
- (long long)getTotalMediaSize;
- (void).cxx_destruct;
- (void)setUp:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemKey;

@end
