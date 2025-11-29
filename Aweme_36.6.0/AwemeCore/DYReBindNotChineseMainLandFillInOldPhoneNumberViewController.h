@class DYReBindNotChineseMainLandFillInOldPhoneNumberViewModel, NSString, DYRouterModel, DYFillInPhoneNumberView;

@interface DYReBindNotChineseMainLandFillInOldPhoneNumberViewController : UIViewController <AWEViewControllerProtocol>

@property (retain, nonatomic) DYFillInPhoneNumberView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (retain, nonatomic) DYReBindNotChineseMainLandFillInOldPhoneNumberViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeVC;
- (void)backAction:(id)a0;
- (void)setupBinding;
- (void)skipAction;
- (void)callBackWithParams:(id)a0;
- (void)handleSwipeFrom:(id)a0;
- (void)showNewPhoneNumberPage;
- (void)showNextPage;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)nextAction;

@end
