@interface AWENewCoverEditViewController : ACCViewController

- (void)buildEditSession;
- (id)initWithBusinessConfiguration:(id)a0;
- (id)editService;
- (void)popSelf;
- (id)handleTargetViewControllerInputData;
- (void)prepareForLoadComponent;
- (void)beforeLoadLazyComponent;
- (id)creatComponentManager;
- (id)videoCoverEditService;
- (BOOL)userVideoCoverRenderOptimize;
- (void)configWithInputData:(id)a0;
- (void)close;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
