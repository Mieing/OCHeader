@class UILabel, IESECVideoPriceView;

@interface IESECPriceInfoComponentViewV3 : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECVideoPriceView *priceView;
@property (retain, nonatomic) UILabel *salesLabel;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (void)updateSalesLabelWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)updatePriceViewWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)setUpUI;

@end
