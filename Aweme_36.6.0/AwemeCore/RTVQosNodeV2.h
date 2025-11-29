@class NSString, NSMutableDictionary, NSHashTable, RxScheduler, NSNumber, RTVQosNodeStateModel;
@protocol RTVMultipleDelegateInterface, RTVQosNodeV2Observer, RxInjector;

@interface RTVQosNodeV2 : NSObject <RTVQosNodeV2Observer>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long positionID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) RTVQosNodeStateModel *stateModel;
@property (readonly, nonatomic) NSMutableDictionary *extraMonitorInfo;
@property (readonly, nonatomic) NSHashTable *dependentNodes;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVQosNodeV2Observer> observers;
@property (nonatomic) BOOL skipped;
@property (nonatomic) BOOL disableNotifyStateChange;
@property (retain, nonatomic) NSNumber *startTimestamp;
@property (retain, nonatomic) NSNumber *finishTimestamp;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (copy, nonatomic) id /* block */ extraReportDataBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)durationKey;
- (id)monitorInfo;
- (void)__log:(id)a0;
- (void)finishWithError:(id)a0 extraMonitorInfo:(id)a1;
- (void)appendMonitorData:(id)a0;
- (void)appendDependency:(id)a0;
- (id)__metricFromData:(id)a0;
- (void)__timeout;
- (void)qosNode:(id)a0 didChangeToSkipped:(BOOL)a1;
- (void)__doFinishWithError:(id)a0 extraMonitorInfo:(id)a1 trigger:(id)a2 async:(BOOL)a3;
- (void)__updateState:(long long)a0 withError:(id)a1 trigger:(id)a2;
- (void)__handleStatChangeFrom:(id)a0 toNewState:(id)a1;
- (void)__processDurationWhenStateChangeFrom:(id)a0 toNewState:(id)a1;
- (void)__reportDataIfNeeded;
- (void)__notifyStateChange;
- (void)qosNode:(id)a0 didChangeState:(id)a1;
- (void)__handleDenependentNode:(id)a0 stateChange:(id)a1;
- (long long)__errorCode;
- (id)errorCodeKey;
- (void)updateSkipped:(BOOL)a0;
- (BOOL)isFinishedSuccess;
- (BOOL)isFinishedError;
- (void)__doStartAsync:(BOOL)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)initWithDescription:(id)a0;
- (void)start;
- (id)dependencies;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)statusKey;
- (long long)__duration;
- (long long)__status;
- (void)cancelIfNeeded;

@end
