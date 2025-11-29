@class NSError, NSString, AWEUserComponentSubtitleModel, NSArray, DYPhoneNumberModel, AWEUserSendCodeModel, AWECarrierLoginPhoneModel, AWEUserLoginEmailDataController, DYASendCodeModel;

@interface AWEUserLoginEmailViewModel : AWEUserLoginBaseViewModel <AWEUserLoginViewModelSecondaryProtocol>

@property (copy, nonatomic) NSString *inputEmailAccount;
@property (copy, nonatomic) NSString *inputPassword;
@property (retain, nonatomic) NSError *loginError;
@property (retain, nonatomic) AWEUserLoginEmailDataController *dataController;
@property (retain, nonatomic) AWEUserSendCodeModel *forgetPasswordCodeModel;
@property (nonatomic) long long verificationStatus;
@property (nonatomic) BOOL disableHideLoginErrorHint;
@property (readonly, nonatomic) NSArray *avatarURLArray;
@property (readonly, copy, nonatomic) NSString *displayNickName;
@property (readonly, copy, nonatomic) NSString *loginSubTitle;
@property (readonly, copy, nonatomic) NSArray *combineLoginUsers;
@property (readonly, nonatomic) AWECarrierLoginPhoneModel *carrierPhoneModel;
@property (readonly, nonatomic) long long emailScene;
@property (readonly, nonatomic) AWEUserComponentSubtitleModel *subtitleModel;
@property (readonly, nonatomic) AWEUserSendCodeModel *codeModel;
@property (readonly, nonatomic) DYPhoneNumberModel *inputPhoneModel;
@property (readonly, nonatomic) double inputPhoneCountryCodeWidth;
@property (readonly, nonatomic) long long smsScene;
@property (readonly, nonatomic) DYASendCodeModel *sendCodeModel;
@property (readonly, nonatomic) BOOL isOverseaLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
