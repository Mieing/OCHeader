@class NSError, NSString, AWEUserComponentSubtitleModel, NSArray, DYPhoneNumberModel, AWECarrierLoginPhoneModel, AWEUserSendCodeModel, DYASendCodeModel, AWEUserLoginPasswordDataController;

@interface AWEUserLoginPasswordViewModel : AWEUserLoginBaseViewModel <AWEUserLoginViewModelSecondaryProtocol>

@property (retain, nonatomic) DYPhoneNumberModel *inputPhoneModel;
@property (nonatomic) double inputPhoneCountryCodeWidth;
@property (copy, nonatomic) NSString *inputPassword;
@property (nonatomic) BOOL disableHideErrorHint;
@property (retain, nonatomic) AWEUserLoginPasswordDataController *dataController;
@property (retain, nonatomic) NSError *loginError;
@property (readonly, nonatomic) NSArray *avatarURLArray;
@property (readonly, copy, nonatomic) NSString *displayNickName;
@property (readonly, copy, nonatomic) NSString *loginSubTitle;
@property (readonly, copy, nonatomic) NSArray *combineLoginUsers;
@property (readonly, nonatomic) AWECarrierLoginPhoneModel *carrierPhoneModel;
@property (readonly, copy, nonatomic) NSString *inputEmailAccount;
@property (readonly, nonatomic) long long emailScene;
@property (readonly, nonatomic) AWEUserComponentSubtitleModel *subtitleModel;
@property (readonly, nonatomic) AWEUserSendCodeModel *codeModel;
@property (readonly, nonatomic) long long verificationStatus;
@property (readonly, nonatomic) long long smsScene;
@property (readonly, nonatomic) DYASendCodeModel *sendCodeModel;
@property (readonly, nonatomic) BOOL isOverseaLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInputPassword:(id)a0;
- (void)dataControllerUpdateLoginError:(id)a0;
- (id)monitorPageName;
- (void)requestStatusDidChange:(long long)a0;
- (void)updateLoginButtonEnableStatus;
- (id)loginComponentTypeList;
- (id)showLoginPlatformList;
- (id)initWithLoginPanelStyle:(unsigned long long)a0;
- (void)requestLogin;
- (id)loginNotAvailableToastText;
- (id)fillPhoneNumberScene;
- (void)updateInputPhoneModel:(id)a0;
- (void)updateInputPhoneCountryCodeWidth:(double)a0;
- (void)forgetPasswordClicked;
- (id)initWithLoginPanelStyle:(unsigned long long)a0 phoneNumberContext:(id)a1;
- (void).cxx_destruct;

@end
