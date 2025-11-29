@class UINavigationController, MiniTaskNavigationController, MiniTaskTransitionContext;

@interface MinimizeTaskOpenContext : NSObject

@property (retain, nonatomic) UINavigationController *presentingNavController;
@property (retain, nonatomic) MiniTaskNavigationController *containerNavController;
@property (retain, nonatomic) MiniTaskTransitionContext *transitionContext;

- (id)leftEdgePanGestureRecognizer;
- (id)rightEdgePanGestureRecognizer;
- (void).cxx_destruct;

@end
