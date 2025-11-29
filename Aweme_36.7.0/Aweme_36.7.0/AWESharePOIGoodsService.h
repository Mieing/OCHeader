@class NSString;

@interface AWESharePOIGoodsService : AWEShareCommonImpl <AWESharePOIGoods>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sharePOIGoodsWithModel:(id)a0 shareType:(id)a1;
- (void)showPanelWithPOIGoodsModel:(id)a0 configurationHandler:(id /* block */)a1 onViewController:(id)a2;

@end
