@class UIImageView, MMUIActivityIndicatorView;

@interface MFBannerBtn : UIButton <MFBanner>

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;

- (void)setRightArrowHidden:(BOOL)a0;
- (void)setRightArrowImage:(id)a0;
- (void)setArrowImageClickable:(BOOL)a0;
- (void)onArrowImageClick:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleIcon:(id)a0;
- (void)setTitleIcon:(id)a0 color:(id)a1;
- (void)setTitleIcon:(id)a0 color:(id)a1 horizonFlip:(BOOL)a2;
- (void)setTitleIconImage:(id)a0;
- (void)setTitleText:(id)a0;
- (void)setTitleTextColor:(id)a0;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)makeActivityView;
- (void)removeActivityView;
- (void).cxx_destruct;

@end
