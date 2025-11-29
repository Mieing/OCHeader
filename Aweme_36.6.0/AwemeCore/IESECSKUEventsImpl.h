@class NSString;
@protocol IESECSKUEventsDelegate;

@interface IESECSKUEventsImpl : IESECBaseSKUEventsImpl

@property (retain, nonatomic) NSString *couponID;
@property (weak, nonatomic) id<IESECSKUEventsDelegate> yataSKUEventHandler;

- (id)initWithDelegate:(id)a0 eventHandler:(id)a1;
- (void)selfPublishEventWithEventData:(id)a0;
- (void)dealBuyNowClick;
- (id)p_orderSchemaForDiffWithSkuSchema:(id)a0 skuInfo:(id)a1;
- (void)trackBuyNowClickAD;
- (void)trackAddCartClickAD;
- (void)selfQuitSkuPageWithEventData:(id)a0;
- (void)selfAutoApplyCouponWithEventData:(id)a0;
- (void)selfClickLoadingButtonWithEventData:(id)a0;
- (void)selfCancelStashedClickEventWithEventData:(id)a0;
- (void)selfClickBuyNowButtonWithEventData:(id)a0;
- (void)selfClickConfirmButtonWithEventData:(id)a0;
- (void)selfAddToCartWithEventData:(id)a0;
- (void).cxx_destruct;

@end
