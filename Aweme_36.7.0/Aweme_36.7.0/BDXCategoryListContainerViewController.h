@interface BDXCategoryListContainerViewController : UIViewController

@property (copy) id /* block */ viewWillAppearBlock;
@property (copy) id /* block */ viewDidAppearBlock;
@property (copy) id /* block */ viewWillDisappearBlock;
@property (copy) id /* block */ viewDidDisappearBlock;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
