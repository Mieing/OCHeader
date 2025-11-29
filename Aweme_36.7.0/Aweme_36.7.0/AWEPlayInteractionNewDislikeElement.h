@class UIButton, NSString, LOTAnimationView, AWEFeedVideoButton, AWEDislikeOsmoticViewModel, UIView;
@protocol AWEFeedVideoButtonProtocol;

@interface AWEPlayInteractionNewDislikeElement : AWEPlayInteractionRightElement <AWERightElementButtonLayout, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEDislikeOsmoticViewModel *viewModel;
@property (retain, nonatomic) LOTAnimationView *normalLikeAnimationView;
@property (retain, nonatomic) LOTAnimationView *cancelLikeAnimationView;
@property (retain, nonatomic) AWEFeedVideoButton *dislikeButton;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIButton<AWEFeedVideoButtonProtocol> *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)isInteractionOptEnable;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (id)aAWEPadModuleAdapter;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)dislikeButtonText;
- (void)setupPadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })a0;
- (void)optimizationFakeClickNewButtonToWithdraw:(id)a0;
- (void)fakeClickNewButtonToWithdraw:(id)a0;
- (void)optimizationFakeCancelDislikeButton:(id)a0;
- (void)fakeClickCancelDislikeButton:(id)a0;
- (id)normalDefaultImageName;
- (id)cancelDefaultImageName;
- (void)layoutLottieView:(id)a0;
- (void)optimizedButtonClicked;
- (void)newButtonClicked;
- (void)cancelDislikeAnimation;
- (void)__playCancelDislikeAnimation:(id /* block */)a0;
- (void)__playDislikeAnimation;
- (void)__stopDislikeAnimations;
- (id)normalSourceName;
- (id)targetBundle;
- (id)cancelSourceName;
- (void)p_buttonClicked;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
