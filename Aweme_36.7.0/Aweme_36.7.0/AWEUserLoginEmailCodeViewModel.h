@class NSError, NSString, AWEUserComponentSubtitleModel, NSArray, AWEUserLoginEmailCodeDataController, AWEUserSendCodeModel, AWECarrierLoginPhoneModel, DYPhoneNumberModel, DYASendCodeModel;

@interface AWEUserLoginEmailCodeViewModel : AWEUserLoginBaseViewModel <AWEUserLoginViewModelSecondaryProtocol>

@property (retain, nonatomic) NSError *loginError;
@property (nonatomic) long long emailScene;
@property (copy, nonatomic) NSString *inputVerification;
@property (copy, nonatomic) NSString *inputEmail;
@property (retain, nonatomic) AWEUserSendCodeModel *codeModel;
@property (retain, nonatomic) AWEUserLoginEmailCodeDataController *dataController;
@property (nonatomic) long long verificationStatus;
@property (readonly, nonatomic) NSArray *avatarURLArray;
@property (readonly, copy, nonatomic) NSString *displayNickName;
@property (readonly, copy, nonatomic) NSString *loginSubTitle;
@property (readonly, copy, nonatomic) NSArray *combineLoginUsers;
@property (readonly, nonatomic) AWECarrierLoginPhoneModel *carrierPhoneModel;
@property (readonly, copy, nonatomic) NSString *inputEmailAccount;
@property (readonly, nonatomic) AWEUserComponentSubtitleModel *subtitleModel;
@property (readonly, nonatomic) DYPhoneNumberModel *inputPhoneModel;
@property (readonly, nonatomic) double inputPhoneCountryCodeWidth;
@property (readonly, nonatomic) long long smsScene;
@property (readonly, nonatomic) DYASendCodeModel *sendCodeModel;
@property (readonly, nonatomic) BOOL isOverseaLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkConfirmedProtocolWithCompletion:(id /* block */)a0;
- (id)additionalTrackParamsForSendCode;
- (void)dataControllerUpdateLoginError:(id)a0;
- (id)monitorPageName;
- (void)trackLoginEvent:(long long)a0;
- (id)notifyTrackLoginSuggestMethod;
- (void)updateLoginButtonEnableStatus;
- (id)loginComponentTypeList;
- (id)showLoginPlatformList;
- (void)requestLogin;
- (id)loginNotAvailableToastText;
- (void)updateInputVerification:(id)a0;
- (void)updateVerificationStatus:(long long)a0;
- (void)updateInputEmailAccount:(id)a0;
- (void)requestSendVerificationIsResend:(BOOL)a0 block:(id /* block */)a1;
- (id)initWithEmailAccount:(id)a0 scene:(long long)a1;
- (void)switchToPasswordLogin;
- (void)requestSendVerification;
- (void)requestEmailCodeLogin;
- (void)switchToStep2Page;
- (void).cxx_destruct;

@end
