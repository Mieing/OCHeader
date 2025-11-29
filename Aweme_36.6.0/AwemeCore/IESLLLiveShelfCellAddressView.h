@class UIStackView, CAGradientLayer, UIImageView, UIView, UILabel;

@interface IESLLLiveShelfCellAddressView : UIView

@property (retain, nonatomic) UIStackView *poiDetailView;
@property (retain, nonatomic) UIStackView *addressStackView;
@property (retain, nonatomic) UIView *locationIconBackgoundView;
@property (retain, nonatomic) UIImageView *locationIconView;
@property (retain, nonatomic) CAGradientLayer *locationIconViewGradientLayer;
@property (retain, nonatomic) CAGradientLayer *distanceBackgroundGradientLayer;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UILabel *customLabel;
@property (retain, nonatomic) UILabel *calculateLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ updateIsTextBlock;

- (void)configShopCountStrategyWithShopsNumber:(long long)a0 address:(id)a1;
- (void)gradientLayerWithStartPointX:(double)a0 endPointX:(double)a1 startColor:(id)a2 endColor:(id)a3;
- (void)setupWithDistance:(id)a0 address:(id)a1 shopsNumber:(unsigned long long)a2;
- (void)setArrowViewHidden:(BOOL)a0;
- (void)updateLocationStyle:(unsigned long long)a0 locationIconHiddenState:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
