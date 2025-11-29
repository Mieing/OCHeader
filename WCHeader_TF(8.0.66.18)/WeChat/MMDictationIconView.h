@class MMLoadingIndicatorView, UIImageView, UIImage, UIView, MMUIButton;

@interface MMDictationIconView : UIView

@property (retain, nonatomic) MMUIButton *iconButton;
@property (retain, nonatomic) UIImage *customStaticIconImage;
@property (retain, nonatomic) UIImage *staticIconImage;
@property (retain, nonatomic) UIImageView *staticIcon;
@property (retain, nonatomic) UIImageView *preparingIcon;
@property (retain, nonatomic) UIImageView *activeIcon;
@property (retain, nonatomic) UIView *animationInnerCircle;
@property (retain, nonatomic) UIView *animationOuterCircle;
@property (nonatomic) int outerCircleDelayAnimatingCount;
@property (retain, nonatomic) MMLoadingIndicatorView *loadingIndicator;
@property (nonatomic) unsigned long long iconState;
@property (nonatomic) BOOL isAnimating;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 customIconImage:(id)a1;
- (void)layoutSubviews;
- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)delayToLoading;
- (void)changeFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)displayRecordingAnimation:(float)a0;
- (void)displayPeakPower:(float)a0 MaxRadius:(double)a1 MinRadius:(double)a2 BaseRadius:(double)a3 UIView:(id)a4;
- (void).cxx_destruct;

@end
