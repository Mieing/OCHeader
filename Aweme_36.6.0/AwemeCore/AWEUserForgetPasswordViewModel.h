@class AWEUserSendCodeModel, NSString, AWEUserComponentSubtitleModel, NSError, AWEUserLoginInputModel;

@interface AWEUserForgetPasswordViewModel : AWEUserContainerBaseViewModel

@property (retain, nonatomic) AWEUserComponentSubtitleModel *customSubtitleModel;
@property (retain, nonatomic) AWEUserSendCodeModel *codeModel;
@property (retain, nonatomic) AWEUserLoginInputModel *inputVerificationModel;
@property (copy, nonatomic) NSString *inputVerification;
@property (retain, nonatomic) NSError *loginError;
@property (nonatomic) long long verificationStatus;

- (void)handleButtonClick;
- (id)buttonNotAvailableToastText;
- (id)componentTypeList;
- (void)bindingComponentInfo;
- (void)viewModelBindingUI;
- (id)trackEventStringWithEventType:(long long)a0;
- (id)trackEventParamsWithEventType:(long long)a0;
- (id)subtitleModel;
- (id)initWithSendCodeModel:(id)a0;
- (BOOL)isCodeModelCorrect:(id)a0;
- (void)_bindingComponentInfo;
- (void)handleVerificationChanged;
- (void)handleResendButtonClick;
- (BOOL)isInputVerificationCorrect;
- (id)additionalTrackParamsForSendCode;
- (void).cxx_destruct;
- (id)titleText;
- (id)buttonText;

@end
