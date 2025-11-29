@class AWEAwemeModel, AWEAntiAddictStorage, NSHashTable, NSString, NSDictionary, AWEAntiAddictStrategyGroup, NSObject, AWEAntiAddictTimeDriver, AWEAntiAddictConsumer;
@protocol OS_dispatch_source;

@interface AWEAntiAddictManager : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, AWEAntiAddictLogProtocol, AWEAntiAddictManagerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) AWEAntiAddictStrategyGroup *strategyGroup;
@property (retain, nonatomic) AWEAntiAddictStorage *storage;
@property (retain, nonatomic) AWEAntiAddictTimeDriver *timeDriver;
@property (retain, nonatomic) AWEAntiAddictConsumer *consumer;
@property unsigned long long threadSyncIndex;
@property double dataSaveTime;
@property BOOL isLaunchFinished;
@property BOOL isHotLaunch;
@property double coldLaunchTime;
@property double hotLaunchTime;
@property BOOL feedDataLoaded;
@property (retain) AWEAwemeModel *willDisplayModel;
@property (copy) NSDictionary *cachedPreparedData;
@property (retain, nonatomic) NSHashTable *timerListenerHashTable;
@property BOOL preLoadedAwemeModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleName;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)cleanExpiredData;
- (double)antiAddictionDayTime;
- (double)antiAddictionNightTime;
- (double)antiAddictVideoRetraceInterval;
- (BOOL)enableAntiAddict;
- (id)natureUseDurationInTwoWeeks;
- (id)feedMaskMainText:(id)a0;
- (id)feedMaskSubText:(id)a0;
- (id)feedMaskEnterText:(id)a0;
- (id)feedMaskExitText:(id)a0;
- (id)feedMaskLaterRemindText:(id)a0;
- (void)avoidTime:(long long)a0;
- (void)feedInsertedAntiAddictVideo:(id)a0 willDisplayImmediately:(BOOL)a1;
- (void)invalidThreadSyncIndexWithReason:(id)a0;
- (void)runLanchComplete:(BOOL)a0;
- (void)loadTimeCounter;
- (void)runTaskWithCompletion:(id /* block */)a0;
- (void)registerMessage;
- (void)preLoadAwemeModels;
- (void)onSplashDisappear;
- (void)feedWillDisplayCell:(id)a0;
- (void)feedDidEndDisplayCell:(id)a0;
- (void)loopWithTriggerType:(long long)a0;
- (void)loopWithAntiAddictTimer;
- (void)loginStateChanged;
- (BOOL)antiAddictP14RemindType:(unsigned long long)a0;
- (id)feedMaskMainText_P14:(id)a0;
- (id)feedMaskSubText_P14:(id)a0;
- (id)forceMaskSubTitleAtNight;
- (void)p_feedShouldRevokeRelieveVideo:(id)a0;
- (void)teenModeStateChanged;
- (void)userSelectedAntiAddictVideoChanged:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addListener:(id)a0;
- (void)setup;
- (void)setupTimer;
- (void)loop;
- (id)requestParams;

@end
