@class DUXPopover, NSString, AWEUIButton, AWEBatManUIAlertView;

@interface AWEBatManDialogManager : NSObject <UITextViewDelegate>

@property (weak, nonatomic) AWEUIButton *confirmBtn;
@property (copy, nonatomic) id /* block */ onLinkClicked;
@property (copy, nonatomic) id /* block */ onConfirmClicked;
@property (copy, nonatomic) id /* block */ onCancelClicked;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) AWEBatManUIAlertView *alertView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)onCancelClicked:(id)a0;
- (void)internalNormalAlertWithTitle:(id)a0 imageName:(id)a1 content:(id)a2 attributeContent:(id)a3 primaryTitle:(id)a4 secondaryTitle:(id)a5 primaryShowAfterClick:(BOOL)a6 primaryBtnClick:(id /* block */)a7 secondaryBtnClick:(id /* block */)a8 viewToShowAlert:(id)a9;
- (void)showTrialTimeoutAlertWithConfirmBtnClick:(id /* block */)a0 exitBtnClick:(id /* block */)a1 viewToShowAlert:(id)a2;
- (void)internalCommonAgreementAlertWithTitle:(id)a0 content:(id)a1 onLinkClicked:(id /* block */)a2 primaryBtnClick:(id /* block */)a3 secondaryBtnClick:(id /* block */)a4;
- (void)internalExitAlertWithGameIcon:(id)a0 gameName:(id)a1 primaryBtnClick:(id /* block */)a2 secondaryBtnClick:(id /* block */)a3;
- (void)internalFeedbackAlertWithFeedbackList:(id)a0 feedbackBtnClick:(id /* block */)a1 onItemClick:(id /* block */)a2;
- (void)internalAlertWithTitle:(id)a0 imageName:(id)a1 content:(id)a2 gameIcon:(id)a3 gameName:(id)a4 primaryTitle:(id)a5 primaryBtnClick:(id /* block */)a6;
- (void)internalNormalAlertWithTitle:(id)a0 content:(id)a1 primaryBtnTitle:(id)a2 secondaryBtnTitle:(id)a3 primaryBtnClick:(id /* block */)a4 secondaryBtnClick:(id /* block */)a5;
- (void)internalExceptionAlertWithTitle:(id)a0 message:(id)a1 primaryBtnText:(id)a2 primaryShowAfterClick:(BOOL)a3 secondaryBtnText:(id)a4 primaryBtnClick:(id /* block */)a5 secondaryBtnClick:(id /* block */)a6;
- (id)createInternalAlertWithTitle:(id)a0 attributedTitle:(id)a1 imageName:(id)a2 content:(id)a3 primaryTitle:(id)a4 secondaryTitle:(id)a5 primaryShowAfterClick:(BOOL)a6 secondaryShowAfterClick:(BOOL)a7 primaryBtnClick:(id /* block */)a8 secondaryBtnClick:(id /* block */)a9 actionStyle:(long long)a10;
- (id)confirmBtnFactoryWith:(id)a0 click:(id /* block */)a1 isEnbled:(BOOL)a2;
- (id)cancelBtnFactoryWithTitle:(id)a0 click:(id /* block */)a1;
- (void)onConfirmClicked:(id)a0;
- (void)showFreeTrialAlertWithTrialTime:(long long)a0 confirmBtnClick:(id /* block */)a1;
- (void)showUpgradeVipAlertWithVipLevel:(int)a0 trialTime:(long long)a1 isTimeUnlimited:(BOOL)a2 confirmBtnClick:(id /* block */)a3 vipDetailBtnClick:(id /* block */)a4;
- (void)showTrialTimeoutAlertWithRestartBtnClick:(id /* block */)a0 exitBtnClick:(id /* block */)a1 viewToShowAlert:(id)a2;
- (void)showCommonAgreementAlertWithTitle:(id)a0 content:(id)a1 onLinkClicked:(id /* block */)a2 primaryBtnClick:(id /* block */)a3 secondaryBtnClick:(id /* block */)a4;
- (void)showNetworkDetectionWithConfirmBtnClick:(id /* block */)a0 exitBtnClick:(id /* block */)a1;
- (void)showNetworkDetectionWithExitBtnClick:(id /* block */)a0;
- (void)showExitAlertWithFeedbackBtnClick:(id /* block */)a0 exitBtnClick:(id /* block */)a1;
- (void)showExitAlertInQueue:(id /* block */)a0 exitBtnClick:(id /* block */)a1;
- (void)showExitAlertOfAddDeskTopWithGameIcon:(id)a0 gameName:(id)a1 addDesktopBtnClick:(id /* block */)a2 exitBtnClick:(id /* block */)a3;
- (void)showExitAlertWithGameCenterBtnClick:(id /* block */)a0 exitBtnClick:(id /* block */)a1;
- (void)showExitAlertWithConfirmBtnClick:(id /* block */)a0 cancelBtnClick:(id /* block */)a1;
- (void)showFeedbackAlertWithFeedbackList:(id)a0 feedbackBtnClick:(id /* block */)a1 onItemClick:(id /* block */)a2;
- (void)showAddDesktopAlertWithGameIcon:(id)a0 gameName:(id)a1 confirmClick:(id /* block */)a2;
- (void)showAddFavAlertWithConfirmClick:(id /* block */)a0;
- (void)showServiceErrorAlertWithExitBtnClick:(id /* block */)a0;
- (void)showAppointAlert:(id)a0 primaryBtnClick:(id /* block */)a1 secondaryBtnClick:(id /* block */)a2;
- (void)showExitAlertByActionView:(id)a0 primaryBtnClick:(id /* block */)a1 secondaryBtnClick:(id /* block */)a2;
- (void)showRefusePhoneNumberAlertWithPrimaryBtnClick:(id /* block */)a0 secondaryBtnClick:(id /* block */)a1;
- (void)showRefuseRealNameAuthNumberAlertWithPrimaryBtnClick:(id /* block */)a0 secondaryBtnClick:(id /* block */)a1;
- (void)showRefusePrivacyAlertWithPrimaryBtnClick:(id /* block */)a0 secondaryBtnClick:(id /* block */)a1;
- (void)showRefuseLoginAlertWithPrimaryBtnClick:(id /* block */)a0 secondaryBtnClick:(id /* block */)a1;
- (void)showNetWorkErrorAlert:(BOOL)a0 primaryBtnClick:(id /* block */)a1 secondaryBtnClick:(id /* block */)a2;
- (void)showTempUserLoginAlertWithPrimaryBtnClick:(id /* block */)a0 secondaryBtnClick:(id /* block */)a1;
- (void)showAccountRejoinErrorAlertWithPrimaryBtnClick:(id /* block */)a0 secondaryBtnClick:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)isShowing;
- (void)updateContent:(id)a0;
- (void)updateTitle:(id)a0;

@end
