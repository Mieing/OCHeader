@class AWEInfraResourceMetric, AWEInfraDefaultResourceMetric, NSString, AWETrafficDegrader, AWEDiskMonitor, AWEBackgroundExitDegrader, AWEDiskDegrader;

@interface AWECoreServiceModule : NSObject <HTSAppLifeCycle>

@property (retain, nonatomic) AWEDiskMonitor *diskMonitor;
@property (retain, nonatomic) AWEBackgroundExitDegrader *degrader;
@property (retain, nonatomic) AWETrafficDegrader *trafficDegrader;
@property (retain, nonatomic) AWEDiskDegrader *diskDegrader;
@property (retain, nonatomic) AWEDiskDegrader *diskCacheDegrader;
@property (retain, nonatomic) AWEInfraResourceMetric *resourceServiceMetric;
@property (retain, nonatomic) AWEInfraDefaultResourceMetric *defaultResourceMetric;
@property (nonatomic) BOOL shouldCleanLegacyFiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)priority;

- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)onHandleEventsForBackgroundURLSession;
- (void)_onAppRootViewDidAppear;
- (void)degradeIfNeeded;
- (void)startExcludedFromBackupTaskWhenFeedReady;
- (void)startDiskMonitor;
- (void)startDiskDegrade;
- (void)startTrafficDegradeIfNeed;
- (void)startInfraResourceMetric;
- (void)startDefaultResourceMetric;
- (void)startSQLite3Optimize;
- (void)startExcludedFromBackupTask;
- (void)startExcludedFromBackupTaskInternal;
- (void).cxx_destruct;

@end
