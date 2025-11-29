@class QBBeaconModuleStrategy;

@interface QBBeaconEventModule : NSObject <QBBeaconAnalyticsModule>

@property (nonatomic) BOOL userEnabled;
@property (nonatomic) BOOL beaconStatisReportEnabled;
@property (retain) QBBeaconModuleStrategy *moduleStrategy;

+ (id)sharedInstance;

- (id)init;
- (int)moduleKey;
- (BOOL)checkAndEnable;
- (void)disableModule;
- (void)enableModule;
- (BOOL)isEnabled;
- (BOOL)uploadModuleHistoryData;
- (void)appStarted;
- (void)appResumed;
- (void)recordAppLaunchEvent:(BOOL)a0;
- (void)appEnterBack;
- (void)initBeaconProperties;
- (void)refreshNetInfo;
- (void).cxx_destruct;

@end
