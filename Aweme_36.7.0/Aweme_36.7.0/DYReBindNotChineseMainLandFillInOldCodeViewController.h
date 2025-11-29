@class DYReBindNotChineseMainLandFillInOldCodeViewModel, DYRouterModel, DYRebindFillInOldCodeView;

@interface DYReBindNotChineseMainLandFillInOldCodeViewController : UIViewController

@property (retain, nonatomic) DYRebindFillInOldCodeView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (nonatomic) BOOL shouldIgnorButtonClick;
@property (retain, nonatomic) DYReBindNotChineseMainLandFillInOldCodeViewModel *viewModel;

- (void)closeVC;
- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)skipAction;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (void)sendSMSCodeAction;
- (void)callBackWithParams:(id)a0;
- (void)showNextPage:(id)a0;
- (void)phoneNotUsableAction;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)fetchData;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)nextAction;
- (void)track;
- (void)showAlert:(BOOL)a0;

@end
