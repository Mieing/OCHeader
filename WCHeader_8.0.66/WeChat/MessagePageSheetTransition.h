@class NSString, MessagePageSheetPresentationController;

@interface MessagePageSheetTransition : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) MessagePageSheetPresentationController *presentationController;
@property (readonly, nonatomic) BOOL shouldCallbackAtPageSheetAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callFromViewControllerDisappear;
- (void)callFromViewControllerAppear;
- (void)onPageSheetWillClose;
- (void)onPageSheetDidDisappear;
- (void)onPageSheetDidAppear;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void).cxx_destruct;

@end
