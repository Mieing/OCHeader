@class UIColor, UIImageView, UILabel, UIView;

@interface BDARVIndicatorLoading : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void)hideLoading;
- (void)showLoadingWithText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 backgroundColor:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (void)startLoadingAnimation;

@end
