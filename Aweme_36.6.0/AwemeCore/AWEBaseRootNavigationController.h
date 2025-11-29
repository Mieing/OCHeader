@protocol AWEBaseRootNavigationControllerDelegate;

@interface AWEBaseRootNavigationController : UINavigationController

@property (weak, nonatomic) id<AWEBaseRootNavigationControllerDelegate> awe_additionalDelegate;

- (void)setNavigationTransitionFlagAnimated:(BOOL)a0;
- (void)monitorWithType:(id)a0 fromVC:(id)a1 toVC:(id)a2;
- (void)setNavigationPopTransitionFlagAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)setNavigationBarHidden:(BOOL)a0;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
