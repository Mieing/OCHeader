@class PAGView, UIView;

@interface MMBGMCoverImageView : MMWebImageView

@property (retain, nonatomic) UIView *curMaskView;
@property (retain, nonatomic) PAGView *dotPagView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimation;
- (void)stopAnimation;
- (void)initView;
- (void)initMaskView;
- (void)initDotPagView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
