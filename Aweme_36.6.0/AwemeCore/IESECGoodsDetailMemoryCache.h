@class IESECGoodsDetailMemoryCacheSettings, NSMutableDictionary, YYMemoryCache;

@interface IESECGoodsDetailMemoryCache : NSObject

@property (retain, nonatomic) YYMemoryCache *detailCache;
@property (retain, nonatomic) YYMemoryCache *sliceCache;
@property (retain, nonatomic) YYMemoryCache *skuCache;
@property (retain, nonatomic) YYMemoryCache *ultimateBuyCache;
@property (retain, nonatomic) NSMutableDictionary *promotionsCache;
@property (retain, nonatomic) IESECGoodsDetailMemoryCacheSettings *settings;
@property (retain, nonatomic) YYMemoryCache *userActionCache;
@property (retain, nonatomic) YYMemoryCache *mainVideoProgressCache;
@property (retain, nonatomic) YYMemoryCache *preloadCache;

+ (id)generateVerboseKeyWithKey:(id)a0 addition:(id)a1;
+ (id)shared;

- (id)cachedObjectForKey:(id)a0 type:(Class)a1;
- (void)cacheObject:(id)a0 key:(id)a1 cost:(unsigned long long)a2 timeout:(id)a3;
- (void)appDidReceiveMemoryWarningNotification;
- (id)enterDetail:(id)a0;
- (id)cachedUserActionObjectForKey:(id)a0 type:(Class)a1;
- (void)cacheUserActionObject:(id)a0 actionKey:(id)a1 cost:(unsigned long long)a2 timeout:(id)a3;
- (id)respDidChangeWithKey:(id)a0 newRes:(id)a1;
- (BOOL)getHeadVideosAutoPlayState;
- (void)setHeadVideosAutoPlayState:(BOOL)a0;
- (void)cacheMainVideoProgressObject:(id)a0 actionKey:(id)a1 cost:(unsigned long long)a2 timeout:(id)a3;
- (void)setHeadVideosMuteState:(BOOL)a0;
- (BOOL)getHeadVideosAutoMuteState;
- (id)cachedPreloadResponseForKey:(id)a0 type:(Class)a1;
- (id)secondsDistance:(id)a0 now:(id)a1;
- (id)respDidChange:(id)a0 newRes:(id)a1;
- (id)cachedObjectForKey:(id)a0 type:(Class)a1 inCache:(id)a2;
- (void)cacheSkuUserSelectObject:(id)a0 key:(id)a1 cost:(unsigned long long)a2 timeout:(id)a3;
- (id)cachedSkuDataForKey:(id)a0 type:(Class)a1;
- (void)cacheUltimateBuyCache:(id)a0 cacheKey:(id)a1;
- (id)ultimateBuyCacheWithKey:(id)a0;
- (void)cacheSliceData:(id)a0 key:(id)a1;
- (id)cachedSliceDataForKey:(id)a0;
- (id)userActionCache;
- (id)mainVideoProgressCache;
- (id)cachedMainVideoProgressObjectForKey:(id)a0 valueType:(Class)a1;
- (id)createCacheStrWithCacheKey:(id)a0;
- (void)createPreloadCacheWithMaxCount:(long long)a0;
- (void)cachePreloadResponse:(id)a0 cacheKey:(id)a1;
- (void).cxx_destruct;
- (void)clearCache;
- (void)dealloc;

@end
