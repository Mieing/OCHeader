@class NSRecursiveLock, NSString, CMMotionManager, NSHashTable;

@interface WCProximityStateMgr : MMUserService <MicroMessengerAppStateMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSHashTable *objectsTable;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) float gFactor;
@property (nonatomic) BOOL isInProximityState;
@property (nonatomic) BOOL startProximityState;
@property (nonatomic) BOOL isUnReliableStartState;
@property (nonatomic) BOOL isProximityStateRecogning;
@property (nonatomic) BOOL shouldFixScreenOff;
@property (nonatomic) BOOL shouldChangeBrightness;
@property (nonatomic) int touchCountWhenProximityState;
@property (nonatomic) long long proximityStateErrorCountExpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)StartProximityMonitorWithObject:(id)a0;
- (void)StartProximityMonitorWithObject:(id)a0 scene:(int)a1;
- (void)StopProximityMonitorWithObject:(id)a0;
- (BOOL)IsInProximityState;
- (BOOL)IsProximityStateRecogning;
- (void)checkDelegateTable;
- (void)startRecognizering;
- (void)stopRecognizering;
- (void)closeToEarRecognByX:(double)a0 Y:(double)a1 Z:(double)a2;
- (void)startProximityMonitoring;
- (void)stopProximityMonitoring;
- (void)startObserveProximityChangeNotify;
- (void)stopObserveProximityChangeNotify;
- (void)notifyCloseEar;
- (void)notifyAwayFromEar;
- (void)onProximityStateChange:(id)a0;
- (void)onReceivedTouchEvent;
- (void)didEnterBackground;
- (void).cxx_destruct;

@end
