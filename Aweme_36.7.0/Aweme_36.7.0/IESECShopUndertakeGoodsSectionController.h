@class NSString, IESECTracker, IESECShopGoodsAddToCartHandler, IESECObjectMapper;

@interface IESECShopUndertakeGoodsSectionController : IESECShopGoodsSectionController <IESECStoreGoodsCardViewDelegate>

@property (retain, nonatomic) IESECObjectMapper *undertakeObjectMapper;
@property (retain, nonatomic) IESECShopGoodsAddToCartHandler *addToCartHandler;
@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (void)configureObjectMapper;
- (void)tapOnSourceView:(id)a0 jump:(BOOL)a1;
- (void)tapAddToCartButton:(id)a0 withTouchPoint:(struct CGPoint { double x0; double x1; })a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
