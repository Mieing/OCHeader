@protocol AWEPadSplitViewService;

@interface AWEPadSplitViewBackgroundViewController : UIViewController

@property (weak, nonatomic) id<AWEPadSplitViewService> service;
@property (copy, nonatomic) id /* block */ didLayoutSubviewsBlock;
@property (copy, nonatomic) id /* block */ didAppearBlock;
@property (copy, nonatomic) id /* block */ didDisappearBlock;
@property (copy, nonatomic) id /* block */ willAppearBlock;
@property (copy, nonatomic) id /* block */ viewWillTransitionBlock;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;

@end
