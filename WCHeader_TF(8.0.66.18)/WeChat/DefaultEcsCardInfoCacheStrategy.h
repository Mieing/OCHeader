@class MMLRUCache, NSString;

@interface DefaultEcsCardInfoCacheStrategy : NSObject <EcsCardInfoCacheStrategy>

@property (retain, nonatomic) MMLRUCache *productCadrCacheList;
@property (retain, nonatomic) MMLRUCache *shopCardCacheList;
@property (retain, nonatomic) MMLRUCache *jumpInfoCacheList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initCache;
- (void)updateProductCardCache:(id)a0 reqInfo:(id)a1;
- (id)getProductCardWithProduct:(id)a0;
- (id)getValidProductCardWithProduct:(id)a0;
- (id)getShopCardWithReqInfo:(id)a0;
- (id)getValidShopCardWithReqInfo:(id)a0;
- (void)updateShopCardCache:(id)a0 reqInfo:(id)a1;
- (void)updateBulkBuyCardCache:(id)a0 key:(id)a1;
- (id)getValidBulkBuyCardJumpInfoFromCache:(id)a0;
- (id)getBulkBuyCardJumpInfoFromCache:(id)a0;
- (void).cxx_destruct;

@end
