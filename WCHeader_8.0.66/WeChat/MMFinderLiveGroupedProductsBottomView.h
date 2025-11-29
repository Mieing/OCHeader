@class UILabel, MMFinderLiveGroupedProductsViewModel, MMUIButton;

@interface MMFinderLiveGroupedProductsBottomView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MMUIButton *routerButton;
@property (retain, nonatomic) MMFinderLiveGroupedProductsViewModel *viewModel;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithViewModel:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
