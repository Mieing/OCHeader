@class NSString;

@interface AWEFreeFlowAlertManager : NSObject <AWEUserMessage, AWEFreeFlowAlertManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)clearAllStatus;
- (void)chooseOption:(BOOL)a0;
- (BOOL)shouldUseNewStrategyForNoWifi;
- (BOOL)isInNoAlertStatus;
- (BOOL)isInLastMonthWifiStrategy;
- (BOOL)isInCurrentMonthWifiStrategy;
- (long long)countForNoAlertDaysBefore25:(id)a0;
- (long long)countForNoAlertDaysAfter25:(id)a0;
- (BOOL)isNoAlertDayWithDailyModel:(id)a0;
- (long long)noWifiAlertStyle;
- (long long)WifiAlertStyle;
- (void)clickContinuePlay;
- (void)clickPause;
- (void)setNoWiFiPlaySwitchStatus:(BOOL)a0 setByUser:(BOOL)a1;
- (void)recordLaunchAppWithWifi:(BOOL)a0;
- (void)recordHasShownWifiAlert;
- (BOOL)noWiFiPlaySwitchStatusOpen;
- (BOOL)isFreeFlowCardUserCloseSwitchManually;
- (BOOL)shouldUseNewStrategyForWifi;
- (id)currentFlowStrategyStatisticsDescription;
- (BOOL)WifiAlertIsNeeded;
- (id)init;
- (void)dealloc;

@end
