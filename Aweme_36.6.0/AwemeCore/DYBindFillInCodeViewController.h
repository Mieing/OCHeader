@class DYBindFillInCodeViewModel, NSString, DYRouterModel, DYFillInCodeView;

@interface DYBindFillInCodeViewController : UIViewController <AWEViewControllerProtocol, AWETuringMessage>

@property (retain, nonatomic) DYBindFillInCodeViewModel *viewModel;
@property (retain, nonatomic) DYFillInCodeView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (void)sendSMSCodeAction;
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

@end
