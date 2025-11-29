@class NSString, AWEAlertContext, UIView, AWETeenModeAlertConfigModel, AWEUIAlertView;

@interface AWEDigitalWellbeingAlertManager : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, AWEDigitalWellbeingAlertManagerProtocol>

@property (nonatomic) long long alertTypeWillShow;
@property (weak, nonatomic) AWEUIAlertView *alert;
@property (weak, nonatomic) UIView *teenModeAlertView;
@property (nonatomic) BOOL hasShownTeenModeIntroductionAlert;
@property (nonatomic) double teenModeIntroductionAlertBeginShowTime;
@property (copy, nonatomic) id /* block */ alertCallBack;
@property (nonatomic) BOOL isCloseEternally;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) id /* block */ didClick;
@property (copy, nonatomic) id /* block */ didShow;
@property (retain, nonatomic) AWEAlertContext *alertContext;
@property (nonatomic) long long showingAlertType;
@property (retain, nonatomic) AWETeenModeAlertConfigModel *windowConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (BOOL)canShow;
- (void)serverTeenModeDidTakeEffectForFirstTime;
- (void)isForceServerTeenModeDidChange:(BOOL)a0;
- (id)mr_accessIDForEvent:(id)a0;
- (BOOL)mr_enableAccessControlForEvent:(id)a0;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (BOOL)isAlertShowing;
- (BOOL)shouldShowAlert:(long long)a0;
- (void)bottomTabBarDidSwitchTab:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)keyForToday;
- (void)bizDowngradeDelayTeenModeAlert;
- (BOOL)enableTeenNewSearch;
- (void)didEnterVideoDetailPage:(id)a0;
- (void)showForLegou;
- (BOOL)shouldShowTeenModeIntroductionAlert;
- (BOOL)teenModeShouldAlertInTime;
- (BOOL)hitFrequencyControlWithLastShowTime:(double)a0;
- (BOOL)teenModeShouldAlertAfterRandom;
- (id)getCurrentPopupModel;
- (void)showTeenModeIntroductionAlertWithPolling;
- (id)getUIIDFromWindowConfig;
- (id)getUserTypeFromWindowConfig;
- (void)showTeenModeIntroductionAlert;
- (BOOL)teenModeShouldAlertInFirstPage;
- (BOOL)teenModeShouldAlertInFeed;
- (void)showTeenModeSimpleStyleIntroductionAlert;
- (void)didAlertClosedForReason:(long long)a0;
- (void)p_clickOpenTeenMode;
- (unsigned long long)closeTypeFromReason:(long long)a0;
- (unsigned long long)bdClickTypeFromReason:(long long)a0;
- (unsigned long long)aweClickTypeFromReason:(long long)a0;
- (void)p_showAlertView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)showAlert:(long long)a0;

@end
