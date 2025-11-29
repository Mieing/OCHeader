@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol TIMXOSendMessageProcessTraceUtilityDelegate, OS_dispatch_semaphore;

@interface TIMXOSendMessageProcessTraceUtility : NSObject <TIMXMessageTrackDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *sendProcessDurationMonitorMap;
@property (retain, nonatomic) NSMutableDictionary *receiveProcessDurationMonitorMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sendProcessDurationMonitorMapLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *receiveProcessDurationMonitorMapLock;
@property (weak, nonatomic) id<TIMXOSendMessageProcessTraceUtilityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerProcessMessageDelegate;
- (id)receive_monitorWithBaseLogId:(long long)a0 monitorKey:(id)a1;
- (void)receive_addDurationMonitor:(id)a0 toBaseLogId:(long long)a1;
- (id)unreportedMessages;
- (id)receive_generateFinalExtWithBaseLogId:(long long)a0;
- (id)send_generateNewExtensionWithOrigin:(id)a0 withMonitor:(id)a1;
- (id)send_generateNewExtensionWithOrigin:(id)a0 key:(id)a1 value:(id)a2;
- (BOOL)enableRefiningSendMessageElapsededTime;
- (id)send_generateFinalExtWithOriginExtension:(id)a0 messageId:(id)a1;
- (void)send_addDurationMonitor:(id)a0 toMessage:(id)a1;
- (id)send_clearMonitorOfMessage:(id)a0;
- (id)send_monitorWithMessageId:(id)a0 monitorKey:(id)a1;
- (void)receive_addDurationMonitor:(id)a0 toBaseLogId:(long long)a1 reason:(id)a2;
- (void)receive_clearMonitorsWithLogId:(long long)a0;
- (void)receive_recordBaseResponseLogIdWithLogId:(long long)a0 response:(id)a1;
- (long long)receive_baseResponseLogIdWithResponse:(id)a0;
- (long long)receive_baseResponseLogIdWithNotify:(id)a0;
- (void)receive_clearLogIdWithNotify:(id)a0;
- (void)messageTrack:(id)a0 willHandleMessageWithBaseLogId:(id)a1;
- (void)messageTrack:(id)a0 willIgnoreMessageWithBaseLogId:(id)a1;
- (void)send_addDurationMonitorCore:(id)a0 toMessage:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
