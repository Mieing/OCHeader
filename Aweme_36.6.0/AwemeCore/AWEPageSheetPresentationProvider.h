@class NSString, UIViewController;

@interface AWEPageSheetPresentationProvider : NSObject <UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ configurationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enablePageSheetPresentationForViewController:(id)a0 configurationBlock:(id /* block */)a1;
+ (void)enablePageSheetPresentationForViewController:(id)a0;

- (void)attachToViewController:(id)a0;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)detach;
- (id)interactionControllerForDismissal:(id)a0;

@end
