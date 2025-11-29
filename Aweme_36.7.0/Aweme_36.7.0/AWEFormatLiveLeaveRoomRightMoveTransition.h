@class NSString, UIViewController, UIView;

@interface AWEFormatLiveLeaveRoomRightMoveTransition : NSObject <CAAnimationDelegate, AWETransitionContextProvider>

@property (weak, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) UIViewController *toVC;
@property (weak, nonatomic) id fromCP;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *snapshotTabbar;
@property (nonatomic) double tabBarAlpha;
@property (nonatomic) BOOL tabBarHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)allowTriggerDirectionForContext:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
- (void)clearSession;

@end
