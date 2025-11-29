@class UIScrollView, IESECSlidingTabContainerView;

@interface IESECTabElementLifecycleViewController : UIViewController

@property (weak, nonatomic) IESECSlidingTabContainerView *slidingContainer;
@property (retain, nonatomic) UIScrollView *contentScrollView;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
