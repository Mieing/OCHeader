@class UILabel, UIImageView, IESECGradientView;

@interface IESECGoodsFeedDiversionBannerComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) UILabel *diversionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) IESECGradientView *gradientView;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateGradientColors:(id)a0;
- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)openMarket;
- (void).cxx_destruct;
- (void)setupUI;

@end
