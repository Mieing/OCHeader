@class NSArray, UILabel, UIView, CSJNumerAnimationLabel;

@interface CSJJumpLoadingPageView : CSJBaseLoadingPageView {
    BOOL _isPortrait;
}

@property (retain, nonatomic) UIView *layersContainerView;
@property (copy, nonatomic) NSArray *animationLayers;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) CSJNumerAnimationLabel *progressLabel;
@property (retain, nonatomic) UILabel *percentLabel;

- (void)p_addCorners:(unsigned long long)a0 withView:(id)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPortrait;
- (void)layoutSubviews;
- (void)setIsPortrait:(BOOL)a0;

@end
