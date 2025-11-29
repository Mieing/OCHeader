@class NSMutableDictionary;

@interface AWESpecialCardCachePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *caches;

- (void)removeAllItem;
- (void)cacheItem:(id)a0 forBusinessID:(id)a1;
- (id)getItemForBusinessID:(id)a0;
- (void).cxx_destruct;

@end
