@class AWEUserLoginEmailViewModel, NSString, AWEUserLoginErrorInfoLabel, UIView;

@interface AWEUserLoginHalfScreenPadEmailViewController : AWEUserLoginBaseViewController <AWEUserLoginHalfScreenTransitionContextProvider>

@property (retain, nonatomic) UIView *whiteBackView;
@property (retain, nonatomic) UIView *centerContentView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) AWEUserLoginEmailViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageBtm;
- (void)createContainerView;
- (BOOL)isHalfScreenPage;
- (void)handleKeyboardWillChange:(id)a0;
- (void)addErrorLabel:(id)a0;
- (void)startBind;
- (void)addGeneralOtherComponentView;
- (void)addWhiteBackView;
- (void)addThemeBackgroundView;
- (void)addThemeHeaderView;
- (void)updateContainerViewWithKeyboardHeight:(double)a0;
- (BOOL)isShowTheme;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)hideError;

@end
