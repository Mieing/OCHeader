@class UIStackView, IESECGoodsPriceLabel, IESECGoodsPriceDescLabel, UILabel, UIView, IESECGoodsFeedDiscountPriceView;

@interface IESECPriceInfoComponentViewV2 : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *marketPriceLabel;
@property (retain, nonatomic) IESECGoodsPriceDescLabel *priceDescLabel;
@property (retain, nonatomic) IESECGoodsFeedDiscountPriceView *discountPriceView;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *marketContainer;

+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)configUI;
- (void)updateWithParameters:(id)a0;
- (void)configPriceUIV1WithParameters:(id)a0;
- (void)updateSalesLabelWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)configPriceUIV2WithParameters:(id)a0;
- (id)priceLabelTextColor:(id)a0;
- (void).cxx_destruct;

@end
