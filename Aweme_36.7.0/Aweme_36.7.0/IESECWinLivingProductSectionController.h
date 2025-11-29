@class IESECWinLivingProductObject, IESECRelationSKUActionHelper, IESECServiceProxy, NSString, IESECRelationAddToCartAnimationHelper;
@protocol IESECWinTabService, IESECWinDataService, IESECWinLiveService, IESECWinGoodsService;

@interface IESECWinLivingProductSectionController : IESECWinListKitCellController <IESECWinFlexLivingProductCellDelegate, IGListDisplayDelegate>

@property (retain, nonatomic) IESECRelationSKUActionHelper *SKUActionHelper;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveServiceProxy;
@property (retain, nonatomic) IESECRelationAddToCartAnimationHelper *animationHelper;
@property (copy, nonatomic) NSString *clickArea;
@property (retain, nonatomic) IESECWinLivingProductObject *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)cardTrackParams;
- (void)clickBuyButtonView;
- (void)clickReplayButton;
- (void)trackWithEventName:(id)a0 trackParams:(id)a1 once:(id)a2 btmID:(id)a3;
- (void)tapOnCoverTagViewWithModel:(id)a0;
- (void)clickAddButtonWithTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)trackShowProductWithCell:(id)a0;
- (void)jumpToWindowFeed;
- (void)jumpToGoodsDetailWithGoodsModel:(id)a0;
- (id)commonTrackParamsForBST;
- (id)getBtmIDWithHost:(id)a0 index:(long long)a1 withBuy:(BOOL)a2;
- (id)btmInfoForCardContentWithIndex:(long long)a0 withBuy:(BOOL)a1;
- (void)trackClickProductWithBtmID:(id)a0 btmInfo:(id)a1 elementParams:(id)a2 clickArea:(id)a3;
- (void)jumpToGoodsDetailWithBtmInfo:(id)a0;
- (void)jumpToGoodsDetailBySchemaWithGoodsModel:(id)a0 btmInfo:(id)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
