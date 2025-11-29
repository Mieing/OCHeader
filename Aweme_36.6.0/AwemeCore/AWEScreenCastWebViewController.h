@interface AWEScreenCastWebViewController : AWEWebViewController

@property (nonatomic) unsigned long long lastSupportOrientation;

- (id)init;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)goBack:(id)a0;

@end
