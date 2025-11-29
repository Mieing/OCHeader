@class NSString, NSPointerArray, AWEAwemeModel, NSMutableArray;

@interface AWEUGCampaignWatchVideoService : NSObject <AWEUGCountDownVideoStatusProtocol>

@property (retain, nonatomic) NSPointerArray *delegates;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableArray *hasWatchedVideoIdArray;
@property (nonatomic) unsigned long long currentPlayStatus;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupNotification;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)feedTableViewControllerWillPlayAweme:(id)a0;
- (void)updateWithFeedTableVC:(id)a0;
- (void)pauseTaskTimerWithAweme:(id)a0 playStatus:(unsigned long long)a1 scene:(id)a2;
- (void)startTaskTimerWithAweme:(id)a0 playStatus:(unsigned long long)a1 scene:(id)a2;
- (void)updateCurrentAwemeModel:(id)a0 playStatus:(unsigned long long)a1;
- (void)sendDelegateStartMessage;
- (void)sendDelegatePauseMessage;
- (void)updateWithDetaiTabVC:(id)a0;
- (void)addHasWatchVideoId:(id)a0;
- (BOOL)checkIfCanStartTaskWithVideoId:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
