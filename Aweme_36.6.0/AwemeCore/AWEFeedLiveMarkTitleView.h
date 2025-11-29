@class CAGradientLayer, NSString, LOTAnimationView, UIView, UILabel, UIButton;

@interface AWEFeedLiveMarkTitleView : UIView <AWEFeedLiveMarkViewNewTypeTitleProtocol>

@property (retain, nonatomic) CAGradientLayer *gradient;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) LOTAnimationView *liveAnimationView;
@property (retain, nonatomic) LOTAnimationView *liveAnimationViewRed;
@property (retain, nonatomic) UILabel *liveTextLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UIButton *tapArea;
@property (copy, nonatomic) id /* block */ liveTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLottieAnimation;
- (void)endLottieAnimation;
- (void)liveAreaTap;
- (void)setLiveTapBlock:(id /* block */)a0;
- (void)resetUIWithFollowStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)show;
- (void)setupUI;

@end
