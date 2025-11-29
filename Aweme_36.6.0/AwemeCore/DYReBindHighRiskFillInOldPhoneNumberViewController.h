@class DYReBindHighRiskFillInOldPhoneNumberViewModel, DYFillInPhoneNumberView, NSString;

@interface DYReBindHighRiskFillInOldPhoneNumberViewController : UIViewController <AWEViewControllerProtocol>

@property (retain, nonatomic) DYFillInPhoneNumberView *uiView;
@property (retain, nonatomic) DYReBindHighRiskFillInOldPhoneNumberViewModel *viewModel;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)skipAction;
- (void)showNextPage;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)nextAction;

@end
