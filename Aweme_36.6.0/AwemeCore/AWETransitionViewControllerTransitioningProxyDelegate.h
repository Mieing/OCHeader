@class NSString;
@protocol UIViewControllerTransitioningDelegate;

@interface AWETransitionViewControllerTransitioningProxyDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) id<UIViewControllerTransitioningDelegate> originalDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithDelegate:(id)a0;

- (void).cxx_destruct;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
