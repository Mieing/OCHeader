@class IESECShopGoodsState, NSString, IESECTracker, NSMutableDictionary, IESECShopTabModel, IESECShopContext, NSMutableSet, NSMutableArray;

@interface IESECShopGoodsEventHandler : NSObject <IESECShopGoodsStateAttachable> {
    NSMutableDictionary *_cachedCardViewModels;
    NSMutableArray *_cachedCardPerf;
}

@property (retain, nonatomic) IESECShopGoodsState *state;
@property (readonly, nonatomic) IESECShopContext *legacyShopContext;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECShopTabModel *tabModel;
@property (retain, nonatomic) NSMutableSet *dynamicProductIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickSkuItem:(id)a0 skuIdx:(long long)a1;
- (void)clickTagList:(id)a0 goodsModel:(id)a1;
- (void)showProductCell:(id)a0 withShopCardPackProduct:(id)a1 atIndex:(long long)a2 btmInfo:(id)a3 tabNameSecond:(id)a4 moduleForm:(id)a5;
- (void)showProductCell:(id)a0 withShopCardPackProduct:(id)a1 atIndex:(long long)a2 btmInfo:(id)a3 tabNameSecond:(id)a4 moduleForm:(id)a5 additionalParams:(id)a6;
- (void)clickEcomComponentWithModuleName:(id)a0 tabNameSecond:(id)a1;
- (void)showEcomComponentWithModuleName:(id)a0 tabNameSecond:(id)a1 goodsModel:(id)a2;
- (void)showSubscribeEcomComponentWithProductId:(id)a0;
- (void)attachState:(id)a0;
- (void)selectPanelButtonShowed;
- (void)selectPanelButtonTapped;
- (void)clickShopEntrance;
- (void)clickAddToCartWithGoodsModel:(id)a0 tabNameSecond:(id)a1 moduleForm:(id)a2;
- (void)clickAddToCartWithShopCardPackProduct:(id)a0 tabNameSecond:(id)a1 moduleForm:(id)a2;
- (void)clickProductWithGoodsModel:(id)a0 cell:(id)a1 index:(long long)a2 btmID:(id)a3 btmInfo:(id)a4 tabNameSecond:(id)a5 moduleForm:(id)a6;
- (void)clickProductWithShopCardPackProduct:(id)a0 cell:(id)a1 btmInfo:(id)a2 tabNameSecond:(id)a3 moduleForm:(id)a4 additionalParams:(id)a5;
- (long long)dynamicStatusWithCardPackProduct:(id)a0;
- (long long)dynamicStatusWithGoodsModel:(id)a0;
- (void)p_trackCellCreatePerf:(id)a0;
- (id)cardViewModelForGoodsModel:(id)a0;
- (void)processExtraParams:(id)a0 WithModuleName:(id)a1;
- (void)trackScrolledWithRequestID:(id)a0 shopID:(id)a1;
- (id)p_tabName;
- (id)clickEventGeneralParamsWithGoodsModel:(id)a0 tabName:(id)a1 tabNameSecond:(id)a2 moduleForm:(id)a3 trackBrowseProgress:(BOOL)a4;
- (id)clickEventGeneralParamsWithShopCardPackModel:(id)a0 tabName:(id)a1 tabNameSecond:(id)a2 moduleForm:(id)a3 trackBrowseProgress:(BOOL)a4;
- (void)showListLayoutSwitchWithButton:(id)a0;
- (void)toggleListLayoutStyleWithButton:(id)a0;
- (unsigned long long)getCurrentSortOrder;
- (void)clickDiscountFilterButtonWithSelectButtonModel:(id)a0 isDefault:(BOOL)a1;
- (void)tabRenderFinishedWithInfo:(id /* block */)a0 error:(id)a1;
- (void)trackCellCreatePerf:(long long)a0 totalInterval:(double)a1 createCellInterval:(double)a2 configCellInterval:(double)a3 asyncRender:(BOOL)a4 firstRender:(BOOL)a5;
- (void)switchTabFinishWithInfo:(id /* block */)a0 error:(id)a1;
- (void)stayStorePageTabWithEventName:(id)a0 duration:(long long)a1;
- (void)showProductCell:(id)a0 withGoodsModel:(id)a1 atIndex:(long long)a2 tabNameSecond:(id)a3 moduleForm:(id)a4;
- (void)clickProductWithShopCardPackProduct:(id)a0 cell:(id)a1 btmInfo:(id)a2 tabNameSecond:(id)a3 moduleForm:(id)a4;
- (void)showListLayoutSwitch;
- (void)toggleListLayoutStyle;
- (void)showShopEntrance;
- (void)showSort;
- (void)clickDefaultSort:(id)a0;
- (void)clickSort:(id)a0;
- (void)showTagList:(id)a0 goodsModel:(id)a1;
- (void)showPromotionFilterButtonWithPromotionButtonModels:(id)a0 bigMoveToTop:(BOOL)a1;
- (void)showDiscountFilterButtonWithSelectButtonModels:(id)a0;
- (void)resetFilterButtonExposureOnceKey;
- (void)clickPromotionFilterButtonWithPromotionFilterModel:(id)a0 isDefault:(BOOL)a1 bigMoveToTop:(BOOL)a2;
- (void)clickDiscountFilterButtonWithSelectButtonModel:(id)a0;
- (void)showEcomComponentWithModuleName:(id)a0;
- (void)clickSubscribeEcomComponentWithProductId:(id)a0;
- (void)trackBrowseProgressShowWithProductViewNum:(long long)a0 andProductTotalNum:(long long)a1;
- (void)trackMemberCardWithEventName:(id)a0 extraParams:(id)a1;
- (void)trackEventName:(id)a0 extraParams:(id)a1 btmId:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
