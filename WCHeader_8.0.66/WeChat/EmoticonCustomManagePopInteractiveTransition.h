@class UIPercentDrivenInteractiveTransition;
@protocol EmoticonCustomManagePopInteractiveTransitionDelegate;

@interface EmoticonCustomManagePopInteractiveTransition : NSObject

@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition;
@property (weak, nonatomic) id<EmoticonCustomManagePopInteractiveTransitionDelegate> delegate;

- (BOOL)isInteracting;
- (void)handlePopBackInteractivePopGesture:(id)a0;
- (void).cxx_destruct;

@end
