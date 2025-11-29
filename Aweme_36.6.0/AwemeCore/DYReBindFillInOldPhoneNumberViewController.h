@class NSString, DYReBindFillInOldPhoneNumberViewModel, DYRouterModel, DYRebindFillInOldPhoneNumberView;

@interface DYReBindFillInOldPhoneNumberViewController : UIViewController <AWEViewControllerProtocol, AWEUserMessage, AWETuringMessage>

@property (retain, nonatomic) DYRebindFillInOldPhoneNumberView *uiView;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) DYReBindFillInOldPhoneNumberViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishBindPhone;
- (id)trackParams;
- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (id)rebindRouterParams;
- (id)uidType;
- (void)closeRebindVC;
- (BOOL)isSafeMobileForNonBusinessAccount;
- (void)trackBindClickEventWithType:(id)a0;
- (void)showNewPhoneNumberPage:(id)a0;
- (void)forgetPhoneAction;
- (void)showNextPage;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;
- (void)nextAction;
- (id)titleLabelText;

@end
