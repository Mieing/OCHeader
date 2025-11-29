@class MiniTaskTransitionContext;
@protocol UIViewControllerInteractiveTransitioning;

@interface ChatBotVoIPViewControllerContext : NSObject

@property (retain, nonatomic) id<UIViewControllerInteractiveTransitioning> pushInteractionController;
@property (retain, nonatomic) MiniTaskTransitionContext *taskTransitionContext;

- (void).cxx_destruct;

@end
