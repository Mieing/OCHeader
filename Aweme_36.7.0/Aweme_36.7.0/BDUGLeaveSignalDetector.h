@class NSMutableDictionary;

@interface BDUGLeaveSignalDetector : NSObject

@property (nonatomic) unsigned long long leaveType;
@property (copy, nonatomic) id /* block */ delayedTask;
@property (nonatomic) BOOL enterBackgroundReportTriggered;
@property (nonatomic) BOOL lockScreenReportTriggered;
@property (nonatomic) BOOL appStoreDidAppear;
@property (nonatomic) BOOL thirdAppOutReported;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;

+ (id)sharedInstance;

- (void)notifyThirdAppOut;
- (void)notifyThirdAppOutFinish;
- (void)applicationProtectedDataWillBecomeUnAvailable:(id)a0;
- (void)resetLeaveType;
- (void)reportUserLeaveWithDelay:(long long)a0 extraInfo:(id)a1;
- (BOOL)shouldReportUserLeave;
- (void)recordReportTriggered;
- (void)startMonitorLeaveSignal;
- (void)appStoreHalfScreenLoad:(id)a0;
- (void)appStoreHalfScreenDidAppear;
- (void)appStoreHalfScreenDisappear;
- (void)notifyDesktopWidgetGuideOut;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)applicationProtectedDataDidBecomeAvailable:(id)a0;

@end
