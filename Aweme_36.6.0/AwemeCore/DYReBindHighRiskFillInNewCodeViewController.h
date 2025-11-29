@class DYReBindHighRiskFillInCodeViewModel, DYRouterModel, DYFillInCodeView, NSString;

@interface DYReBindHighRiskFillInNewCodeViewController : UIViewController <AWEViewControllerProtocol>

@property (retain, nonatomic) DYReBindHighRiskFillInCodeViewModel *viewModel;
@property (retain, nonatomic) DYFillInCodeView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (nonatomic) BOOL isSecondChance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeVC;
- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)skipAction;
- (void)sendSMSCodeAction;
- (void)callBackWithParams:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)fetchData;
- (void)viewDidLoad;
- (void)setupUI;
- (void)nextAction;

@end
