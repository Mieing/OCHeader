@class UIColor, UIImageView, CAShapeLayer, UILabel, UIView;

@interface MMSightRecordView : UIView

@property (retain, nonatomic) UIView *outerDotBg;
@property (retain, nonatomic) UIView *outerDotBlurBg;
@property (retain, nonatomic) UIView *outerDot;
@property (retain, nonatomic) UIView *innerDot;
@property (retain, nonatomic) UILabel *timerTextLabel;
@property (retain, nonatomic) UIImageView *timerCancellerIcon;
@property (retain, nonatomic) CAShapeLayer *outerDotLayer;
@property (nonatomic) long long style;
@property (nonatomic) BOOL delayAnimationOnlyForNormalState;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIColor *outerBgColor;
@property (retain, nonatomic) UIColor *innerBgColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)showTimerSec:(long long)a0;
- (void)hideTimerSec;
- (void)setupSubViews;
- (void)stateTransitionAnimation;
- (id)radiusAnimationFrom:(double)a0 to:(double)a1;
- (id)frameAnimationFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 to:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getOuterBgColor;
- (id)getInnerBgColor;
- (void).cxx_destruct;

@end
