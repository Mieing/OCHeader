@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMDataBaseTrackerService : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL enable_performance_monitor;
@property (nonatomic) unsigned long long performance_ftc;
@property (nonatomic) unsigned long long last_track_single_user_time;
@property (nonatomic) unsigned long long last_track_cache_hit_time;

+ (void)trackContactPerformanceForScene:(unsigned long long)a0 duration:(float)a1 count:(long long)a2;
+ (BOOL)boolValueInAwemeSettingsWithKey:(id)a0;
+ (void)trackContactLogWithInfo:(id)a0;
+ (void)trackContactForFetchWithNetStage:(float)a0 saveStage:(float)a1 isFull:(BOOL)a2 count:(long long)a3 requestStatus:(int)a4 saveStatus:(int)a5;
+ (BOOL)p_meetFTC:(unsigned long long)a0;
+ (void)trackDatabaseCorrupt:(int)a0 status:(int)a1;
+ (void)trackDatabaseRecover:(int)a0 status:(int)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
