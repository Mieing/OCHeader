@class NSCache, NSString;

@interface WCTimelineEmoticonManager : NSObject

@property (retain, nonatomic) NSCache *memoryCache;
@property (retain, nonatomic) NSString *cacheDirectory;
@property (nonatomic) long long cachedExpirationInterval;
@property (nonatomic) long long fileCountLimit;
@property (nonatomic) BOOL enableUpdateCommentEmoticon;

- (id)init;
- (id)getCacheDirectory;
- (id)cachePathForMd5:(id)a0;
- (id)getObjectForMd5:(id)a0;
- (void)setObject:(id)a0 forMd5:(id)a1;
- (void)setExpiredObjectToCache:(id)a0 forMd5:(id)a1;
- (void)clearExpiredCache;
- (BOOL)isCacheExpired:(id)a0;
- (BOOL)shouldFetchObjectFromNetwork:(id)a0;
- (id)snsEmojiInfoObjFromCacheOrComment:(id)a0;
- (void).cxx_destruct;

@end
