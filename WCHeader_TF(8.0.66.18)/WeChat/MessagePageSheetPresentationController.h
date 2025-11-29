@interface MessagePageSheetPresentationController : UIPresentationController

@property (nonatomic) BOOL isLifeCycleUnpair;
@property (nonatomic) BOOL isPageSheetWillClose;
@property (nonatomic) BOOL shouldCallbackAtPageSheetAppear;

- (void)callFromViewControllerDisappear;
- (void)callFromViewControllerAppear;
- (void)onPageSheetWillClose;
- (void)onPageSheetDidAppear;
- (void)onPageSheetDidDisappear;
- (void)dismissalTransitionDidEnd:(BOOL)a0;

@end
