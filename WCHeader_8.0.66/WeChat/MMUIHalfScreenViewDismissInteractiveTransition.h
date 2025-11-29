@class UIPercentDrivenInteractiveTransition;
@protocol MMUIHalfScreenViewDismissInteractiveTransitionDelegate;

@interface MMUIHalfScreenViewDismissInteractiveTransition : NSObject

@property (readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition;
@property (readonly, nonatomic) BOOL isInteracting;
@property (nonatomic) double interactivePopProgress;
@property (weak, nonatomic) id<MMUIHalfScreenViewDismissInteractiveTransitionDelegate> delegate;

- (void)handlePopBackInteractivePopGesture:(id)a0;
- (void)handlePopGesWithState:(long long)a0 progress:(double)a1 isSweepFastBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
