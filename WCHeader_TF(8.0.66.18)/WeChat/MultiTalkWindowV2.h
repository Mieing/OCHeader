@class UIImageView, NSString, MultiTalkMonoMsg;
@protocol MultiTalkMainWindowDelegate;

@interface MultiTalkWindowV2 : MMWindow <MultiTalkWindowProtocol>

@property (retain, nonatomic) UIImageView *m_blurView;
@property (nonatomic) BOOL m_hasStartQuitAnimation;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long animateStatus;
@property (nonatomic) BOOL noNeedAnimationFromStart;
@property (retain, nonatomic) MultiTalkMonoMsg *m_monoMsg;
@property (weak, nonatomic) id<MultiTalkMainWindowDelegate> m_mainWindowDelegate;
@property (readonly, nonatomic) BOOL isExtending;
@property (nonatomic) BOOL shouldIgnoreExtendFromCollapseFirstStepAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRootViewController:(id)a0;
- (id)initWithAnimation:(BOOL)a0;
- (id)init;
- (void)commonSetup;
- (void)dealloc;
- (BOOL)animateAtInit;
- (void)hideWithAnimation;
- (void)showWithAnimation;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)extendWithCompletion:(id /* block */)a0 isAnimated:(BOOL)a1;
- (void)extendWithAnimation;
- (void)collapseWithNotAnimation;
- (void)slipCollapseWithAnimation:(id)a0;
- (void)collapseWithAnimation;
- (void)extendFromCollapseWithAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalScreenBounds;
- (void)extendFromCollapseWithAnimated:(BOOL)a0;
- (void)quitAnimtedWithCompletion:(id /* block */)a0 delay:(float)a1;
- (void)quitWithAnimation;
- (void)quitWithoutAnimation;
- (void)quitAnimated:(BOOL)a0 withCompletion:(id /* block */)a1 delay:(float)a2;
- (void)quitAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (long long)getPreviousOrientation;
- (BOOL)hasStartQuitAnimation;
- (void)collapseWithAnimationDidStop;
- (void)restoreStatusBarColor;
- (void)changeStatusBarColor;
- (void).cxx_destruct;

@end
