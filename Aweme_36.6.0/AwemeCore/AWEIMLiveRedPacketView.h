@class LOTAnimationView, AWEIMDouyinRedPacketView, UILabel, UIView;

@interface AWEIMLiveRedPacketView : UIView

@property (retain, nonatomic) UIView *layoutContainerView;
@property (retain, nonatomic) UILabel *liveStateLabel;
@property (retain, nonatomic) LOTAnimationView *livingLottieView;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) AWEIMDouyinRedPacketView *redView;

- (void)p_addGesture;
- (void)p_addSubViews;
- (void)p_constraintSubViews;
- (void)p_onTapCard;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
