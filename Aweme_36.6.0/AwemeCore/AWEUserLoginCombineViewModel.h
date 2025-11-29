@class NSError, NSString, NSArray, AWEUserComponentSubtitleModel, DYPhoneNumberModel, AWEUserSendCodeModel, AWECarrierLoginPhoneModel, AWEUserLoginCombineDataController, DYASendCodeModel;

@interface AWEUserLoginCombineViewModel : AWEUserLoginBaseViewModel <AWEUserLoginDataControllerDelegate, AWEUserLoginViewModelSecondaryProtocol>

@property (copy, nonatomic) NSArray *loginUsers;
@property (retain, nonatomic) AWEUserLoginCombineDataController *dataController;
@property (retain, nonatomic) DYASendCodeModel *sendCodeModel;
@property (nonatomic) BOOL jumpToSMS;
@property (copy, nonatomic) NSString *shownAccountSource;
@property (copy, nonatomic) NSString *selectedAccountSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *avatarURLArray;
@property (readonly, copy, nonatomic) NSString *displayNickName;
@property (readonly, copy, nonatomic) NSString *loginSubTitle;
@property (readonly, copy, nonatomic) NSArray *combineLoginUsers;
@property (readonly, nonatomic) AWECarrierLoginPhoneModel *carrierPhoneModel;
@property (readonly, copy, nonatomic) NSString *inputEmailAccount;
@property (readonly, nonatomic) long long emailScene;
@property (readonly, nonatomic) AWEUserComponentSubtitleModel *subtitleModel;
@property (readonly, nonatomic) AWEUserSendCodeModel *codeModel;
@property (readonly, nonatomic) DYPhoneNumberModel *inputPhoneModel;
@property (readonly, nonatomic) double inputPhoneCountryCodeWidth;
@property (readonly, nonatomic) long long verificationStatus;
@property (readonly, nonatomic) long long smsScene;
@property (readonly, nonatomic) BOOL isOverseaLayout;
@property (readonly, nonatomic) NSError *loginError;

+ (Class)aAWEUserLoginThemeAdapterClass;

- (id)aAWEUserLoginThemeAdapter;
- (void)dataControllerUpdateLoginRequestStatus:(long long)a0;
- (id)monitorPageName;
- (id)notifyTrackLoginSuggestMethod;
- (void)trackPageShowPerfEvent;
- (void)requestLoginAfterDetainAlert;
- (id)loginComponentTypeList;
- (id)showLoginPlatformList;
- (void)dataControllerDidSendCodeModel:(id)a0;
- (void)requestLogin;
- (void)requestLoginWithIndex:(unsigned long long)a0;
- (id)additionalLoginNotifyParams;
- (id)additionalLoginFailParams;
- (id)additionalTrackInfo:(long long)a0;
- (id)initWithLoginPanelStyle:(unsigned long long)a0 LoginUsers:(id)a1;
- (void)updateShownAccountSource;
- (id)sharedLoginAccountSource:(id)a0;
- (void)updateSelectedAccountSource:(id)a0;
- (id)loginTypeForCurrentUser:(id)a0;
- (unsigned long long)combineShowType;
- (id)currentShowLoginType;
- (void).cxx_destruct;

@end
