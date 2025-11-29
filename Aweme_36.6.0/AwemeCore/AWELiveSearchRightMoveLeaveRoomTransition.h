@class NSString, UIViewController, UIView;

@interface AWELiveSearchRightMoveLeaveRoomTransition : NSObject <CAAnimationDelegate, AWETransitionContextProvider>

@property (weak, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) UIViewController *toVC;
@property (weak, nonatomic) id fromCP;
@property (weak, nonatomic) id toCP;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (weak, nonatomic) UIView *snapshotTabbar;
@property (nonatomic) double tabBarAlpha;
@property (nonatomic) BOOL tabBarHidden;
@property (nonatomic) double lastScale;
@property (nonatomic) struct CGPoint { double x; double y; } lastTranslation;
@property (nonatomic) long long offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (double)progressForCurrentPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isCGRectSafe:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreTabBarState;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
- (void)clearSession;

@end
