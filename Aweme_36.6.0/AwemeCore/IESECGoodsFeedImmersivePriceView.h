@class UIStackView, IESECGoodsPriceLabel, UILabel, UIView, IESECGoodsFeedDiscountPriceView;

@interface IESECGoodsFeedImmersivePriceView : IESECGoodsFeedImmersiveBaseView

@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *marketPriceLabel;
@property (retain, nonatomic) IESECGoodsFeedDiscountPriceView *discountPriceView;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *marketContainer;

+ (double)Height;

- (void)configUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
