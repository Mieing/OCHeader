@class IESECShopGoodsState, NSString, IESECShopGoodsPickTypeModel, IESECShopGoodsAddToCartHandler, IESECShopContext, UIViewController;

@interface IESECShopGoodsActionHandler : NSObject <IESECShopGoodsStateAttachable, IESECShopGoodsListActionHandlerDelegate> {
    IESECShopGoodsAddToCartHandler *_addToCartHandler;
}

@property (readonly, nonatomic) IESECShopContext *legacyShopContext;
@property (retain, nonatomic) IESECShopGoodsState *state;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSString *tabNameSecond;
@property (copy, nonatomic) NSString *moduleForm;
@property (nonatomic) BOOL useEcomEntranceFormInsteadCarrierType;
@property (nonatomic, getter=isSelectedCouponFiltering) BOOL selectedCouponFiltering;
@property (retain, nonatomic) IESECShopGoodsPickTypeModel *productPickModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectShopCardPackProduct:(id)a0 cell:(id)a1 atIndex:(long long)a2 btmInfo:(id)a3 detailURL:(id)a4;
- (void)didSelectShopCardPackProductWithConfig:(id)a0;
- (void)handleAddToCartWithShopCardPackProduct:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 atIndexPath:(id)a3;
- (void)attachState:(id)a0;
- (void)didSelectRelationGoods:(id)a0 cell:(id)a1 atIndex:(long long)a2;
- (void)handleAddToCartWithRelationGoods:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 atIndexPath:(id)a3;
- (void)didSelectShopCardPackProduct:(id)a0 cell:(id)a1 atIndex:(long long)a2;
- (void)redirectToGoodsDetailWithModel:(id)a0 cell:(id)a1 atIndex:(long long)a2;
- (void)redirectToGoodsDetailWithCardPackProductModel:(id)a0 cell:(id)a1 atIndex:(long long)a2 btmInfo:(id)a3 tabNameSecond:(id)a4 detailURL:(id)a5;
- (void)redirectToGoodsDetailWithCardPackProductModel:(id)a0 cell:(id)a1 atIndex:(long long)a2 btmInfo:(id)a3 tabNameSecond:(id)a4 detailURL:(id)a5 additionalParams:(id)a6;
- (void)redirectFromURLScheme:(id)a0 viewModel:(id)a1 btmToken:(id)a2;
- (void)redirectFromRequestWithViewModel:(id)a0 btmID:(id)a1 btmToken:(id)a2;
- (void)redirectFromURLScheme:(id)a0 cardPackProductModel:(id)a1 btmToken:(id)a2;
- (void)handleShopEntranceClick;
- (void).cxx_destruct;

@end
