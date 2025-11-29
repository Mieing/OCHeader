@class NSString, UIImageView;
@protocol VoIPMainWindowDelegate;

@interface VoIPMainWindow : MMWindow <VoIPUIManagerWindowInfo>

@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, nonatomic) unsigned long long lastScene;
@property (readonly, nonatomic) unsigned long long animateStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImageView *m_blurView;
@property (nonatomic) BOOL m_hasStartQuitAnimation;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long lastScene;
@property (nonatomic) unsigned long long animateStatus;
@property (weak, nonatomic) id<VoIPMainWindowDelegate> m_mainWindowDelegate;
@property (readonly, nonatomic) BOOL isExtending;
@property (nonatomic) BOOL shouldIgnoreExtendFromCollapseFirstStepAnimation;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rootViewController:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)hideWithAnimation;
- (void)showWithAnimation;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)extendWithCompletion:(id /* block */)a0 isAnimated:(BOOL)a1;
- (void)extendWithAnimation;
- (void)collapseWithNotAnimation;
- (void)_slipCollapseWhenConnectingInVideoModeWithAnimation;
- (void)_slipCollapseWithAnimation:(id)a0;
- (void)slipCollapseWithAnimation:(id)a0 isIgnoringSnapshot:(BOOL)a1;
- (void)_collapseWhenConnectingInVideoModeWithAnimation;
- (void)_collapseWithAnimation;
- (void)collapseWithAnimationIsIgnoringSnapshot:(BOOL)a0;
- (void)extendFromCollapseWithAnimationIsIgnoringSnapshot:(BOOL)a0;
- (void)_extendFromCollapseWhenConnectingInVideoModeWithAnimated:(BOOL)a0;
- (void)_extendFromCollapseWithAnimated:(BOOL)a0;
- (void)extendFromCollapseWithAnimated:(BOOL)a0 isIgnoringSnapshot:(BOOL)a1;
- (void)quitAnimtedWithCompletion:(id /* block */)a0 delay:(float)a1;
- (void)quitWithoutAnimation;
- (void)quitWithoutAnimationWithCompletion:(id /* block */)a0 delay:(float)a1;
- (void)quitAnimated:(BOOL)a0 withCompletion:(id /* block */)a1 delay:(float)a2;
- (void)quitAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (long long)getPreviousOrientation;
- (BOOL)hasStartQuitAnimation;
- (void)collapseWithAnimationDidStopIsIgnoringSnapshot:(BOOL)a0;
- (void)restoreStatusBarColor;
- (void)changeStatusBarColor;
- (void).cxx_destruct;

@end
