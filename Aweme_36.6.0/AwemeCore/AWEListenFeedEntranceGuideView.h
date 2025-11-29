@class LOTAnimationView, UIImageView, UILabel, UIView;

@interface AWEListenFeedEntranceGuideView : UIView

@property (retain, nonatomic) UIView *guideMaskView;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL willDismiss;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;

- (void)startCountDown;
- (void)startRotateImageView;
- (void)coreDismiss;
- (void)initSubviews;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)initConstraints;

@end
