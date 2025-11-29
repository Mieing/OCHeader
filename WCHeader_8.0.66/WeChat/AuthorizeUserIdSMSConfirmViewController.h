@class UIView, NSString, UserIdAuthorizeSmsPageInfo, UIButton, WCAccountTextFieldItem, UserIdAuthorizeSmsPhoneItem, UILabel, WCActionSheet;
@protocol AuthorizeUserIdSMSConfirmDelegate;

@interface AuthorizeUserIdSMSConfirmViewController : MMUIViewController <WCBaseInfoItemDelegate, WCActionSheetDelegate> {
    NSString *_verifyToken;
    WCActionSheet *_actionSheet;
}

@property (retain, nonatomic) UserIdAuthorizeSmsPageInfo *pageInfo;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *selectedPhoneLabel;
@property (retain, nonatomic) UIButton *changePhoneButton;
@property (retain, nonatomic) WCAccountTextFieldItem *confirmCodeTF;
@property (retain, nonatomic) UIButton *resendButton;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UserIdAuthorizeSmsPhoneItem *selectedPhoneItem;
@property (nonatomic) unsigned long long countDown;
@property (weak, nonatomic) id<AuthorizeUserIdSMSConfirmDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSMSPageInfo:(id)a0;
- (void)viewDidLoad;
- (void)onReturn;
- (void)initSubviews;
- (void)onTap:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)fillPageInfo;
- (void)onResendButton:(id)a0;
- (void)onConfirmButton:(id)a0;
- (void)onChangePhoneButton:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)processErrCode:(unsigned int)a0 errMsg:(id)a1;
- (void)showToast:(id)a0 isSuccess:(BOOL)a1;
- (void)showAlarmBoxWithTitle:(id)a0 desc:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)selectPhone:(id)a0;
- (void)startTimer;
- (void)updateSendVerifyCodeButton;
- (void).cxx_destruct;

@end
