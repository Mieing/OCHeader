@class AWEUserLoginBaseViewModel, AWEUserSendCodeModel, NSString, AWEUserLoginSMSResendCodeView;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserResendButtonComponent : NSObject <AWEUserContainerResendCodeComponentProtocol, AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserLoginSMSResendCodeView *resendView;
@property (retain, nonatomic) AWEUserSendCodeModel *codeModel;
@property (nonatomic) long long verificationStatus;
@property (nonatomic) BOOL buttonClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)updateVerificationStatus:(long long)a0;
- (void)startBind;
- (BOOL)isForModifyProcess;
- (void)resendCodeButtonClick;
- (void)requestSendVerificationForLoginProcess;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;

@end
