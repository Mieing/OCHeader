@class IESECGoodsFeedImmersivePriceViewV2, IESECGoodsFeedImmersivePriceView, IESECGoodsFeedImmersiveBaseView;

@interface IESECGoodsFeedImmersivePriceContainerView : IESECGoodsFeedImmersiveBaseView

@property (retain, nonatomic) IESECGoodsFeedImmersivePriceView *priceView;
@property (retain, nonatomic) IESECGoodsFeedImmersivePriceViewV2 *priceViewV2;
@property (retain, nonatomic) IESECGoodsFeedImmersiveBaseView *currentPriceView;

- (BOOL)useNewPriceView;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
