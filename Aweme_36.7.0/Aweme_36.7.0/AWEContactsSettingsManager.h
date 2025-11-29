@interface AWEContactsSettingsManager : NSObject

+ (id)findFriendsLoginGuideConfigModel;
+ (id)contactListFooterText;
+ (BOOL)shouldAdaptToLimitedAccessOfiOS18InContacts;
+ (long long)coldLaunchAndActiveImpressionInterval;
+ (long long)uploadContactsPolicyTimes;
+ (long long)uploadContactsPolicyInterval;
+ (long long)triggerAlertImpressionInterval;
+ (long long)frozenInterval;
+ (long long)maxActiveRefuseTimes;
+ (id)alertConfirmBtnTitle:(BOOL)a0;
+ (id)alertCancelBtnTitle:(BOOL)a0;
+ (BOOL)shouldHiddenRefuseBtn;
+ (id)alertLimitBtnTitle;
+ (id)alertCoverImageUrl;
+ (long long)uploadContactsNoticeInterval;
+ (long long)uploadContactsNoticeTimes;
+ (BOOL)forbidColdlaunchUpload;
+ (id)loginContactGuideText;
+ (id)contactUploadUILimitSettings;
+ (id)uploadContactsPolicyCaption;
+ (id)alertTitle;
+ (id)alertText;

@end
