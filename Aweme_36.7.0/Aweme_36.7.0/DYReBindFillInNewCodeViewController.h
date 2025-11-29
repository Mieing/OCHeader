@class DYReBindFillInNewCodeViewModel, NSString, DYRouterModel, DYFillInCodeView;

@interface DYReBindFillInNewCodeViewController : UIViewController <AWEViewControllerProtocol, AWETuringMessage>

@property (retain, nonatomic) DYReBindFillInNewCodeViewModel *viewModel;
@property (retain, nonatomic) DYFillInCodeView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (nonatomic) BOOL isSecondChance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (void)sendSMSCodeAction;
- (void)__resetPassword:(id)a0;
- (void)__closeRebindVC:(id)a0;
- (BOOL)isSafeMobileForAWEUserPageUseSceneVerifySafePhone;
- (void)__helpAction;
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

@end
