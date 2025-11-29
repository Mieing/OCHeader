@class UILabel, IESECVideoPriceView;

@interface IESECGoodsFeedImmersivePriceViewV2 : IESECGoodsFeedImmersiveBaseView

@property (retain, nonatomic) IESECVideoPriceView *priceView;
@property (retain, nonatomic) UILabel *salesLabel;

- (void)configUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
