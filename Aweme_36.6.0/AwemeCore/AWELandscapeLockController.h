@class LOTAnimationView, UIView;

@interface AWELandscapeLockController : AWELandscapeInteractionBaseController

@property (retain, nonatomic) UIView *lockButtonContainer;
@property (retain, nonatomic) LOTAnimationView *animationLockButton;

- (void)trackPlayTime;
- (double)centerYOffset;
- (void)updateLockButtonStatusWithAnimated:(BOOL)a0;
- (void)updateLayoutIfNeededWithAnimated:(BOOL)a0;
- (void)makeALightVibration;
- (void)trackLockButtonClick;
- (void)lockButtonClickAction;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
