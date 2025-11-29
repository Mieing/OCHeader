@class WCNewShareCardLayoutCacheItem;

@interface WCNewShareCardLayoutCache : MMObject

@property (retain, nonatomic) WCNewShareCardLayoutCacheItem *cacheItem;

- (id)init;
- (void)loadLayoutCache;
- (void)initForSave;
- (void)saveLayoutCache;
- (void).cxx_destruct;

@end
