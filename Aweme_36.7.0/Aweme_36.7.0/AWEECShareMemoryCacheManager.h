@class NSMutableDictionary;

@interface AWEECShareMemoryCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheDic;

+ (id)shared;

- (id)buideCacheWithScene:(id)a0;
- (id)buildCacheItemWithScene:(id)a0 key:(id)a1 value:(id)a2;
- (id)getShareCacheItemWithScene:(id)a0 key:(id)a1;
- (void)setShareCacheWithScene:(id)a0 key:(id)a1 value:(id)a2;
- (id)getShareCacheWithScene:(id)a0;
- (BOOL)hitCacheWithScene:(id)a0 key:(id)a1;
- (void).cxx_destruct;

@end
