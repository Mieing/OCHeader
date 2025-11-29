@class UIPercentDrivenInteractiveTransition;
@protocol WCStoryDismissInteractiveTransitionDelegate;

@interface WCStoryDismissInteractiveTransition : NSObject

@property (readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition;
@property (readonly, nonatomic) BOOL isInteracting;
@property (weak, nonatomic) id<WCStoryDismissInteractiveTransitionDelegate> delegate;

- (void)handlePopBackInteractivePopGesture:(id)a0;
- (void)handleDragDownInteractivePopGesture:(id)a0;
- (void)handlePopGesWithState:(long long)a0 progress:(double)a1 isSweepFastBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
