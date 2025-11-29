@interface AWECornerBarNaviController : UINavigationController

@property (nonatomic) BOOL isEliteVersion;

- (void)buildShapeLayer;
- (id)initWithNibName:(id)a0 bundle:(id)a1 isEliteVersion:(BOOL)a2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
