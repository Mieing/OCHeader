@class NSTimer, NSMutableArray, NSMutableSet;

@interface AWEDCFeedDedupStatsController : AWEDCFeedBaseController

@property (retain, nonatomic) NSMutableArray *cachedInfos;
@property (retain, nonatomic) NSMutableSet *reportSet;
@property (retain, nonatomic) NSTimer *timer;

- (void)willStartLogin;
- (void)willLogoutWithUserID:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (void)willSwitchAccountWithUserID:(id)a0;
- (id)commonParams;
- (void)dedupCacheAwemeShow:(id)a0;
- (void)reportCachedInfo;
- (id)transAwemeToDedupInfo:(id)a0;
- (void)createNetTaskTimerIfNeed;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (void)dealloc;
- (void)appDidEnterBackground;
- (void)containerViewDidLoad;

@end
