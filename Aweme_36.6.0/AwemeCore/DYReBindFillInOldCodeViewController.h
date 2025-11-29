@class DYRebindFillInOldCodeView, NSString, DYRouterModel, DYReBindFillInOldCodeViewModel;

@interface DYReBindFillInOldCodeViewController : UIViewController <AWEViewControllerProtocol, AWETuringMessage>

@property (retain, nonatomic) DYRebindFillInOldCodeView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (nonatomic) BOOL shouldIgnorButtonClick;
@property (retain, nonatomic) DYReBindFillInOldCodeViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (void)sendSMSCodeAction;
- (id)uidType;
- (void)showNextPage:(id)a0;
- (void)requestUnbind;
- (void)phoneNotUsableAction;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)fetchData;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;
- (void)nextAction;
- (void)track;
- (void)showAlert:(BOOL)a0;

@end
