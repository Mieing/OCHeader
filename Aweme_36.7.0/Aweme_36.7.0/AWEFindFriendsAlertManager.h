@class NSString, AWEAlertContext, AWEAlertCallbackWrapper, AWEFindFriendsLoginGuideConfigModel;

@interface AWEFindFriendsAlertManager : NSObject <AWEUserMessage, AWELoginGuideStrategyProtocol, AWEMessageReachPopViewProtocol, AWEFindFriendsAlertManagerProtocol>

@property (retain, nonatomic) AWEFindFriendsLoginGuideConfigModel *configModel;
@property (retain, nonatomic) AWEAlertContext *alertContext;
@property (retain, nonatomic) AWEAlertCallbackWrapper *callbackWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;
+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (void)updateAlertShowRecord;
+ (void)clearRefuseRecord;
+ (long long)alertShowCount;
+ (id)alertLastShowDate;
+ (long long)refuseTimes;
+ (void)updateRefuseRecord;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)onAlertCanceled;
- (BOOL)isExceed;
- (long long)methodType;
- (id)aAFDServiceDOUYINDSAdapter;
- (id)mr_accessIDForEvent:(id)a0;
- (BOOL)mr_enableAccessControlForEvent:(id)a0;
- (void)onClickedContinue;
- (void)onClickedCancel;
- (BOOL)isDelayedAfterInstalled;
- (BOOL)isShowFrequencySatisfied;
- (BOOL)shouldUseLoginStrategyFrequencyControl;
- (void)handleRefuseCanReset;
- (void)startNewPeriod;
- (BOOL)hasShowPreLoginGuideToday;
- (BOOL)lessThanMaxShowTimes;
- (BOOL)satifiedInteval;
- (id)loginStrategySceneModel;
- (BOOL)isExceedByLoginStrategy:(id)a0;
- (void)trackPopViewWithClickType:(unsigned long long)a0;
- (long long)showMaxLimit;
- (id)oldStorageData;
- (BOOL)isShowFrequencySatisfiedByLoginStrategy;
- (void).cxx_destruct;
- (id)init;
- (void)trackEvent:(id)a0;
- (void)dealloc;
- (long long)sceneType;

@end
