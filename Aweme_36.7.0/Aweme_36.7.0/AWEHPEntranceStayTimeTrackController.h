@class NSMutableDictionary;

@interface AWEHPEntranceStayTimeTrackController : NSObject

@property (retain, nonatomic) NSMutableDictionary *timingEntrances;

- (void)addNotifications;
- (void)enterHPSearchEntrance;
- (void)leaveHPSearchEntrance;
- (void)enterPublishEntrance;
- (void)leavePublishEntrance;
- (void)startTimingWithEntranceId:(id)a0;
- (void)endTimingWithEntranceId:(id)a0;
- (id)currentSelectedTabId;
- (void)trackHPTabStayTimeWihtModel:(id)a0 duration:(long long)a1;
- (void)pauseTimingWithTimingModel:(id)a0;
- (void)resumeTimingWithTimingModel:(id)a0;
- (void)enterHPLeftSideBar;
- (void)leaveHPLeftSideBar;
- (void)resumeTimingWhenBackToForegroundIfNeed;
- (void)pauseTimingWhenEnterBackgroundIfNeed;
- (void).cxx_destruct;
- (id)init;
- (void)appWillResignActive:(id)a0;
- (void)dealloc;
- (void)removeNotifications;
- (void)appDidBecomeActive:(id)a0;

@end
