@class AWEHPTabVisibleMonitorExceptionTask;
@protocol AWEHPTabVisibleMonitorManagerDelegate;

@interface AWEHPTabVisibleMonitorManager : NSObject

@property (weak, nonatomic) id<AWEHPTabVisibleMonitorManagerDelegate> delegate;
@property (retain, nonatomic) AWEHPTabVisibleMonitorExceptionTask *curTask;
@property (nonatomic) unsigned long long reportCount;

- (void)addNotification;
- (void)monitorTopbarAlphaStatusChangeWithSceneBusinessID:(id)a0 alpha:(double)a1;
- (void)monitorTopbarHiddenStatusChangeWithBusinessID:(id)a0 hidden:(BOOL)a1;
- (void)feedAwemeChangeFromPreviousAweme:(id)a0 currentAweme:(id)a1 channelID:(id)a2;
- (void)topTabDidFinishTransitionFromPreviousTab:(id)a0 currentTab:(id)a1;
- (void)leftSideBarDidCloseNotification:(id)a0;
- (void)p_handleMonitorTimingType:(unsigned long long)a0 context:(id)a1;
- (void)p_clearCurTask;
- (BOOL)p_needFilterCheckExceptionWithTopVC:(id)a0;
- (unsigned long long)p_getCurrentTopBarInvisibleTypeWithTimingType:(unsigned long long)a0;
- (unsigned long long)p_getCurrentTabBarInvisibleTypeWithTimingType:(unsigned long long)a0;
- (BOOL)p_isInSceneWhiteListWithTimingType:(unsigned long long)a0 topBarInvisibleType:(unsigned long long)a1 tabBarInvisibleType:(unsigned long long)a2;
- (void)p_handleExceptionTask:(id)a0;
- (void)p_tryReportAndRecoverExceptionWithTask:(id)a0;
- (void)p_reportAndRecoverExceptionWithTask:(id)a0;
- (void)p_tryRecoverWithTask:(id)a0 topBarRecover:(BOOL *)a1 tabBarRecover:(BOOL *)a2 topVC:(id)a3 vcHierarchy:(id)a4;
- (void)p_trackExceptionWithParams:(id)a0;
- (void)monitorTabbarHiddenStatusChangeWithBusinessID:(id)a0 hidden:(BOOL)a1 tabBarController:(id)a2;
- (void)monitorTabbarAlphaStatusChangeWithSceneBusinessID:(id)a0 alpha:(double)a1 tabBarController:(id)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
