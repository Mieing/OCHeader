@class IESECCartViewController, IESECCartHybridPopupManager;

@interface IESECCartEventImpl : IESECYataCommonEventImpl

@property (weak, nonatomic) IESECCartViewController *cartVC;
@property (retain, nonatomic) IESECCartHybridPopupManager *hybridPopupManager;

- (void)selfAppendParamsToSchemaWithEventData:(id)a0;
- (void)selfPublishEventWithEventData:(id)a0;
- (void)selfTrackerWithEventData:(id)a0;
- (void)trackWithEventOperation:(id)a0;
- (void)selfQuitCartWithEventData:(id)a0;
- (void)selfScrollToTopWithEventData:(id)a0;
- (void)selfCartRefreshWithEventData:(id)a0;
- (void)selfSetStorageWithEventData:(id)a0;
- (void)selfGetStorageWithEventData:(id)a0;
- (void)selfOpenHybridPopupViewWithEventData:(id)a0;
- (void)selfCartCloseHybridPopupViewWithEventData:(id)a0;
- (void)selfShopSelectedWhenSelectCartWithRenderNodeDataDict:(id)a0 accumulateDict:(id *)a1;
- (void)selfSaveSearchWordWithRenderNodeDataDict:(id)a0 accumulateDict:(id *)a1;
- (id)initWithCartVC:(id)a0;
- (void)cartHeaderTabChangeWithEventData:(id)a0;
- (void)selfOpenSkuPanelWithEventData:(id)a0;
- (void)selfOpenCrossShopDiscountWithEventData:(id)a0;
- (void)counterInputKeyboardOffsetWithEventData:(id)a0;
- (void)selfOpenDiscountPanelWithEventData:(id)a0;
- (void)selfTabbarTappedWithEventData:(id)a0;
- (void)selfRecommendResetWithEventData:(id)a0;
- (void)selfCountDownRefreshWithEventData:(id)a0;
- (void)selfChangeCounterActiveWithEventData:(id)a0;
- (void)selfRecommendProductCardClickWithEventData:(id)a0;
- (void)selfRecommendFindMoreWithEventData:(id)a0;
- (void)selfRecommendAddToCartWithEventData:(id)a0;
- (void)selfRecommendShowProductWithEventData:(id)a0;
- (void)selfAnchorScrollWithEventData:(id)a0;
- (void)selfDeleteSearchWordWithEventData:(id)a0;
- (void).cxx_destruct;

@end
