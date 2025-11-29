@class NSString, DYResetPasswordFillInPasswordView, DYResetPasswordFillInPasswordViewModel, DYRouterModel;

@interface DYResetPasswordFillInPasswordViewController : UIViewController <AWEViewControllerProtocol>

@property (retain, nonatomic) DYResetPasswordFillInPasswordViewModel *viewModel;
@property (retain, nonatomic) DYResetPasswordFillInPasswordView *uiView;
@property (retain, nonatomic) NSString *passwordType;
@property (retain, nonatomic) DYRouterModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inLoginProcedure;
- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)setupTrackParams;
- (void)trackPasswordEvent:(id)a0 error:(id)a1;
- (void)verifyTicketLogin:(id)a0;
- (void)showNextPage;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)nextAction;
- (void)track;

@end
