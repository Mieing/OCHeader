@class LOTAnimationView, UILabel;

@interface AWERVLongPressGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *longPressLottieView;
@property (retain, nonatomic) UILabel *guideLabel;

- (void)showGuideOnView:(id)a0;
- (void)hideGuideIfNeed;
- (void)resetLongPressGuide;
- (void)setupLongPressLottieView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
