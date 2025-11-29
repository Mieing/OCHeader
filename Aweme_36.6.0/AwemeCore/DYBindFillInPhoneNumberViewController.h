@class NSString, DYFillInPhoneNumberView, DYBindFillInPhoneNumberViewModel;

@interface DYBindFillInPhoneNumberViewController : UIViewController <AWEViewControllerProtocol, AWEUserMessage, AWETuringMessage>

@property (retain, nonatomic) DYFillInPhoneNumberView *uiView;
@property (nonatomic) BOOL isFromQuickBind;
@property (retain, nonatomic) DYBindFillInPhoneNumberViewModel *viewModel;
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
- (id)initWithIsFromQuickBind:(BOOL)a0;
- (void)closeRebindVC;
- (void)showNextPage;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)nextAction;
- (void)track;

@end
