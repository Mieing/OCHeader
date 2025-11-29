@class MMUIButton, UIButton, WCButtonListView, WCRedesignButtonItem, NSString, WCAccountNewPhoneVerifyPageView, MMUILabel;
@protocol WCAccountNewPhoneVerifyViewControllerDelegate;

@interface WCAccountNewPhoneVerifyViewController : WCAccountBaseViewController <IAutoVerifySMSExt, UITextFieldDelegate, WCBaseInfoItemDelegate>

@property (nonatomic) unsigned long long page;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCRedesignButtonItem *phoneNumberButtonItem;
@property (retain, nonatomic) WCAccountNewPhoneVerifyPageView *pageView;
@property (retain, nonatomic) MMUIButton *changePageButton;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) WCButtonListView *bottomButtonView;
@property (nonatomic) long long iCount;
@property (weak, nonatomic) id<WCAccountNewPhoneVerifyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)setupWithData:(id)a0;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)initView;
- (void)initBottomButtonView;
- (id)titleForChangePageButton;
- (void)onNext;
- (void)onSwitch;
- (void)switchToPwdLogin;
- (void)switchToVerifyLogin;
- (void)userDidClickBack;
- (void)userDidClickMore;
- (id)checkNext;
- (void)startTimer;
- (void)onResendClicked;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void).cxx_destruct;

@end
