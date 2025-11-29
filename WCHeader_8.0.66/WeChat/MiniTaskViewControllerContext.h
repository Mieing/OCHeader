@class MiniTaskInteractionGuideTransitionContext, MiniTaskTransitionContext;
@protocol UIViewControllerInteractiveTransitioning;

@interface MiniTaskViewControllerContext : NSObject

@property (retain, nonatomic) id<UIViewControllerInteractiveTransitioning> pushInteractionController;
@property (retain, nonatomic) MiniTaskTransitionContext *taskTransitionContext;
@property (retain, nonatomic) MiniTaskInteractionGuideTransitionContext *guideTransitionContext;

- (void).cxx_destruct;

@end
