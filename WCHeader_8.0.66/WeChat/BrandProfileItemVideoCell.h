@class BrandProfileItemVideoViewModel, CAGradientLayer, SightIconView, MMUILabel;

@interface BrandProfileItemVideoCell : BrandProfileItemBaseCell

@property (retain, nonatomic) BrandProfileItemVideoViewModel *viewModel;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) CAGradientLayer *maskLayer;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)layoutSmallStyle;
- (void)layoutSingleBigStyle;
- (void)layoutMultiBigStyle;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
