@interface AWEUIPreviewFloatWindowNavigationController : UINavigationController

@property (copy, nonatomic) id /* block */ appearBlock;
@property (copy, nonatomic) id /* block */ disappearBlock;

- (void)backButtonDidClick;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
