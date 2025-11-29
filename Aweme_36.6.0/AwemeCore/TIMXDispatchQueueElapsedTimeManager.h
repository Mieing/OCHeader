@class NSSet, NSDictionary, NSString, TIMXSDKInstance;

@interface TIMXDispatchQueueElapsedTimeManager : NSObject <TIMXMeasureDispatchQueueProtocol, TIMXElapsedTimeMonitorDelegate, TIMXMulticastDelegateEventDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSSet *queueNameBlackList;
@property (copy, nonatomic) NSSet *queueNameWhiteList;
@property (nonatomic) long long thresholdDuration;
@property (nonatomic) BOOL enableMeasure;
@property (nonatomic) BOOL enableMeasureAllMultipleQueue;
@property (copy, nonatomic) NSDictionary *delicacyQueueNameConfig;
@property (copy, nonatomic) NSDictionary *delicacySelConfig;
@property (nonatomic) BOOL enableAddDispatchQueueLog;
@property (copy, nonatomic) NSSet *needAddDispatchLogQueues;
@property (readonly, nonatomic) BOOL enableMonitorTimeoutTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackDispatchQueueOperationWithCaller:(id)a0 selector:(SEL)a1 queueLabel:(const char *)a2 performElapsedTime:(double)a3 line:(long long)a4;
- (void)trackDispatchQueueOperationWithCaller:(id)a0 selector:(SEL)a1 queueLabel:(const char *)a2 performElapsedTime:(double)a3 line:(long long)a4 waitingToSwitchQueuesElapsedTime:(double)a5;
- (long long)p_trackOfQueueName:(id)a0 selector:(SEL)a1 className:(id)a2 elapsedTime:(long long)a3;
- (BOOL)conditionCheckWithQueueName:(id)a0 elapsedTime:(long long)a1;
- (BOOL)p_shouldTrackCurrentCallViaPVSampling;
- (BOOL)delicacySelConditionCheckWithClassName:(id)a0 selector:(id)a1 elapsedTime:(long long)a2;
- (BOOL)delicacyQueueNameConditionCheckWithQueueName:(id)a0 elapsedTime:(long long)a1;
- (BOOL)checkElapsedTime:(double)a0;
- (BOOL)checkConditionWithQueueLabel:(id)a0;
- (BOOL)delicacyConditionCheckWithKey:(id)a0 config:(id)a1 elapsedTime:(long long)a2;
- (void)trackDispatchQueueOperationWithCaller:(id)a0 selector:(SEL)a1 queueLabel:(const char *)a2 performElapsedTime:(double)a3;
- (void)elapsedTimeMonitor:(id)a0 taskExecutionTimeout:(id)a1 elapsedTime:(double)a2;
- (BOOL)multicastDelegate:(id)a0 shouldMeasureWithQueueName:(const char *)a1;
- (void)multicastDelegate:(id)a0 didForwardInvocationWithParams:(id)a1;
- (BOOL)enableMulticastDelegateTrackFeature:(id)a0;
- (void)trackDispatchQueueOperationWithParams:(id)a0 performElapsedTime:(double)a1 waitingToSwitchQueuesElapsedTime:(double)a2;
- (id)monitorTimeoutTaskWithParams:(id)a0;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
