@class NSString;

@interface AWENoWifiTipManager : NSObject <AWENoWifiTipManagerProtocol>

@property (readonly, nonatomic) BOOL isAlreadyShowAlertInModernFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAlertViewExist;
@property (nonatomic) BOOL isToastExist;
@property (nonatomic) BOOL isAlreadyPresentingAlert;
@property (nonatomic) BOOL isAlreadyShowAlertInModernFeed;
@property (nonatomic) BOOL hasShownToastForNoWiFi;

+ (id)connectMethodName;
+ (BOOL)ifWifiConnected;
+ (id)sharedManager;

- (BOOL)shouldNotShowNoWifiAlertUseNewStrategy;
- (void)showFeedNoWifiTipWithAllowBlock:(id /* block */)a0 denyBlock:(id /* block */)a1 delayBlock:(id /* block */)a2 withPlayVideoVCType:(long long)a3 isStopped:(BOOL)a4 referString:(id)a5;
- (void)showFeedNoWifiTipToastIfNeed;
- (void)setAlertNotShown;
- (BOOL)isNoWifiAlertChanged;
- (void)recordClickPlayWithType:(long long)a0;
- (void)recordClickPauseWithType:(long long)a0;
- (void)_showSystemAlerViewWithTitles:(id)a0 message:(id)a1 allowBlock:(id /* block */)a2 denyBlock:(id /* block */)a3 delayBlock:(id /* block */)a4;
- (void)setToastExists;
- (void)checkModernFeedAlertStatus;
- (id)init;
- (void)dealloc;
- (void)networkStatusChanged:(id)a0;

@end
