@class DUXAlertDialog, AWEUserLoginBaseViewModel, AWEUserVerificationCodeInputView, NSString, DUXContentSheet, DYPhoneNumberModel;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginVerificationCodeComponent : NSObject <DUXAlertDialogDelegate, DUXSheetDelegate, AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserVerificationCodeInputView *gridCodeView;
@property (retain, nonatomic) DUXAlertDialog *dialog;
@property (retain, nonatomic) NSString *dialogTitle;
@property (nonatomic) long long reSendCodeCount;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumberModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidClickMaskArea:(id)a0;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sendVoiceCodePanelCancelBtnClick;
- (void)sendVoiceCodePanelSendBtnClick;
- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)requestSendVerification;
- (void)sendCodeButtonClick;
- (void)notReceiveVerification:(id)a0;
- (void)trackFillVerificationNumber:(BOOL)a0;
- (void)showCheckPhonePanel;
- (void)requestSendCode;
- (void)showPadCheckPhonePanel;
- (void)showPhoneCheckPhonePanel;
- (void)checkPhoneCancelBtnClick;
- (void)checkPhoneConfirmBtnClick;
- (void)trackLoginPanelTipsShowType:(id)a0 tipsStage:(id)a1 tipsTitle:(id)a2;
- (void)padNotReceiveVerification:(id)a0;
- (void)phoneNotReceiveVerification:(id)a0;
- (void)trackLoginPanelTipsClick:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;

@end
