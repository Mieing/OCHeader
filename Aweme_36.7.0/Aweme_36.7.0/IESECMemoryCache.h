@class NSCache, YYMemoryCache;

@interface IESECMemoryCache : NSObject

@property (class, readonly, nonatomic) IESECMemoryCache *shared;

@property (retain, nonatomic) YYMemoryCache *innerCache;
@property (retain, nonatomic) NSCache *iconImageCache;

+ (id)generateVerboseKeyWithKey:(id)a0 addition:(id)a1;

- (id)cachedObjectForKey:(id)a0 type:(Class)a1;
- (void)cacheObject:(id)a0 key:(id)a1 cost:(unsigned long long)a2 timeout:(id)a3;
- (void)appDidReceiveMemoryWarningNotification;
- (void)cacheIconImage:(id)a0 key:(id)a1;
- (id)cachedIconImageForKey:(id)a0;
- (void).cxx_destruct;
- (void)clearCache;
- (void)dealloc;
- (void)clearCacheForKey:(id)a0;

@end
