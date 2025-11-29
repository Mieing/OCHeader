@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDPreviousConfigUpdateMonitor : NSObject <HMDApplicationStatusChangeDelegate, HMDAPPForeBackStateChangeDelegate>

@property (nonatomic) unsigned long long previousConfigUpdateState;
@property (nonatomic) unsigned long long currentConfigUpdateState;
@property (nonatomic) int previousConfigUpdateFailCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)previousConfigUpdateState;
+ (int)previousConfigUpdateFailCount;
+ (id)sharedInstance;

- (void)configDidUpdate;
- (void)startMonitor_once;
- (void)hmdSafeModeAppWillTerminate;
- (void)configUpdateInfoResetDueToTimeout:(BOOL)a0;
- (void)hmd_didEnterBackgroundUpdate;
- (void)hmd_didBecomeActiveUpdate;
- (void)hmd_willTerminateUpdate;
- (void)applicationChangeToForeground;
- (void)applicationChangeToBackground;
- (void)hmd_willEnterForegroundUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)startMonitor;

@end
