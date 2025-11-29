@interface WATransferJSAPIBusinessViewController : MMUIViewController

@property (nonatomic) BOOL isDidAppear;
@property (copy, nonatomic) id /* block */ callback;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBar;
- (void)onReturnButtonClicked;
- (void)registerOnceAfterViewDidAppearCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
