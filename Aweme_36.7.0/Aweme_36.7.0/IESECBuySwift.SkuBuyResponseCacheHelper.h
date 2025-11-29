@class _TtC13IESECBuySwift25SkuBuyResponseCacheHelper;

@interface IESECBuySwift.SkuBuyResponseCacheHelper : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_skuBuyCacheConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lruCache;
}

@property (class, nonatomic, readonly) _TtC13IESECBuySwift25SkuBuyResponseCacheHelper *shareInstance;

- (BOOL)checkCacheValidWithKey:(id)a0;
- (BOOL)saveCacheWithCacheKey:(id)a0 response:(id)a1 updateFirstSpecId:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
