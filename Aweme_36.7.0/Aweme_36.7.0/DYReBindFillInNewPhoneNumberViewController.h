@class NSString, DYRouterModel, DYReBindFillInNewPhoneNumberViewModel, DYFillInPhoneNumberView;

@interface DYReBindFillInNewPhoneNumberViewController : UIViewController <AWEViewControllerProtocol, AWETuringMessage>

@property (retain, nonatomic) DYFillInPhoneNumberView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property BOOL isSecondChance;
@property (retain, nonatomic) DYReBindFillInNewPhoneNumberViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (id)rebindRouterParams;
- (id)uidType;
- (void)closeRebindVC;
- (BOOL)isSafeMobileForNonBusinessAccount;
- (id)subTitleLabelText;
- (id)bindChannel;
- (void)trackBindVerifyBack;
- (void)showNextPage;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;
- (void)nextAction;
- (id)titleLabelText;

@end
