@class NSNumber;

@interface AWESearchLeaveTimeRecordService : AWESearchBaseContainerService

@property (retain, nonatomic) NSNumber *leaveTime;
@property (nonatomic) BOOL needForceRefreshForOutOfTime;

- (BOOL)awe_isVCAppearing;
- (BOOL)checkIsShowing;
- (void)appDidEnterBackgroundFromNoti:(id)a0;
- (void)appWillEnterForegroundFromNoti:(id)a0;
- (void)recordLeaveTimeIfNeeded;
- (BOOL)isTimeEnoughForRefresh;
- (void)clearSearchRecords;
- (long long)timeOfRefresh;
- (void)resetLeaveTimeIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)addObservers;
- (void)refreshIfNeeded;

@end
