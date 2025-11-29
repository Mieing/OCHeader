@class NSString;
@protocol RxInjector;

@interface RTVXRMonitor : NSObject <RTVXRMonitor>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) double lastMonitorReportTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitor_interruptSessionBeginWithType:(long long)a0 currentInterruptSessions:(id)a1;
- (void)monitor_interruptSessionEndWithType:(long long)a0 currentInterruptSessions:(id)a1;
- (void)monitorDegradeServiceDisableWithError:(id)a0 uid:(id)a1 conversationID:(id)a2 scene:(long long)a3 isVideo:(BOOL)a4 needApplog:(BOOL)a5;
- (void)monitorRTMMessageSendResult:(long long)a0 messageID:(long long)a1 messageSource:(id)a2;
- (void)monitorClockCorrectorUpdateBestTask:(id)a0 requestTime:(long long)a1 round:(long long)a2 lastNetworkDelay:(id)a3;
- (void)monitorSendMessage:(id)a0 withReceiver:(id)a1 rtmMessageID:(long long)a2;
- (void)monitorReceiveMessage:(id)a0 withReceiver:(id)a1 latency:(long long)a2 isValidLatency:(BOOL)a3 orderIndex:(long long)a4;
- (void)__mergeMapper:(id)a0 params:(id)a1;
- (void)__monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)__monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 needAlog:(BOOL)a4;
- (void).cxx_destruct;

@end
