@class NSTimeZone, AWETeenAntiAddictionTimeZoneService, NSDate, NSMutableArray;

@interface AWETeenAntiAddictionTimeService : NSObject

@property (nonatomic) double syncInterval;
@property (nonatomic) BOOL isSynchronizing;
@property (nonatomic) BOOL isCalibrating;
@property (nonatomic) BOOL isFirstCalibration;
@property (nonatomic) BOOL calibrationFailed;
@property (nonatomic) BOOL calibrationSucceed;
@property (nonatomic) unsigned long long calibrationRetryTime;
@property (nonatomic) double lastCalcTS;
@property (nonatomic) double lastSyncTS;
@property (nonatomic) double lastClearTS;
@property (retain, nonatomic) NSMutableArray *timeBracketsArray;
@property (readonly, nonatomic) BOOL timeTrusted;
@property (readonly, nonatomic) double currentTimeStamp;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSTimeZone *currentTimeZone;
@property (readonly, nonatomic) double lastSynchronizeTime;
@property (readonly, nonatomic) double useDuration;
@property (readonly, nonatomic) AWETeenAntiAddictionTimeZoneService *timeZoneService;

- (void)didFinishLoginWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)networkConnectionChanged:(id)a0;
- (void)synchronizeIfNeeded;
- (void)clearServerUseDurationWithPassword:(id)a0;
- (void)startTimeService;
- (void)calculateLocalUseDuration;
- (void)readUseDuration;
- (void)readTimeBrackets;
- (void)calibrateTime;
- (void)synchronizeLocalUseDurationToRemoteAddDuration:(double)a0;
- (void)updateTimeBracketsWithScene:(long long)a0;
- (void)untrustTime;
- (void)setTimeTrusted:(BOOL)a0;
- (void)p_addLocalUseDuration:(double)a0;
- (void)updateTimeBracketsWithScene:(long long)a0 duration:(double)a1;
- (void)setUseDuration:(double)a0;
- (void)updateTimeBracketsArrayWithReportedArray:(id)a0;
- (void)updateTimeBracketStartTime:(double)a0;
- (void)updateTimeBracketEndTime:(double)a0;
- (void)updateTimeBracketEndTime:(double)a0 duration:(double)a1;
- (void)clearUseDuration;
- (void)setLastSynchronizeTime:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appWillResignActive:(id)a0;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;

@end
