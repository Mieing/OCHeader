@class NSString, LOTAnimationView, UIView, UIButton;

@interface AWEFeedLiveMarkHeadGreyView : UIView <AWEFeedLiveMarkViewNewTypeHeadProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) LOTAnimationView *liveAnimationView;
@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) UIView *seperateLine;
@property (nonatomic) BOOL isEnterAnimating;
@property (retain, nonatomic) UIButton *tapArea;
@property (copy, nonatomic) id /* block */ liveTappedBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowGuide;
- (void)startLottieAnimation;
- (void)trackLiveShowStatic;
- (void)endLottieAnimation;
- (void)liveAreaTap;
- (void)setLiveTapBlock:(id /* block */)a0;
- (void)setEnterFrom:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)show;
- (void)setupUI;

@end
