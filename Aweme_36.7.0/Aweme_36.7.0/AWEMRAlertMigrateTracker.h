@class NSMutableDictionary, NSMutableArray;

@interface AWEMRAlertMigrateTracker : NSObject

@property (nonatomic) double popViewKillTimeInterval;
@property (retain, nonatomic) NSMutableDictionary *trackTaskDict;
@property (retain, nonatomic) NSMutableArray *timerArray;

- (void)initTask;
- (void)updateLastShownWithAlertContext:(id)a0;
- (void)setupTrackTime;
- (void)timeIntervalDidEnd:(id)a0;
- (void)trackPopViewKillApp:(id)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;

@end
