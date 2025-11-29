@class NSMutableDictionary, MMKV;

@interface AWEHPTabStayTimeTrackController : NSObject

@property (retain, nonatomic) NSMutableDictionary *timingTabs;
@property (nonatomic) BOOL hasTrackColdLaunch;
@property (retain, nonatomic) MMKV *mmkv;

- (void)addNotifications;
- (id)pauseTimingWithTimingModel:(id)a0;
- (void)resumeTimingWithTimingModel:(id)a0;
- (id)getTimingModelWithTabID:(id)a0;
- (void)coldLaunchTrackIfNeed;
- (void)endTimingWithTabIDIfNeed:(id)a0 isLandingLeave:(BOOL)a1;
- (id)trackHPTabStayTimeWithModel:(id)a0 duration:(long long)a1 reportReason:(id)a2;
- (void)p_coldLaunchTrack;
- (void)startTimingWithModel:(id)a0;
- (void)endTimingWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appWillResignActive:(id)a0;
- (void)dealloc;
- (void)removeNotifications;
- (void)appDidBecomeActive:(id)a0;

@end
