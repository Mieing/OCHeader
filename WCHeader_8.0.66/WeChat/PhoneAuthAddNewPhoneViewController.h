@class UIView, WAReportPhoneAuthActionItem, NSArray, NSString, PhoneAuthManagePhoneLogic, UIButton, WCAccountTextFieldItem, MMUICellSwitch, UILabel;

@interface PhoneAuthAddNewPhoneViewController : MMUIViewController <WCBaseInfoItemDelegate, PhoneAuthManagePhoneLogicOperationDelegate>

@property (retain, nonatomic) UIView *phoneNumberArea;
@property (retain, nonatomic) UIView *phoneNumberAreaTopLine;
@property (retain, nonatomic) UILabel *phoneTitleLabel;
@property (retain, nonatomic) WCAccountTextFieldItem *phoneNumberTF;
@property (retain, nonatomic) UIButton *resendButton;
@property (retain, nonatomic) UIView *phoneNumberAreaBottomLine;
@property (retain, nonatomic) UIView *confirmCodeArea;
@property (retain, nonatomic) UILabel *confirmCodeTitleLabel;
@property (retain, nonatomic) WCAccountTextFieldItem *confirmCodeTF;
@property (retain, nonatomic) UIView *confirmCodeAreaBottomLine;
@property (retain, nonatomic) UIView *savePhoneArea;
@property (retain, nonatomic) UILabel *savePhoneTitleLabel;
@property (retain, nonatomic) MMUICellSwitch *savePhoneSwitch;
@property (retain, nonatomic) UIView *savePhoneAreaBottomLine;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL phoneNumberEntered;
@property (nonatomic) BOOL confirmCodeRequested;
@property (nonatomic) BOOL confirmCodeEntered;
@property (retain, nonatomic) PhoneAuthManagePhoneLogic *logic;
@property (nonatomic) unsigned long long countDown;
@property (retain, nonatomic) NSArray *phoneNumberList;
@property (retain, nonatomic) WAReportPhoneAuthActionItem *actionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLogic:(id)a0;
- (void)viewDidLoad;
- (void)initSubViews;
- (void)initCustomNavigationBar;
- (void)updateNavigationItems;
- (void)refreshResendButtonState;
- (void)refreshConfirmButtonState;
- (void)startTimer;
- (void)updateSendVerifyCodeButton;
- (void)onReturn;
- (void)handleOnReSendButtonEvent:(id)a0;
- (void)handleOnConfirmButtonEvent:(id)a0;
- (void)onTapBGView;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)confirmCodeRequestedSuccess;
- (void)confirmCodeRequestedFailedWithErrorMsg:(id)a0;
- (void)savePhoneSuccess:(id)a0 saveFlag:(BOOL)a1;
- (void)confirmCodeVerifySuccess;
- (void)confirmCodeVerifyFailedWithErrorMsg:(id)a0;
- (void).cxx_destruct;

@end
