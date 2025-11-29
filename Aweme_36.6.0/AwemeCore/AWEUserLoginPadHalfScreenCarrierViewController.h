@class AWEUserLoginCarrierViewModel, NSString, UIView;

@interface AWEUserLoginPadHalfScreenCarrierViewController : AWEUserLoginBaseViewController <AWEUserLoginHalfScreenTransitionContextProvider>

@property (retain, nonatomic) AWEUserLoginCarrierViewModel *viewModel;
@property (retain, nonatomic) UIView *whiteBackView;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageBtm;
- (BOOL)isHalfScreenPage;
- (id)initWithPhoneModel:(id)a0;
- (void)setupBgViewIfNeed;
- (void)addWhiteBackView;
- (void)addThemeHeaderView;
- (void)setupGeneralLoginComponentView;
- (void)setupContainerView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;

@end
