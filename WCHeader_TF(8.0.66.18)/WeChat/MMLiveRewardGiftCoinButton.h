@class MMUIActivityIndicatorView, UIImageView, UIView;

@interface MMLiveRewardGiftCoinButton : MMUIButton

@property (retain, nonatomic) UIView *loadingContainerView;
@property (retain, nonatomic) UIView *loadingBkgView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIImageView *chevronView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLoadingView;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
