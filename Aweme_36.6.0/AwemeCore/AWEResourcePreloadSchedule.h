@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface AWEResourcePreloadSchedule : NSObject

@property (nonatomic) BOOL busy;
@property (nonatomic) unsigned long long busyReason;
@property (nonatomic) BOOL feedReady;
@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) NSHashTable *delegateTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) long long ttnetworkState;
@property (nonatomic) unsigned long long appUsedMemory;
@property (nonatomic) unsigned long long limitMemory;
@property (nonatomic) BOOL isCPULevelHigh;
@property (readonly, nonatomic) unsigned long long networkStatus;

+ (id)shareSchedule;

- (void)onMultiNetworkStateChanged:(id)a0;
- (void)initialData;
- (void)addNotification;
- (void)onMemoryCheckTimer;
- (void)onThermalMitigationStateChanged:(id)a0;
- (void)onMemoryWarningNotification:(id)a0;
- (void)onCPUDidFallbackNotification:(id)a0;
- (void)checkBusyCondition;
- (void)removeobserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)notify;
- (void)setup;

@end
