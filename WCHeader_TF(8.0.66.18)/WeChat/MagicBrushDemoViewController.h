@class MagicBrushViewDelegateProxy, MagicBrushDemoLogic, UIView, UIButton;

@interface MagicBrushDemoViewController : MMUIViewController

@property (retain, nonatomic) UIView *contentContainer;
@property (nonatomic) unsigned long long incButtonTag;
@property (retain, nonatomic) UIButton *testSimpleCanvas;
@property (retain, nonatomic) UIButton *testListCanvas;
@property (retain, nonatomic) UIButton *testPublicService;
@property (retain, nonatomic) UIButton *testExternalView;
@property (retain, nonatomic) UIButton *testNewFullPage;
@property (nonatomic) BOOL isFullPage;
@property (retain, nonatomic) MagicBrushDemoLogic *logic;
@property (retain, nonatomic) MagicBrushViewDelegateProxy *viewDelegateProxy;

- (id)initWithIsFullPage:(BOOL)a0;
- (id)createButton:(id)a0 eventTouchUpInside:(id /* block */)a1;
- (void)viewDidLoad;
- (BOOL)shouldHideNavigationBar;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
