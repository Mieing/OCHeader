@class NSString, NSMutableSet;

@interface IESECShopImageService : IESECShopService <IESECShopImageService>

@property (retain, nonatomic) NSMutableSet *preloadImgs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadWithConfigs:(id)a0;
- (void)updateProductImageTag:(id)a0 firstScreen:(BOOL)a1;
- (void)preloadFirstScreenProductImages:(id)a0 tabStyle:(long long)a1;
- (void)preloadProductImages:(id)a0 tabStyle:(long long)a1 curIdx:(long long)a2;
- (void)p_preloadProductCoverImageIfNeeded:(id)a0 tabStyle:(long long)a1;
- (void)p_preloadProductSKUImageIfNeeded:(id)a0 tabStyle:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
