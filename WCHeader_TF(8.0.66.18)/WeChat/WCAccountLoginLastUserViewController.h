@class NSString, WCButtonListView, UIImageView, UIButton, WCRedesignTextItem, NSMutableArray, WCRedesignVerifyCodeTextItem, MMUILabel, MMUIButton;
@protocol WCAccountLoginLastUserViewControllerDelegate;

@interface WCAccountLoginLastUserViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate> {
    id<WCAccountLoginLastUserViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *supportLoginTypes;
@property (nonatomic) unsigned long long currentLoginType;
@property (retain, nonatomic) NSMutableArray *moreButtonTypes;
@property (retain, nonatomic) NSMutableArray *switchLoginTypeWordings;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *switchButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIButton *bothDeviceButton;
@property (retain, nonatomic) UIButton *voicePrintButton;
@property (retain, nonatomic) UIButton *voicePrintSwitchButton;
@property (retain, nonatomic) WCRedesignTextItem *passwordTextItem;
@property (retain, nonatomic) WCButtonListView *bottomButtonView;
@property (retain, nonatomic) WCRedesignVerifyCodeTextItem *verifyCodeTextItem;
@property (nonatomic) long long m_iCount;
@property (nonatomic) BOOL noPasswordLoginError;
@property (readonly, nonatomic) BOOL isUsingPhoneNumberVerifyCodeLoginType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)initCommonView;
- (void)initHeaderView;
- (void)initVoicePrintView;
- (void)initPasswordView;
- (void)initVerifyCodeView;
- (void)initBottomButtonView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)onNoPasswordLoginError;
- (void)onSwitchPasswordInput;
- (void)setDelegate:(id)a0;
- (void)onMore;
- (BOOL)checkDebugCommand;
- (void)onNext;
- (void)onBothDeviceClicked;
- (void)onResendClicked;
- (void)startTimer;
- (void)refreshView;
- (id)checkDone;
- (BOOL)isLastLoginAccountTypePhone;
- (BOOL)isLastQQLogin;
- (id)getDisplayLoginName;
- (id)getDisplayPhoneNumber;
- (id)getSwitchButtonTitleForLoginType:(unsigned long long)a0;
- (id)getSwitchButtonTitleWithCurrentLoginType:(unsigned long long)a0;
- (void)onSwitch;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void).cxx_destruct;

@end
