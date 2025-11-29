@class AWEHPEdgeBackConfig, NSString;

@interface AWEHPEdgeBackManager : NSObject <AWETransitionInterceptorProtocol>

@property (nonatomic) BOOL hasSetup;
@property (retain, nonatomic) AWEHPEdgeBackConfig *config;
@property (nonatomic) BOOL isKeyBoardShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forbidTrackPages;
+ (id)animationTypeWithProviderClass:(id)a0;
+ (id)sharedInstance;

- (void)viewControllerTransitionNotification:(id)a0;
- (void)trySetup;
- (void)onShowKeyboardWithNotification:(id)a0;
- (void)onHideKeyboardWithNotification:(id)a0;
- (void)trackPagePopQuitWithFromVC:(id)a0 toVC:(id)a1 quitMethod:(id)a2 animationType:(id)a3 touchLocation:(struct CGPoint { double x0; double x1; })a4;
- (BOOL)fullScreenPanGestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)fullScreenPanGestureRecognizer:(id)a0 didEndWithShouldComplete:(BOOL)a1 transitionContext:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)setupConfig;

@end
