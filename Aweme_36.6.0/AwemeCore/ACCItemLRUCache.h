@class NSString;

@interface ACCItemLRUCache : NSObject

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long maxItemCount;

+ (id)imageCache;
+ (id)videoCache;

- (id)cacheKeyForItemID:(id)a0;
- (id)lruKey;
- (void)setResources:(id)a0 forItemID:(id)a1;
- (id)resourcesForItemID:(id)a0;
- (void)clearCacheForItemID:(id)a0;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (void)clearAll;

@end
