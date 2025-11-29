@class UIStackView, IESECGoodsPriceLabel, UIView, IESECGoodsDiscountPriceView, UILabel;

@interface IESECPriceInfoComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *marketPrice;
@property (retain, nonatomic) IESECGoodsPriceLabel *startPrice;
@property (retain, nonatomic) UIView *marketPriceContainerView;
@property (retain, nonatomic) IESECGoodsDiscountPriceView *discountPrice;
@property (retain, nonatomic) UIView *spaceView;
@property (retain, nonatomic) UILabel *salesLabel;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (void)updateSalesLabelWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)setInternalFeedStyle;
- (void)setMallImmersionStyle;
- (void).cxx_destruct;

@end
