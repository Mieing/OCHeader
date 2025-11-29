@class NSDictionary, NSString;
@protocol AWETeenAgeGuideProtocol;

@interface AWETeenAgeGuideManager : NSObject <AWEUserMessage, AWEAlertProtocol>

@property (retain, nonatomic) id<AWETeenAgeGuideProtocol> ageGuideService;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isLogoutBuffer;
@property (copy, nonatomic) id /* block */ onCloseAlert;
@property (nonatomic) long long alertType;
@property (nonatomic) BOOL isViewDisappear;
@property (copy, nonatomic) id /* block */ showAlertCompletion;
@property (copy, nonatomic) id /* block */ closeAlertCompletion;
@property (copy, nonatomic) id /* block */ submitActionCompletion;
@property (nonatomic) long long ageAlertPosition;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)isAlertShowing;
- (BOOL)p_isTimeToShowAlert;
- (void)p_addAlertsForEvent:(id)a0;
- (BOOL)shouldShowAgeAlert;
- (void)p_submitActionWithProfile:(id)a0;
- (id)ageGuideConfig;
- (BOOL)p_hasAge;
- (BOOL)p_isAntiAddictionViewShowing;
- (id)showTimesKey;
- (BOOL)p_didChangedAge:(id)a0;
- (BOOL)p_didChangedGender:(id)a0;
- (void)p_handleSubmitCompletion:(id)a0;
- (id)lastTimestampKey;
- (long long)durationDays;
- (void)dismissAgeGuideAlert:(BOOL)a0;
- (BOOL)shouldShowAgeGuideAlert;
- (BOOL)p_isWithinAntiAddictionTime;
- (void)p_showAgeGuideView;
- (void)p_saveAlertShowInfo;
- (void)getUserOrDeviceInfo;
- (void)showAgeAlert;
- (void).cxx_destruct;
- (id)init;
- (id)nowDate;
- (void)dealloc;

@end
