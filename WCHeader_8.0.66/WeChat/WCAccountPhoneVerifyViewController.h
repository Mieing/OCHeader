@class UIButton, WCRedesignVerifyCodeTextItem, NSString, WCRedesignButtonItem, MMUILabel;
@protocol WCAccountPhoneVerifyViewControllerDelegate;

@interface WCAccountPhoneVerifyViewController : WCAccountBaseViewController <IAutoVerifySMSExt, WCBaseInfoItemDelegate, DialCodeHalfScreenViewControllerDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCRedesignButtonItem *phoneNumberButtonItem;
@property (retain, nonatomic) WCRedesignVerifyCodeTextItem *verifyCodeTextItem;
@property (retain, nonatomic) UIButton *submitButton;
@property (weak, nonatomic) id<WCAccountPhoneVerifyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initView;
- (void)onNext;
- (void)onPhoneVerifyBack;
- (void)onPhoneVerifyAgain;
- (void)tryGetVoiceVerifyCode;
- (void)onTapVoiceVerifyCodeButton;
- (void)checkNext;
- (void)startTimer;
- (void)reportTime:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)OnHandleOpenAutoVerifySMS:(id)a0;
- (void)getVoiceVerifyCode:(id)a0;
- (void).cxx_destruct;

@end
