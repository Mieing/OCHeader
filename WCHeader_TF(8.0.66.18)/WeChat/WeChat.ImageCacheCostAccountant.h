@class _TtC6WeChat24ImageCacheCostAccountant;

@interface WeChat.ImageCacheCostAccountant : NSObject <NSCacheDelegate> {
    void /* unknown type, empty encoding */ module;
    void /* unknown type, empty encoding */ cost;
    void /* unknown type, empty encoding */ mutext;
}

@property (class, nonatomic, readonly) _TtC6WeChat24ImageCacheCostAccountant *headCacher;
@property (class, nonatomic, readonly) _TtC6WeChat24ImageCacheCostAccountant *fastCacher;
@property (class, nonatomic, readonly) _TtC6WeChat24ImageCacheCostAccountant *snsCacher;
@property (class, nonatomic, readonly) _TtC6WeChat24ImageCacheCostAccountant *finderCacher;
@property (class, nonatomic, readonly) _TtC6WeChat24ImageCacheCostAccountant *localCacher;

- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)onCacheWithImage:(id)a0;
- (void)onAddCacheWithLength:(long long)a0;
- (void)onRemoveCacheWithLength:(long long)a0;
- (void)onDiscardWithImage:(id)a0;
- (void)onRemoveAll;
- (id)init;
- (void).cxx_destruct;

@end
