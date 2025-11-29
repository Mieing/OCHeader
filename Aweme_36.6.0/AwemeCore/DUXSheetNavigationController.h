@interface DUXSheetNavigationController : UINavigationController

@property (nonatomic) BOOL shouldEffectPresentingViewController;
@property (nonatomic) BOOL shouldBypassPresentationHook;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;

@end
