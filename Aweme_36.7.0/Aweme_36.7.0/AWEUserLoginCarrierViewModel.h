@class NSError, NSString, NSArray, AWEUserComponentSubtitleModel, DYPhoneNumberModel, AWEUserSendCodeModel, AWECarrierLoginPhoneModel, AWEUserLoginCarrierDataController, DYASendCodeModel;

@interface AWEUserLoginCarrierViewModel : AWEUserLoginBaseViewModel <AWEUserLoginViewModelSecondaryProtocol>

@property (retain, nonatomic) AWECarrierLoginPhoneModel *carrierPhoneModel;
@property (nonatomic) unsigned long long requestedThirdLoginPlatform;
@property (retain, nonatomic) AWEUserLoginCarrierDataController *dataController;
@property (readonly, nonatomic) NSArray *avatarURLArray;
@property (readonly, copy, nonatomic) NSString *displayNickName;
@property (readonly, copy, nonatomic) NSString *loginSubTitle;
@property (readonly, copy, nonatomic) NSArray *combineLoginUsers;
@property (readonly, copy, nonatomic) NSString *inputEmailAccount;
@property (readonly, nonatomic) long long emailScene;
@property (readonly, nonatomic) AWEUserComponentSubtitleModel *subtitleModel;
@property (readonly, nonatomic) AWEUserSendCodeModel *codeModel;
@property (readonly, nonatomic) DYPhoneNumberModel *inputPhoneModel;
@property (readonly, nonatomic) double inputPhoneCountryCodeWidth;
@property (readonly, nonatomic) long long verificationStatus;
@property (readonly, nonatomic) long long smsScene;
@property (readonly, nonatomic) DYASendCodeModel *sendCodeModel;
@property (readonly, nonatomic) BOOL isOverseaLayout;
@property (readonly, nonatomic) NSError *loginError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserLoginThemeAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (id)aAWEUserLoginThemeAdapter;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (id)monitorPageName;
- (id)notifyTrackLoginSuggestMethod;
- (void)requestStatusDidChange:(long long)a0;
- (void)trackPageShowPerfEvent;
- (id)loginComponentTypeList;
- (id)showLoginPlatformList;
- (id)initWithLoginPanelStyle:(unsigned long long)a0;
- (void)requestLogin;
- (id)initWithLoginPanelStyle:(unsigned long long)a0 phoneModel:(id)a1;
- (void)updateRequestedThirdLoginPlatform:(unsigned long long)a0;
- (id)additionalLoginNotifyParams;
- (id)additionalLoginFailParams;
- (id)additionalTrackInfo:(long long)a0;
- (void)updateUserEventTrackerInfoIfNeed:(id)a0;
- (void).cxx_destruct;

@end
