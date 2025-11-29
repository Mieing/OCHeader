@class NSMutableDictionary;

@interface AWEShowPlayletInsertAdCacheManage : NSObject

@property (retain, nonatomic) NSMutableDictionary *adCache;
@property (nonatomic) long long cacheValidityInterval;
@property (nonatomic) long long playletAdLiveCacheTime;

+ (id)sharedInstance;

- (void)cacheAdModels:(id)a0 withPage:(id)a1;
- (void)removeAdModel:(id)a0;
- (id)getValidAdModel:(BOOL)a0 withPage:(id)a1;
- (void)cacheSingleAdModel:(id)a0 withPage:(id)a1;
- (void)cleanExpiredAds;
- (void).cxx_destruct;

@end
