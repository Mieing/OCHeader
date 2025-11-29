@class AWEGradientView, AWEMateObdCardViewModel, AWEMateObdCardView, AWEUserRecommendBigCardFooterView, UIView;

@interface AWEMateObdCardContainerView : UIView

@property (retain, nonatomic) AWEMateObdCardViewModel *viewModel;
@property (retain, nonatomic) AWEMateObdCardView *cardView;
@property (retain, nonatomic) AWEUserRecommendBigCardFooterView *footerView;
@property (retain, nonatomic) UIView *slideUpHintView;
@property (retain, nonatomic) AWEGradientView *gradientBGView;
@property (retain, nonatomic) AWEGradientView *defaultBGView;
@property (nonatomic) BOOL isCardDisplaying;

- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
