@class NSString, DYRouterModel, DYFillInCodeView, DYResetPasswordFillInCodeViewModel;

@interface DYResetPasswordFillInCodeViewController : UIViewController <AWEViewControllerProtocol, AWETuringMessage>

@property (retain, nonatomic) DYResetPasswordFillInCodeViewModel *viewModel;
@property (retain, nonatomic) DYFillInCodeView *uiView;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) DYRouterModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inLoginProcedure;
- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (id)initWithPassword:(id)a0 context:(id)a1;
- (void)sendSMSCodeAction;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)fetchData;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)nextAction;

@end
