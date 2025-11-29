@class UIView, DUXAlertDialog, AWEProfileFrequencyInfoModel, NSString, AWEProtectNickNameInvalidView, UIButton, DUXVacantView, UITextField, DUXButton, AWEProtectNickNameProgressingView, UILabel, DUXCheckBox;
@protocol AWEUserNickNameProtectViewControllerProtocol;

@interface AWEUserNickNameProtectViewController : UIViewController <UITextFieldDelegate, AWERouterViewControllerProtocol, AWEProtectNickNameProgressingViewProtocol, AWEProtectNickNameInvalidViewProtocol>

@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *checkBoxLabel;
@property (retain, nonatomic) DUXButton *submitButton;
@property (retain, nonatomic) UITextField *protectNickNameTextField;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *preTitleLabel;
@property (retain, nonatomic) AWEProtectNickNameProgressingView *protectNickNameProgressingView;
@property (retain, nonatomic) AWEProtectNickNameInvalidView *protectNickNameInvalidView;
@property (retain, nonatomic) DUXAlertDialog *confirmDialog;
@property (retain, nonatomic) DUXVacantView *networkErrorView;
@property (nonatomic) BOOL shouldIgnoreRequest;
@property (nonatomic) BOOL shouldPopViewController;
@property (retain, nonatomic) AWEProfileFrequencyInfoModel *model;
@property (weak, nonatomic) id<AWEUserNickNameProtectViewControllerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)deleteButtonClicked;
- (long long)maxTextLength;
- (void)checkBoxClicked:(id)a0;
- (void)submitButtonClicked;
- (void)backBtnClicked;
- (void)initConfig;
- (id)numberWithTypeAndLength:(long long)a0;
- (id)initWithFrequencyInfoModel:(id)a0 shouldIgnoreRequest:(BOOL)a1 shouldPopViewController:(BOOL)a2;
- (void)invalidViewCloseButtonAction;
- (void)progressingViewCloseButtonAction;
- (void)updateFrequencyInfo:(id)a0 error:(id)a1;
- (void)setupNetworkErrorPage;
- (void)setProtectNickNameTextFieldText:(id)a0;
- (void)submitInfo;
- (void).cxx_destruct;
- (void)fetchData;
- (void)viewDidLoad;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;

@end
